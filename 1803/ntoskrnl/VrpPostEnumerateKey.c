/*
 * XREFs of VrpPostEnumerateKey @ 0x14070A514
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 * Callees:
 *     ExGetPreviousMode @ 0x140005F90 (ExGetPreviousMode.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     VrpCleanupBufferParameter @ 0x140708174 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x140708278 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1407082A8 (VrpProcessBufferParameter.c)
 *     VrpFindExactNamespaceNode @ 0x14070A40C (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x14070CDAC (VrpUpdateKeyInformation.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  const UNICODE_STRING *v3; // r14
  __int64 v4; // rsi
  KPROCESSOR_MODE PreviousMode; // r13
  int v6; // edi
  const UNICODE_STRING *v7; // rax
  int Length; // ecx
  wchar_t *Buffer; // rax
  const UNICODE_STRING *v10; // r13
  _WORD *v11; // r14
  int v12; // eax
  PVOID v13; // r13
  _WORD *PoolWithTag; // rax
  __int64 v15; // r14
  int v16; // eax
  char v17; // r15
  const UNICODE_STRING *v18; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v21; // eax
  wchar_t *v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 ExactNamespaceNode; // rax
  unsigned int v25; // eax
  PVOID v26; // rax
  const void *v27; // r14
  int v28; // r13d
  NTSTATUS Key; // eax
  int v30; // ecx
  int updated; // eax
  int v32; // eax
  char v33; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v35; // [rsp+50h] [rbp-1E8h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v37; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-1C8h] BYREF
  int v40; // [rsp+80h] [rbp-1B8h] BYREF
  int v41; // [rsp+84h] [rbp-1B4h] BYREF
  int v42; // [rsp+88h] [rbp-1B0h] BYREF
  HANDLE v43; // [rsp+90h] [rbp-1A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-1A0h]
  PVOID v45; // [rsp+A0h] [rbp-198h]
  _WORD *v46; // [rsp+A8h] [rbp-190h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-170h]
  __int64 v49; // [rsp+D0h] [rbp-168h]
  const UNICODE_STRING *v50; // [rsp+D8h] [rbp-160h]
  __int64 v51; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  EVENT_DATA_DESCRIPTOR v54; // [rsp+130h] [rbp-108h] BYREF
  int *v55; // [rsp+150h] [rbp-E8h]
  __int64 v56; // [rsp+158h] [rbp-E0h]
  _DWORD *v57; // [rsp+160h] [rbp-D8h]
  __int64 v58; // [rsp+168h] [rbp-D0h]
  wchar_t *v59; // [rsp+170h] [rbp-C8h]
  _DWORD v60[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v61; // [rsp+180h] [rbp-B8h]
  __int64 v62; // [rsp+188h] [rbp-B0h]
  wchar_t *v63; // [rsp+190h] [rbp-A8h]
  _DWORD v64[2]; // [rsp+198h] [rbp-A0h] BYREF
  int *v65; // [rsp+1A0h] [rbp-98h]
  __int64 v66; // [rsp+1A8h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp-88h] BYREF
  int *v68; // [rsp+1D0h] [rbp-68h]
  __int64 v69; // [rsp+1D8h] [rbp-60h]
  _DWORD *v70; // [rsp+1E0h] [rbp-58h]
  __int64 v71; // [rsp+1E8h] [rbp-50h]
  wchar_t *v72; // [rsp+1F0h] [rbp-48h]
  _DWORD v73[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v48 = a1;
  v49 = a2;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v45 = 0LL;
  v3 = *(const UNICODE_STRING **)(a1 + 40);
  v35 = v3;
  v50 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v51 = v4;
  v46 = 0LL;
  P = 0LL;
  PreviousMode = ExGetPreviousMode();
  v33 = PreviousMode;
  ResultLength = 0;
  v37 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v43 = 0LL;
  if ( stru_1403970D0.LevelPlus1 > 5 )
  {
    v40 = *(_DWORD *)(v4 + 12);
    v7 = v3 + 1;
    if ( !v3[1].Buffer )
      v7 = (const UNICODE_STRING *)&EmptyUnicodeString;
    v68 = &v40;
    v69 = 4LL;
    Length = v7->Length;
    Buffer = v7->Buffer;
    v70 = v73;
    v71 = 2LL;
    v72 = Buffer;
    v73[0] = Length;
    v73[1] = 0;
    TlgWrite(&stru_1403970D0, &unk_14030901C, &ActivityId, 0LL, 5u, &pData);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
  {
    v10 = v3;
LABEL_23:
    v15 = a2;
LABEL_24:
    v16 = 0;
LABEL_25:
    v17 = v33;
    goto LABEL_26;
  }
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 16), *(_DWORD *)(v4 + 24), &v46);
  if ( v6 < 0 )
    goto LABEL_22;
  v11 = v46;
  v6 = VrpOutputBufferParameter(PreviousMode, v46, *(_DWORD *)(v4 + 24), (const void **)(v4 + 16));
  if ( v6 < 0 )
    goto LABEL_22;
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 32), 4u, &v37);
  if ( v6 < 0 )
    goto LABEL_22;
  v6 = VrpOutputBufferParameter(PreviousMode, v37, 4u, (const void **)(v4 + 32));
  if ( v6 < 0 )
    goto LABEL_22;
  v12 = *(_DWORD *)(v48 + 8);
  if ( v12 == -1073741789 || v12 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v6 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           PreviousMode,
           &KeyHandle);
    if ( v6 < 0 )
      goto LABEL_22;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_22;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x67655256u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_22;
    }
    v13 = PoolWithTag;
    v45 = PoolWithTag;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_22;
  }
  else
  {
    v13 = 0LL;
  }
  v21 = *(_DWORD *)(v4 + 12);
  if ( v21 && !v13 )
  {
    if ( v21 == 1 )
    {
      Source.MaximumLength = v11[10];
      Source.Length = Source.MaximumLength;
      v22 = v11 + 12;
      goto LABEL_55;
    }
    v6 = -1073741811;
LABEL_22:
    v10 = v35;
    goto LABEL_23;
  }
  Source.MaximumLength = v11[6];
  Source.Length = Source.MaximumLength;
  v22 = v11 + 8;
LABEL_55:
  Source.Buffer = v22;
  v10 = v35;
  v6 = VrpBuildKeyPath(v35 + 1, &Source, &Destination);
  v15 = a2;
  if ( v6 < 0 )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&Destination, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v43, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v6 = 0;
    v16 = 1;
    goto LABEL_25;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 16));
  KeAbPostRelease(a2 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v25 = *(_DWORD *)(v4 + 24);
  if ( v25 )
  {
    v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x67655256u);
    P = v26;
    if ( !v26 )
    {
      v6 = -1073741670;
      goto LABEL_24;
    }
  }
  else
  {
    v26 = 0LL;
  }
  v27 = v26;
  v28 = (int)v37;
  Key = ZwQueryKey(v43, *(KEY_INFORMATION_CLASS *)(v4 + 12), v26, *(_DWORD *)(v4 + 24), v37);
  v6 = Key;
  if ( Key == -1073741789 )
  {
    v27 = 0LL;
    goto LABEL_70;
  }
  if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v6 = 0;
    goto LABEL_22;
  }
LABEL_70:
  v30 = *(_DWORD *)(v4 + 12);
  if ( v30 != 2 )
  {
    updated = VrpUpdateKeyInformation(v30, (_DWORD)v27, *(_DWORD *)(v4 + 24), v28, (__int64)&Destination, 0);
    v6 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_22;
  }
  if ( v6 != -2147483643 && v6 != -1073741789 )
    memmove(*(void **)(v4 + 16), v27, *(unsigned int *)(v4 + 24));
  v17 = v33;
  v32 = VrpOutputBufferParameter(v33, *(void **)(v4 + 32), 4u, (const void **)&v37);
  v10 = v35;
  v15 = a2;
  if ( v32 >= 0 )
  {
    *(_DWORD *)(v48 + 24) = v6;
    v6 = -1073740541;
  }
  else
  {
    v6 = v32;
  }
  v16 = 0;
LABEL_26:
  if ( v16 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v15 + 16));
    KeAbPostRelease(v15 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 && stru_1403970D0.LevelPlus1 > 2 )
  {
    v41 = *(_DWORD *)(v4 + 12);
    v18 = v10 + 1;
    if ( !v10[1].Buffer )
      v18 = (const UNICODE_STRING *)&EmptyUnicodeString;
    p_Destination = &Destination;
    if ( !Destination.Buffer )
      p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
    v42 = v6;
    v55 = &v41;
    v56 = 4LL;
    v57 = v60;
    v58 = 2LL;
    v59 = v18->Buffer;
    v60[0] = v18->Length;
    v60[1] = 0;
    v61 = v64;
    v62 = 2LL;
    v63 = p_Destination->Buffer;
    v64[0] = p_Destination->Length;
    v64[1] = 0;
    v65 = &v42;
    v66 = 4LL;
    TlgWrite(&stru_1403970D0, &unk_140308F9C, &ActivityId, 0LL, 8u, &v54);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v43 )
    ZwClose(v43);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( v45 )
    ExFreePoolWithTag(v45, 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  VrpCleanupBufferParameter(v17, (PVOID *)&v46);
  VrpCleanupBufferParameter(v17, (PVOID *)&v37);
  return (unsigned int)v6;
}
