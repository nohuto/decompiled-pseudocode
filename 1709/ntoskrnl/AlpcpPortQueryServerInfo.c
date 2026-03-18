/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x1405611F4
 * Callers:
 *     NtAlpcQueryInformation @ 0x140562440 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140561398 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpGetPortNameInformation @ 0x1406DE1A8 (AlpcpGetPortNameInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  void *v7; // rcx
  NTSTATUS result; // eax
  const void **v9; // rdi
  int PortNameInformation; // esi
  ULONG_PTR v11; // r14
  unsigned int v12; // r14d
  __int64 v13; // r13
  __int64 *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  signed __int64 *v17; // rdi
  signed __int64 *v18; // r12
  _QWORD *v19; // r13
  bool v20; // [rsp+30h] [rbp-78h]
  ULONG_PTR v21; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v23; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  void *v25; // [rsp+58h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h]
  unsigned int v27; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+18h]
  unsigned int *v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v5 = a3;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(void **)a2;
    v25 = *(void **)a2;
  }
  else
  {
    v7 = *(void **)a2;
    v25 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v7, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v23 = 0LL;
    v27 = 0;
    v20 = 0;
    v24 = 0LL;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &v21);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( PortNameInformation < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v11 = v21;
      AlpcpLockForCachedReferenceBlob(v21);
      --*(_WORD *)(v11 - 30);
      if ( v11 == *((_QWORD *)Object + 220) )
      {
        v13 = *(_QWORD *)(v11 + 24);
        if ( v13 && (v14 = *(__int64 **)(v13 + 16)) != 0LL )
        {
          BugCheckParameter2 = (ULONG_PTR)(v14 - 2);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v14 - 2), 0LL);
          AlpcpUnlockMessage(v11);
          v21 = 0LL;
          v15 = *v14;
          if ( !*v14 )
            goto LABEL_44;
          v15 &= -(__int64)(ObReferenceObjectSafe(*v14) != 0);
          if ( !v15 )
            goto LABEL_44;
          if ( ((*(_DWORD *)(v13 + 416) >> 1) & 3u) - 1 > 1 )
            v14 += 2;
          v16 = *v14;
          v17 = (signed __int64 *)v16;
          if ( v16 )
          {
            if ( v16 != v15 && !ObReferenceObjectSafe(v16) )
LABEL_44:
              v17 = 0LL;
          }
          v18 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v18);
          KeAbPostRelease((ULONG_PTR)v18);
          if ( !v17 || !v15 )
            goto LABEL_59;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v17 + 44), 0LL);
          v19 = (_QWORD *)v17[3];
          if ( ((unsigned __int8)v19 & 1) != 0 )
            v19 = 0LL;
          if ( v19 )
            ObfReferenceObjectWithTag(v19, 0x63706C41u);
          if ( _InterlockedCompareExchange64(v17 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v17 + 44);
          KeAbPostRelease((ULONG_PTR)(v17 + 44));
          if ( v19 )
          {
            v24 = v19[92];
            ObfDereferenceObjectWithTag(v19, 0x63706C41u);
            v5 = v28;
            if ( v28 > 0x10 )
              v27 = v28 - 16;
            PortNameInformation = AlpcpGetPortNameInformation(v15, &v23, &v27);
            v20 = PortNameInformation >= 0;
          }
          else
          {
LABEL_59:
            v5 = v28;
          }
          if ( v15 )
            ObfDereferenceObject((PVOID)v15);
          if ( v17 && v17 != (signed __int64 *)v15 )
            ObfDereferenceObject(v17);
          v9 = v23;
          v11 = v21;
        }
        else
        {
          v5 = v28;
        }
      }
    }
    if ( v11 )
      AlpcpUnlockMessage(v11);
    ObfDereferenceObject(Object);
    v12 = 32;
    if ( v9 )
    {
      v12 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v12 = v27 + 16;
    }
    if ( v5 < v12 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v20;
      *(_QWORD *)(a2 + 8) = v24;
      if ( v9 )
      {
        *(_WORD *)(a2 + 16) = *(_WORD *)v9;
        *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
        *(_QWORD *)(a2 + 24) = a2 + 32;
        memmove((void *)(a2 + 32), v9[1], *((unsigned __int16 *)v9 + 1));
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
    if ( v29 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v29 = v12;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
