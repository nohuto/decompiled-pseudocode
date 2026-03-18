/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x140748D94
 * Callers:
 *     NtAlpcQueryInformation @ 0x140551C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1407488C8 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpGetPortNameInformation @ 0x140748CDC (AlpcpGetPortNameInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  NTSTATUS result; // eax
  void *v8; // rcx
  const void **v9; // rdi
  __int64 v10; // rdx
  int PortNameInformation; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // r14
  __int64 v15; // r13
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // r12
  signed __int64 *v22; // rdi
  signed __int64 *v23; // r12
  _QWORD *v24; // r13
  unsigned int v25; // r14d
  bool v26; // [rsp+30h] [rbp-78h]
  ULONG_PTR v27; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h]
  void *v31; // [rsp+58h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h]
  unsigned int v33; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+18h]
  unsigned int *v35; // [rsp+C8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v5 = a3;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(void **)a2;
    v31 = *(void **)a2;
  }
  else
  {
    v8 = *(void **)a2;
    v31 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v8, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v29 = 0LL;
    v33 = 0;
    v26 = 0;
    v30 = 0LL;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread((__int64)Object, (__int64 *)&v27);
    if ( PortNameInformation == -1073741275 )
    {
      v14 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( PortNameInformation < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v14 = v27;
      AlpcpLockForCachedReferenceBlob(v27);
      --*(_WORD *)(v14 - 30);
      if ( v14 == *((_QWORD *)Object + 220) )
      {
        v15 = *(_QWORD *)(v14 + 24);
        if ( v15 && (v16 = *(__int64 **)(v15 + 16)) != 0LL )
        {
          BugCheckParameter2 = (ULONG_PTR)(v16 - 2);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v16 - 2), 0LL);
          AlpcpUnlockMessage(v14, v17, v18, v19);
          v27 = 0LL;
          v20 = *v16;
          if ( !*v16 )
            goto LABEL_24;
          v20 &= -(__int64)(ObReferenceObjectSafe(*v16) != 0);
          if ( !v20 )
            goto LABEL_24;
          if ( ((*(_DWORD *)(v15 + 416) >> 1) & 3u) - 1 > 1 )
            v16 += 2;
          v21 = *v16;
          v22 = (signed __int64 *)v21;
          if ( v21 )
          {
            if ( v21 != v20 && !ObReferenceObjectSafe(v21) )
LABEL_24:
              v22 = 0LL;
          }
          v23 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v23);
          KeAbPostRelease((ULONG_PTR)v23);
          if ( !v22 || !v20 )
            goto LABEL_39;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v22 + 44), 0LL);
          v24 = 0LL;
          if ( (v22[3] & 1) == 0 )
            v24 = (_QWORD *)v22[3];
          if ( v24 )
            ObfReferenceObjectWithTag(v24, 0x63706C41u);
          if ( _InterlockedCompareExchange64(v22 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v22 + 44);
          KeAbPostRelease((ULONG_PTR)(v22 + 44));
          if ( v24 )
          {
            v30 = v24[92];
            ObfDereferenceObjectWithTag(v24, 0x63706C41u);
            v5 = v34;
            if ( v34 > 0x10 )
              v33 = v34 - 16;
            PortNameInformation = AlpcpGetPortNameInformation((char *)v20, &v29, &v33);
            v26 = PortNameInformation >= 0;
          }
          else
          {
LABEL_39:
            v5 = v34;
          }
          if ( v20 )
            ObfDereferenceObject((PVOID)v20);
          if ( v22 && v22 != (signed __int64 *)v20 )
            ObfDereferenceObject(v22);
          v9 = v29;
          v14 = v27;
        }
        else
        {
          v5 = v34;
        }
      }
    }
    if ( v14 )
      AlpcpUnlockMessage(v14, v10, v12, v13);
    ObfDereferenceObject(Object);
    v25 = 32;
    if ( v9 )
    {
      v25 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v25 = v33 + 16;
    }
    if ( v5 < v25 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v26;
      *(_QWORD *)(a2 + 8) = v30;
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
    if ( v35 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v35 = v25;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
