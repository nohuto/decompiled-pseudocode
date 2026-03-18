/*
 * XREFs of NtAdjustGroupsToken @ 0x14046D64C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SepAdjustGroups @ 0x14046D980 (SepAdjustGroups.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v9; // r12
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  int v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  __int64 v18; // r13
  int v19; // r8d
  _QWORD *v20; // r14
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v29; // [rsp+50h] [rbp-58h]
  ULONG v30; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v31; // [rsp+58h] [rbp-50h]
  int GroupCount; // [rsp+5Ch] [rbp-4Ch]
  ULONG v33; // [rsp+60h] [rbp-48h] BYREF
  int v34; // [rsp+64h] [rbp-44h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v36; // [rsp+70h] [rbp-38h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v38; // [rsp+C8h] [rbp+20h]

  v38 = BufferLength;
  GroupCount = 0;
  v36 = 0LL;
  v34 = 0;
  v30 = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ResetToDefault )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   NewState->Groups,
                   0,
                   v27,
                   (int)DestinationSid,
                   (__int64)&v36,
                   (__int64)&v34),
        v31 = result,
        result >= 0) )
  {
    v15 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            &Object,
            0LL);
    if ( v15 < 0 )
    {
      if ( v36 )
      {
        LOBYTE(v14) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v36, v14);
      }
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v26, 0);
      v18 = v36;
      LOBYTE(v19) = ResetToDefault;
      v20 = Object;
      v21 = SepAdjustGroups(
              (int)Object,
              0,
              v19,
              GroupCount,
              v36,
              (__int64)v12,
              0LL,
              (__int64)&v30,
              (__int64)&v33,
              (__int64)&v37);
      v31 = v21;
      if ( v12 )
      {
        v22 = (int)ReturnLength;
        *ReturnLength = v30;
      }
      if ( v21 < 0 )
        goto LABEL_25;
      if ( !v12 )
      {
LABEL_21:
        LOBYTE(v23) = ResetToDefault;
        LOBYTE(v22) = 1;
        v31 = SepAdjustGroups(
                (int)v20,
                v22,
                v23,
                GroupCount,
                v18,
                (__int64)v12,
                v9,
                (__int64)&v30,
                (__int64)&v33,
                (__int64)&v37);
        if ( v12 )
          v12->GroupCount = v33;
        if ( (_BYTE)v37 )
          v20[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_25:
        _InterlockedOr(v26, 0);
        ExReleaseResourceLite(v17[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        if ( v36 )
        {
          LOBYTE(v24) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v36, v24);
        }
        return v31;
      }
      if ( v30 <= v38 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[v33].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_21;
      }
      _InterlockedOr(v26, 0);
      ExReleaseResourceLite(v17[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
      if ( v36 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v36, v25);
      }
      return -1073741789;
    }
  }
  return result;
}
