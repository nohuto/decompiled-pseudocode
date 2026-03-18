/*
 * XREFs of NtAdjustPrivilegesToken @ 0x14049CF30
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1406EB860 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdjustPrivileges @ 0x14049D310 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14049D9A8 (SeCaptureLuidAndAttributesArray.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  char PreviousMode; // r14
  __int64 v11; // rsi
  char *v12; // rcx
  PTOKEN_PRIVILEGES v13; // rbx
  NTSTATUS result; // eax
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  __int64 v18; // r12
  int v19; // r8d
  _QWORD *v20; // rdi
  int v21; // edx
  int v22; // r8d
  ULONG v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v27; // [rsp+30h] [rbp-88h]
  char v28; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v30; // [rsp+58h] [rbp-60h] BYREF
  PVOID v31; // [rsp+60h] [rbp-58h] BYREF
  ULONG v32; // [rsp+68h] [rbp-50h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h] BYREF
  NTSTATUS v34; // [rsp+78h] [rbp-40h]
  int v35; // [rsp+7Ch] [rbp-3Ch]
  __int64 v36; // [rsp+80h] [rbp-38h] BYREF
  char v37; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v33 = 0LL;
  LODWORD(v36) = 0;
  v30 = 0;
  v32 = 0;
  v37 = 0;
  v35 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
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
      v35 = 12 * (PrivilegeCount - 1) + 16;
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
                 v27,
                 (__int64)&v33,
                 (__int64)&v36);
      v34 = result;
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
  v15 = ObReferenceObjectByHandle(
          TokenHandle,
          v13 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v31,
          0LL);
  if ( v15 < 0 )
  {
    if ( v33 )
      SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
    return v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (PERESOURCE *)v31;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v31 + 6), 1u);
    _InterlockedOr(v24, 0);
    v18 = v33;
    LOBYTE(v19) = DisableAllPrivileges;
    v20 = v31;
    SepAdjustPrivileges(
      (_DWORD)v31,
      0,
      v19,
      PrivilegeCount,
      v33,
      (__int64)v13,
      (__int64)&v30,
      (__int64)&v32,
      (__int64)&v37);
    if ( v13 && (*ReturnLength = v30, v30 > BufferLength) )
    {
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v31);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return -1073741789;
    }
    else
    {
      LOBYTE(v22) = DisableAllPrivileges;
      LOBYTE(v21) = 1;
      v34 = SepAdjustPrivileges(
              (_DWORD)v20,
              v21,
              v22,
              PrivilegeCount,
              v18,
              (__int64)v13,
              (__int64)&v30,
              (__int64)&v32,
              (__int64)&v37);
      if ( v13 )
      {
        v23 = v32;
        v13->PrivilegeCount = v32;
        if ( !v23 )
        {
          v13->Privileges[0].Luid = 0LL;
          v13->Privileges[0].Attributes = 0;
        }
      }
      if ( v37 )
        v20[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v31);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return v34;
    }
  }
}
