/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00B5ECC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BBB14 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00B6168 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B61AC (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00B6318 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E6768 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  _WORD *v9; // rbx
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  _WORD *PoolWithTag; // rax
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rax
  __int64 v16; // rsi
  bool v17; // zf
  PVOID v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-20h]
  KLockHolder v20; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v20.m_State = Unlocked;
  v20.m_Lock = (KPushLockBase *)qword_1C00996D8;
  v20.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v20);
  v6 = qword_1C00996D8;
  v7 = 0LL;
  v8 = *(unsigned int *)(qword_1C00996D8 + 28);
  v19 = v8;
  while ( v7 != v8 )
  {
    if ( v7 >= *(unsigned int *)(v6 + 28) )
      __fastfail(5u);
    v9 = *(_WORD **)(*(_QWORD *)(v6 + 32) + 8 * v7);
    v10 = (volatile signed __int32 *)(v9 + 32);
    if ( v9 )
      _InterlockedIncrement(v10);
    v11 = *((_QWORD *)v9 + 3) - *a2;
    if ( !v11 )
      v11 = *((_QWORD *)v9 + 4) - a2[1];
    if ( !v11 )
    {
      if ( a3 && !ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v9) )
      {
        *a1 = 0LL;
        if ( v9 )
        {
          v17 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1;
          goto LABEL_30;
        }
        goto LABEL_15;
      }
LABEL_14:
      *a1 = v9;
      goto LABEL_15;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v9);
    }
    v8 = v19;
    ++v7;
  }
  P = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x446C4642u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v14 = PoolWithTag + 4;
    v14[1] = v14;
    *v14 = v14;
    *((_DWORD *)v9 + 10) = 0;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_DWORD *)v9 + 16) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::reset(&P, 0LL);
  v15 = (volatile signed __int32 *)P;
  if ( !v9 )
  {
    *a1 = 0LL;
    if ( !v15 || _InterlockedExchangeAdd(v15 + 16, 0xFFFFFFFF) != 1 )
      goto LABEL_15;
    v18 = P;
LABEL_38:
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v18);
    goto LABEL_15;
  }
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  *(_OWORD *)(v9 + 12) = *(_OWORD *)a2;
  if ( ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v9) )
  {
    v16 = qword_1C00996D8;
    if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
                            qword_1C00996D8 + 24,
                            (unsigned int)(*(_DWORD *)(qword_1C00996D8 + 28) + 1)) )
    {
      *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8LL * *(unsigned int *)(v16 + 28)) = v9;
      _InterlockedIncrement((volatile signed __int32 *)v9 + 16);
      ++*(_DWORD *)(v16 + 28);
      goto LABEL_14;
    }
    *a1 = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 16, 0xFFFFFFFF) == 1;
LABEL_30:
  if ( v17 )
  {
    v18 = v9;
    goto LABEL_38;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v20);
  return a1;
}
