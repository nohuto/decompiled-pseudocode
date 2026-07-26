/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C00F8DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v5; // rbx
  struct _DMA_ADAPTER *v6; // r14
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v7; // r12
  __int64 v9; // rdi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **PoolWithTag; // rax
  unsigned int v11; // edi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v12; // rsi
  int v13; // eax
  _DEVICE_OBJECT *v14; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  _DMA_OPERATIONS *DmaOperations; // r12
  int v17; // eax
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rax
  ULONG NumberOfMapRegisters; // [rsp+20h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v23; // [rsp+28h] [rbp-51h]
  KLockHolder v24; // [rsp+30h] [rbp-49h] BYREF
  _DWORD DeviceDescription[16]; // [rsp+50h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v24.m_Lock = a1;
  *a3 = 0LL;
  v5 = 0LL;
  v24.m_State = Unlocked;
  v6 = 0LL;
  v24.m_Region.m_Entered = 0;
  v7 = a3;
  v23 = a3;
  KLockHolder::AcquireExclusive(&v24);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v11 = -1073741811;
    goto LABEL_39;
  }
  v9 = *((_QWORD *)MiniportAdapterContext + 689);
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  v12 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
  {
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = *(_BYTE *)(v9 + 14);
    goto LABEL_12;
  }
  if ( a1[3].m_Lock.0 )
  {
    v11 = -1073741808;
    goto LABEL_41;
  }
  if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) != *(_BYTE *)(v9 + 14) )
  {
    v11 = -1073740007;
LABEL_41:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x6D41444Eu);
    goto LABEL_43;
  }
LABEL_12:
  if ( !*((_BYTE *)&a1[3].m_Lock.0 + 1) )
  {
    memset(&DeviceDescription[1], 0, 0x3CuLL);
    v13 = *(_DWORD *)(v9 + 20);
    v14 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 482);
    NumberOfMapRegisters = 0;
    DeviceDescription[5] = -1;
    DeviceDescription[10] = v13;
    DeviceDescription[0] = 3;
    LOWORD(DeviceDescription[1]) = 257;
    DeviceDescription[8] = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v14, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    v6 = DmaAdapter;
    if ( !DmaAdapter )
    {
      if ( (unsigned __int8)byte_1C0098764 >= 2u )
        WPP_SF_q(0xAu, &WPP_9918afbc946533ae20284988996b87b5_Traceguids, (__int64)MiniportAdapterContext);
      v11 = -1073741823;
      goto LABEL_41;
    }
    if ( !*(_BYTE *)&a1[3].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v17 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      v11 = v17;
      if ( v17 < 0 )
      {
        if ( (unsigned __int8)byte_1C0098764 < 2u )
          goto LABEL_39;
        v18 = 11;
        goto LABEL_25;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
      {
        v17 = DmaOperations->JoinDmaDomain(v6, (void *)-1LL);
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( (unsigned __int8)byte_1C0098764 >= 2u )
          {
            v18 = 12;
LABEL_25:
            WPP_SF_qD(v18, &WPP_9918afbc946533ae20284988996b87b5_Traceguids, (__int64)MiniportAdapterContext, v17);
            goto LABEL_39;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v19 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 8LL) + 264LL))();
        v17 = DmaOperations->JoinDmaDomain(v6, (void *)v19);
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( (unsigned __int8)byte_1C0098764 >= 2u )
          {
            v18 = 13;
            goto LABEL_25;
          }
LABEL_39:
          if ( v6 )
            v6->DmaOperations->PutDmaAdapter(v6);
          goto LABEL_41;
        }
      }
      v7 = v23;
    }
    v5[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v6;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
  if ( *Value != v12 )
    __fastfail(3u);
  *v5 = v12;
  v11 = 0;
  v5[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v5;
  a1[2].m_Lock.Value = (unsigned __int64)v5;
  v5[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
  *v7 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v5;
LABEL_43:
  KLockHolder::~KLockHolder(&v24);
  return v11;
}
