/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00BE238
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BE574 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00C8818 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00C8BF8 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E4F08 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

volatile signed __int32 **__fastcall ndisBindGetFilterDriver(volatile signed __int32 **a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rcx
  char *PoolWithTag; // rax
  __int64 v14; // rbp
  volatile signed __int32 **v15; // rdx
  KLockHolder v16; // [rsp+20h] [rbp-48h] BYREF

  v3 = qword_1C0098800;
  v16.m_Lock = (KPushLockBase *)qword_1C0098800;
  KeEnterCriticalRegion();
  v16.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v7 = qword_1C0098800;
  v16.m_State = Exclusive;
  v8 = 0LL;
  v9 = *(unsigned int *)(qword_1C0098800 + 28);
  while ( v8 != v9 )
  {
    if ( v8 >= *(unsigned int *)(v7 + 28) )
      __fastfail(5u);
    v10 = *(volatile signed __int32 **)(*(_QWORD *)(v7 + 32) + 8 * v8);
    if ( v10 )
      _InterlockedIncrement(v10 + 16);
    v11 = *((_QWORD *)v10 + 3) - *a2;
    if ( !v11 )
      v11 = *((_QWORD *)v10 + 4) - a2[1];
    if ( !v11 )
    {
      if ( a3 && !ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v10) )
      {
        *a1 = 0LL;
        if ( v10 )
          goto LABEL_26;
        goto LABEL_15;
      }
LABEL_14:
      *a1 = v10;
      goto LABEL_15;
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v10);
    }
    ++v8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x446C4642u);
  v10 = (volatile signed __int32 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    *a1 = 0LL;
    goto LABEL_15;
  }
  *(_WORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
  *((_DWORD *)PoolWithTag + 10) = 0;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *((_QWORD *)PoolWithTag + 7) = 0LL;
  *((_DWORD *)PoolWithTag + 16) = 1;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a2;
  if ( ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)PoolWithTag) )
  {
    v14 = qword_1C0098800;
    if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
                            qword_1C0098800 + 24,
                            (unsigned int)(*(_DWORD *)(qword_1C0098800 + 28) + 1)) )
    {
      v15 = (volatile signed __int32 **)(*(_QWORD *)(v14 + 32) + 8LL * *(unsigned int *)(v14 + 28));
      if ( v15 )
      {
        *v15 = v10;
        _InterlockedIncrement(v10 + 16);
      }
      ++*(_DWORD *)(v14 + 28);
      goto LABEL_14;
    }
  }
  *a1 = 0LL;
LABEL_26:
  if ( _InterlockedExchangeAdd(v10 + 16, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v10);
LABEL_15:
  KLockHolder::~KLockHolder(&v16);
  return a1;
}
