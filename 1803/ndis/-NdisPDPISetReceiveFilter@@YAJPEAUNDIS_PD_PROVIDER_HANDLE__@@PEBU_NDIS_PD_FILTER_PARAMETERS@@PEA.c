/*
 * XREFs of ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00F94D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qddqqS @ 0x1C0077FCC (WPP_SF_qddqqS.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C00F72EC (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDPISetReceiveFilter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_FILTER_PARAMETERS *a2,
        struct NDIS_PD_FILTER_HANDLE__ **a3)
{
  struct NDIS_PD_FILTER_HANDLE__ *v4; // rbx
  const wchar_t *v7; // r9
  int v8; // edi
  _NDIS_PD_QUEUE *TargetReceiveQueue; // rax
  _DWORD *v10; // r13
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rbp
  struct NDIS_PD_FILTER_HANDLE__ *PoolWithTag; // rax
  unsigned __int64 v13; // rcx
  unsigned int HeaderGroupMatchArrayTotalSize; // eax
  size_t v15; // rdi
  PVOID v16; // rax
  int v17; // eax
  struct NDIS_PD_PROVIDER_HANDLE__ **v18; // rdx
  _QWORD *v19; // rax
  void **v20; // rdx
  NDIS_PD_COUNTER_HANDLE__ **v21; // rdx
  NDIS_PD_COUNTER_HANDLE__ *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-68h]
  KLockHolder v25; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_SF_qddqqS(
      (__int64)L" ",
      (__int64)a2,
      (__int64)a1,
      a2->MatchProfileId,
      a2->Priority,
      (char)a2->TargetReceiveQueue,
      (char)a2->CounterHandle,
      (__int64)v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 64LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)*a3 + 3) = a1;
    goto LABEL_46;
  }
  *a3 = 0LL;
  if ( a2->Header.Type != 0x80 )
    goto LABEL_43;
  if ( a2->Header.Revision != 1 )
    goto LABEL_43;
  if ( a2->Header.Size < 0x3Cu )
    goto LABEL_43;
  if ( a2->Flags )
    goto LABEL_43;
  if ( !a2->MatchProfileId )
    goto LABEL_43;
  TargetReceiveQueue = a2->TargetReceiveQueue;
  if ( !TargetReceiveQueue )
    goto LABEL_43;
  v10 = TargetReceiveQueue->PDPlatformReserved[1];
  CounterHandle = a2->CounterHandle;
  if ( v10[38] != 1 || CounterHandle && *((_DWORD *)CounterHandle + 14) != 3 )
  {
    v8 = -1073741811;
    goto LABEL_46;
  }
  PoolWithTag = (struct NDIS_PD_FILTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6641444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 13) = 0LL;
    *((_QWORD *)PoolWithTag + 14) = 0LL;
    *((_DWORD *)PoolWithTag + 30) = 0;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v8 = -1073741670;
    goto LABEL_46;
  }
  v13 = a2->HeaderGroupMatchArrayNumElements * (unsigned __int64)a2->HeaderGroupMatchArrayElementSize;
  if ( v13 > 0xFFFFFFFF
    || (HeaderGroupMatchArrayTotalSize = a2->HeaderGroupMatchArrayTotalSize,
        (unsigned int)v13 > HeaderGroupMatchArrayTotalSize) )
  {
LABEL_43:
    v8 = -1073741811;
LABEL_44:
    if ( v4 )
      NDIS_PD_FILTER::`scalar deleting destructor'(v4);
    goto LABEL_46;
  }
  if ( HeaderGroupMatchArrayTotalSize )
  {
    v15 = HeaderGroupMatchArrayTotalSize;
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, HeaderGroupMatchArrayTotalSize, 0x6641444Eu);
    *((_QWORD *)v4 + 13) = v16;
    if ( !v16 )
    {
      v8 = -1073741670;
      goto LABEL_44;
    }
    *(_DWORD *)(v4 + 28) = a2->HeaderGroupMatchArrayNumElements;
    *(_DWORD *)(v4 + 29) = a2->HeaderGroupMatchArrayElementSize;
    *(_DWORD *)(v4 + 30) = a2->HeaderGroupMatchArrayTotalSize;
    memmove(v16, a2->HeaderGroupMatchArray, v15);
  }
  if ( CounterHandle )
    a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
  v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ *))(*((_QWORD *)a1 + 10) + 64LL))(
          *((_QWORD *)a1 + 9),
          a2,
          v4 + 8);
  v8 = v17;
  if ( CounterHandle )
    a2->CounterHandle = CounterHandle;
  if ( v17 < 0 )
    goto LABEL_44;
  *((_QWORD *)v4 + 2) = a1;
  *(_DWORD *)(v4 + 22) = a2->MatchProfileId;
  *(_DWORD *)(v4 + 23) = a2->Priority;
  *((_QWORD *)v4 + 12) = a2->RxFilterContext;
  v25.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v25.m_State = Unlocked;
  v25.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v25);
  v18 = (struct NDIS_PD_PROVIDER_HANDLE__ **)*((_QWORD *)a1 + 23);
  if ( *v18 != a1 + 44 )
    __fastfail(3u);
  *(_QWORD *)v4 = a1 + 44;
  *((_QWORD *)v4 + 1) = v18;
  *v18 = (struct NDIS_PD_PROVIDER_HANDLE__ *)v4;
  *((_QWORD *)a1 + 23) = v4;
  v19 = v4 + 18;
  v20 = (void **)*((_QWORD *)v10 + 27);
  if ( *v20 != v10 + 52 )
    __fastfail(3u);
  *v19 = v10 + 52;
  *((_QWORD *)v4 + 10) = v20;
  *v20 = v19;
  *((_QWORD *)v10 + 27) = v19;
  if ( CounterHandle )
  {
    *((_QWORD *)v4 + 5) = CounterHandle;
    v21 = (NDIS_PD_COUNTER_HANDLE__ **)*((_QWORD *)CounterHandle + 10);
    v22 = (NDIS_PD_COUNTER_HANDLE__ *)(v4 + 12);
    if ( *v21 != CounterHandle + 18 )
      __fastfail(3u);
    *(_QWORD *)v22 = CounterHandle + 18;
    *((_QWORD *)v4 + 7) = v21;
    *v21 = v22;
    *((_QWORD *)CounterHandle + 10) = v22;
    ++*((_DWORD *)CounterHandle + 22);
  }
  KLockHolder::~KLockHolder(&v25);
  *a3 = v4;
LABEL_46:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    LODWORD(v24) = v8;
    WPP_SF_qqd(0x31u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, *a3, v24);
  }
  return (unsigned int)v8;
}
