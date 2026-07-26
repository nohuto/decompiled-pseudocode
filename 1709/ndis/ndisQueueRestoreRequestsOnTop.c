/*
 * XREFs of ndisQueueRestoreRequestsOnTop @ 0x1C0047228
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C004502C (ndisMRestoreFilterSettings.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisFQueueOidRequest @ 0x1C0043D74 (ndisFQueueOidRequest.c)
 *     ndisMQueueOidRequest @ 0x1C0044F5C (ndisMQueueOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(__int64 a1, _QWORD **a2, int a3, char a4)
{
  __int64 v4; // rbx
  bool v6; // r13
  unsigned int v7; // r15d
  __int64 v9; // rbp
  unsigned int v10; // r12d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbp
  char v15; // al
  int v16; // ebx
  void *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  void *v20; // r10
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  int v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+34h] [rbp-34h] BYREF
  int v27; // [rsp+38h] [rbp-30h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = a1;
  v10 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x3Du, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a3);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_49;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a4 )
  {
    v13 = v9;
  }
  else
  {
    v13 = *(_QWORD *)(v9 + 2608);
    if ( *(_BYTE *)v13 == 5 )
    {
      while ( 1 )
      {
        v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v13 + 320), 0xFu, &v25);
        if ( v6 )
          break;
        v13 = *(_QWORD *)(v13 + 424);
        if ( *(_BYTE *)v13 != 5 )
          goto LABEL_10;
      }
      v16 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v13 + 320), 0xFu, &v26);
          if ( !v6 )
            break;
          if ( ++v16 >= v7 )
            goto LABEL_22;
        }
        for ( ; v16; --v16 )
          ndisDereferenceRef((PKSPIN_LOCK)(v13 + 320));
      }
LABEL_22:
      if ( *(_BYTE *)v13 != 5 )
      {
LABEL_10:
        v4 = 0LL;
        goto LABEL_11;
      }
      v4 = v13;
    }
  }
LABEL_11:
  v14 = 0LL;
  if ( *(_BYTE *)v13 == 17 )
    v14 = v13;
  if ( v4 )
  {
    if ( !v6 )
      goto LABEL_47;
    v15 = ndisReferenceRefEx((PKSPIN_LOCK)(v4 + 320), 0xCu, &v27);
  }
  else
  {
    v15 = ndisReferenceMiniport(a1);
  }
  if ( v15 )
  {
    v17 = (void *)v14;
    if ( v4 )
      v17 = (void *)v4;
    v12[1].Parameter = v17;
    if ( v4 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2298577;
      while ( 1 )
      {
        v18 = *a2;
        if ( *a2 == a2 )
          break;
        if ( (_QWORD **)v18[1] != a2 || (v19 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
          __fastfail(3u);
        *a2 = v19;
        v19[1] = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v4, (__int64)(v18 - 9)) )
          ExFreePoolWithTag(v20, 0);
      }
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    }
    else
    {
      while ( 1 )
      {
        v21 = *a2;
        if ( *a2 == a2 )
          break;
        if ( (_QWORD **)v21[1] != a2 || (v22 = (_QWORD *)*v21, *(_QWORD **)(*v21 + 8LL) != v21) )
          __fastfail(3u);
        *a2 = v22;
        v23 = v21 - 9;
        v22[1] = a2;
        if ( (unsigned int)ndisMQueueOidRequest(v14, (__int64)(v21 - 9)) )
          ExFreePoolWithTag(v23, 0);
      }
    }
    v12[1].List.Blink = 0LL;
    v12[1].List.Flink = retaddr;
    v12->List.Flink = 0LL;
    v12->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    v12->Parameter = v12;
    ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_48;
  }
  if ( v6 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)(v4 + 320));
      --v7;
    }
    while ( v7 );
  }
LABEL_47:
  ExFreePoolWithTag(v12, 0);
LABEL_48:
  v9 = a1;
LABEL_49:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(62LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v9, a2, v10);
  return v10;
}
