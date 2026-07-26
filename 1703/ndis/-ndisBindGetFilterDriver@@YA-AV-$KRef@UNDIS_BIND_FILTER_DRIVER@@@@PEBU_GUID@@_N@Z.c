/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00ACFDC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00B1D94 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00ACCB0 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00AD360 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00AD398 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DAEF8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // r13d
  char *v9; // rbx
  __int64 v10; // rcx
  char *PoolWithTag; // rax
  _QWORD *v13; // rax
  volatile signed __int32 *v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  bool v17; // zf
  PVOID v18; // rcx
  KLockHolder v19; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v19.m_State = Unlocked;
  v19.m_Lock = (KPushLockBase *)qword_1C00926E0;
  v19.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v19);
  v6 = qword_1C00926E0;
  v7 = 0LL;
  v8 = *(_DWORD *)(qword_1C00926E0 + 28);
  while ( (_DWORD)v7 != v8 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 28) )
      __fastfail(0xBAD0FFu);
    v9 = *(char **)(*(_QWORD *)(v6 + 32) + 8 * v7);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)v9 + 18);
    v10 = *((_QWORD *)v9 + 4) - *a2;
    if ( !v10 )
      v10 = *((_QWORD *)v9 + 5) - a2[1];
    if ( !v10 )
    {
      if ( a3 && !ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v9 + 8)) )
      {
        *a1 = 0LL;
        if ( v9 )
        {
          v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 18, 0xFFFFFFFF) == 1;
          goto LABEL_29;
        }
        goto LABEL_15;
      }
LABEL_14:
      *a1 = v9;
      goto LABEL_15;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 18, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v9);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  P = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x446C4642u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_WORD *)PoolWithTag + 4) = 0;
    v13 = PoolWithTag + 16;
    v13[1] = v13;
    *v13 = v13;
    *((_DWORD *)v9 + 12) = 0;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_DWORD *)v9 + 18) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::reset((volatile signed __int32 **)&P, 0LL);
  v14 = (volatile signed __int32 *)P;
  if ( !v9 )
  {
    *a1 = 0LL;
    if ( !v14 || _InterlockedExchangeAdd(v14 + 18, 0xFFFFFFFF) != 1 )
      goto LABEL_15;
    v18 = P;
LABEL_38:
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v18);
    goto LABEL_15;
  }
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  *((_OWORD *)v9 + 2) = *(_OWORD *)a2;
  if ( ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v9 + 8)) )
  {
    v15 = qword_1C00926E0;
    if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(
                            qword_1C00926E0 + 24,
                            (unsigned int)(*(_DWORD *)(qword_1C00926E0 + 28) + 1)) )
    {
      v16 = (_QWORD *)(*(_QWORD *)(v15 + 32) + 8LL * *(unsigned int *)(v15 + 28));
      if ( v16 )
      {
        *v16 = v9;
        _InterlockedAdd((volatile signed __int32 *)v9 + 18, 1u);
      }
      ++*(_DWORD *)(v15 + 28);
      goto LABEL_14;
    }
  }
  *a1 = 0LL;
  v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 18, 0xFFFFFFFF) == 1;
LABEL_29:
  if ( v17 )
  {
    v18 = v9;
    goto LABEL_38;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v19);
  return a1;
}
