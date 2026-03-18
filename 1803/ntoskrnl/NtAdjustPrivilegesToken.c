/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1404EC040
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140787398 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepAdjustPrivileges @ 0x1404EC418 (SepAdjustPrivileges.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1404ECAE0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1404ECB00 (SeCaptureLuidAndAttributesArray.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rsi
  char *v12; // rcx
  PTOKEN_PRIVILEGES v13; // rbx
  NTSTATUS result; // eax
  __int64 v15; // rdx
  int v16; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v18; // rsi
  __int64 v19; // r12
  int v20; // r8d
  _QWORD *v21; // rdi
  int v22; // edx
  int v23; // r8d
  ULONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v30; // [rsp+30h] [rbp-88h]
  KPROCESSOR_MODE v31; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v33; // [rsp+58h] [rbp-60h] BYREF
  PVOID v34; // [rsp+60h] [rbp-58h] BYREF
  ULONG v35; // [rsp+68h] [rbp-50h] BYREF
  __int64 v36; // [rsp+70h] [rbp-48h] BYREF
  NTSTATUS v37; // [rsp+78h] [rbp-40h]
  _DWORD v38[5]; // [rsp+7Ch] [rbp-3Ch] BYREF
  char v39; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v36 = 0LL;
  v38[0] = 0;
  v33 = 0;
  v35 = 0;
  v39 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = PreviousMode;
  if ( PreviousMode )
  {
    if ( DisableAllPrivileges )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
      PrivilegeCount = NewState->PrivilegeCount;
      v38[1] = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v12 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < (char *)NewState )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v13 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
LABEL_16:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v30,
                 (__int64)&v36,
                 (__int64)v38);
      v37 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_18;
  }
  v13 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_16;
  }
LABEL_18:
  v16 = ObReferenceObjectByHandle(
          TokenHandle,
          v13 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v34,
          0LL);
  if ( v16 < 0 )
  {
    if ( v36 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v36, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v34;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v34 + 6), 1u);
    _InterlockedOr(v27, 0);
    v19 = v36;
    LOBYTE(v20) = DisableAllPrivileges;
    v21 = v34;
    SepAdjustPrivileges(
      (_DWORD)v34,
      0,
      v20,
      PrivilegeCount,
      v36,
      (__int64)v13,
      (__int64)&v33,
      (__int64)&v35,
      (__int64)&v39);
    if ( v13 && (*ReturnLength = v33, v33 > BufferLength) )
    {
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v34);
      if ( v36 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v36, v26);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v23) = DisableAllPrivileges;
      LOBYTE(v22) = 1;
      v37 = SepAdjustPrivileges(
              (_DWORD)v21,
              v22,
              v23,
              PrivilegeCount,
              v19,
              (__int64)v13,
              (__int64)&v33,
              (__int64)&v35,
              (__int64)&v39);
      if ( v13 )
      {
        v24 = v35;
        v13->PrivilegeCount = v35;
        if ( !v24 )
        {
          v13->Privileges[0].Luid = 0LL;
          v13->Privileges[0].Attributes = 0;
        }
      }
      if ( v39 )
        v21[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v34);
      if ( v36 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v36, v25);
      }
      return v37;
    }
  }
}
