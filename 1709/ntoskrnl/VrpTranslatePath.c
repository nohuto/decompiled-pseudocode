/*
 * XREFs of VrpTranslatePath @ 0x1406A831C
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     VrpFindNamespaceNode @ 0x1406A5DA0 (VrpFindNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x1406A9810 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1406A98B8 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpTranslatePath(
        PVOID Object,
        void *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  int v8; // r14d
  PVOID v9; // rsi
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 NamespaceNode; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // r11
  wchar_t *Buffer; // rdi
  unsigned __int16 v16; // r15
  NTSTATUS v17; // ebx
  UNICODE_STRING v18; // xmm6
  int v19; // ecx
  int v20; // ecx
  void *v21; // rbx
  char v22; // dl
  int v23; // r8d
  PVOID v24; // rax
  wchar_t *v25; // r15
  unsigned __int16 Length; // r11
  unsigned __int64 i; // rcx
  __int64 v28; // rdi
  __int16 v29; // r11
  char v31; // [rsp+38h] [rbp-B1h]
  unsigned __int64 v32; // [rsp+40h] [rbp-A9h] BYREF
  UNICODE_STRING v33; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-89h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-79h] BYREF
  PVOID v37; // [rsp+78h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-49h] BYREF
  int v42; // [rsp+148h] [rbp+5Fh]

  v8 = *(unsigned __int16 *)(a3 + 32);
  v9 = Object;
  v33 = *a4;
  v10 = 0;
  KeyHandle = 0LL;
  v42 = v8;
  v31 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v9 + 16, 0LL);
    NamespaceNode = VrpFindNamespaceNode((ULONGLONG *)v9, (__int64)&v33, 1, 0LL, &v36);
    if ( !NamespaceNode )
    {
      v17 = -1073741772;
      goto LABEL_41;
    }
    v13 = 0LL;
    v32 = 0LL;
    if ( v36 )
    {
      do
        VrpGetNextToken(&v33, &v32, &Source);
      while ( v14 != 1 );
      v13 = v32;
    }
    Buffer = v33.Buffer;
    v16 = v33.Length - 2 * v13;
    Source.Buffer = &v33.Buffer[v13];
    Source.Length = v16;
    Source.MaximumLength = v16;
    v17 = VrpBuildKeyPath((PCUNICODE_STRING)(NamespaceNode + 24), &Source, &DestinationString);
    if ( v17 < 0 )
      goto LABEL_41;
    VrpStripTrailingCharacters(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v18 = DestinationString;
    v33 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v19 = *(_DWORD *)(NamespaceNode + 56);
    v10 |= v19 & 4;
    if ( v9 == Object )
      v10 |= v19 & 2;
    if ( !v16 )
      v10 |= 0x20000000u;
    v20 = *(unsigned __int16 *)(NamespaceNode + 60);
    v21 = *(void **)(NamespaceNode + 16);
    v22 = v31;
    if ( v42 < v20 )
      v22 = 1;
    v23 = *(unsigned __int16 *)(NamespaceNode + 62) - v20 + v42;
    v31 = v22;
    v42 = v23;
    if ( !v21 )
      break;
    ObfReferenceObjectWithTag(v21, 0x67655256u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9 + 2);
    KeAbPostRelease((ULONG_PTR)v9 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 != Object )
      ObfDereferenceObjectWithTag(v9, 0x67655256u);
    v9 = v21;
  }
  if ( a6 )
  {
    if ( v22 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(NamespaceNode + 24);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v17 < 0 )
        goto LABEL_41;
      v17 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v37, 0LL);
      v24 = v37;
      if ( v17 < 0 )
        goto LABEL_41;
    }
    else
    {
      ObfReferenceObject(a2);
      v24 = a2;
    }
    v22 = v31;
    v23 = v42;
    *a6 = v24;
  }
  if ( a7 )
  {
    v25 = v33.Buffer;
    Length = v33.Length;
    if ( v22 )
    {
      for ( i = (unsigned __int64)*(unsigned __int16 *)(NamespaceNode + 24) >> 1; ; ++i )
      {
        v32 = i;
        if ( 2 * i >= v33.Length || v33.Buffer[i] != 92 )
          break;
      }
    }
    else
    {
      v32 = 0LL;
      i = 0LL;
      v28 = 0LL;
      if ( v23 > 0 )
      {
        do
        {
          VrpGetNextToken(&v33, &v32, &Source);
          ++v28;
        }
        while ( (int)v28 < v42 );
        i = v32;
      }
    }
    v29 = Length - 2 * i;
    *(_QWORD *)(a7 + 8) = &v25[i];
    *(_WORD *)a7 = v29;
    *(_WORD *)(a7 + 2) = v29;
  }
  if ( a8 )
    *a8 = v10;
  *a5 = v18;
  RtlInitUnicodeString(&v33, 0LL);
  v17 = 0;
LABEL_41:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9 + 2);
  KeAbPostRelease((ULONG_PTR)v9 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 && v9 != Object )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( v33.Buffer && v33.Buffer != a4->Buffer )
    ExFreePoolWithTag(v33.Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v17;
}
