/*
 * XREFs of ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00ED300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qddqqS @ 0x1C0075C9C (WPP_SF_qddqqS.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x1C00EB13C (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NdisPDPISetReceiveFilter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_FILTER_PARAMETERS *a2,
        struct NDIS_PD_FILTER_HANDLE__ **a3)
{
  _QWORD *v4; // rbx
  const wchar_t *v7; // r9
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbp
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  size_t v15; // rdi
  PVOID v16; // rax
  int v17; // eax
  struct NDIS_PD_PROVIDER_HANDLE__ **v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v24; // [rsp+20h] [rbp-68h]
  KLockHolder v25; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_SF_qddqqS(
      (__int64)L" ",
      (__int64)a2,
      (__int64)a1,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 2),
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
  if ( *(_BYTE *)a2 != 0x80 )
    goto LABEL_43;
  if ( *((_BYTE *)a2 + 1) != 1 )
    goto LABEL_43;
  if ( *((_WORD *)a2 + 1) < 0x3Cu )
    goto LABEL_43;
  if ( *((_DWORD *)a2 + 1) )
    goto LABEL_43;
  if ( !*((_DWORD *)a2 + 2) )
    goto LABEL_43;
  v9 = *((_QWORD *)a2 + 3);
  if ( !v9 )
    goto LABEL_43;
  v10 = *(_QWORD *)(v9 + 24);
  v11 = *((_QWORD *)a2 + 2);
  if ( *(_DWORD *)(v10 + 152) != 1 || v11 && *(_DWORD *)(v11 + 56) != 3 )
  {
    v8 = -1073741811;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6641444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[8] = 0LL;
    PoolWithTag[11] = 0LL;
    PoolWithTag[12] = 0LL;
    PoolWithTag[13] = 0LL;
    PoolWithTag[14] = 0LL;
    *((_DWORD *)PoolWithTag + 30) = 0;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[9] = 0LL;
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
  v13 = *((unsigned int *)a2 + 12) * (unsigned __int64)*((unsigned int *)a2 + 13);
  if ( v13 > 0xFFFFFFFF || (v14 = *((_DWORD *)a2 + 14), (unsigned int)v13 > v14) )
  {
LABEL_43:
    v8 = -1073741811;
LABEL_44:
    if ( v4 )
      NDIS_PD_FILTER::`scalar deleting destructor'(v4);
    goto LABEL_46;
  }
  if ( v14 )
  {
    v15 = v14;
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6641444Eu);
    v4[13] = v16;
    if ( !v16 )
    {
      v8 = -1073741670;
      goto LABEL_44;
    }
    *((_DWORD *)v4 + 28) = *((_DWORD *)a2 + 12);
    *((_DWORD *)v4 + 29) = *((_DWORD *)a2 + 13);
    *((_DWORD *)v4 + 30) = *((_DWORD *)a2 + 14);
    memmove(v16, *((const void **)a2 + 5), v15);
  }
  if ( v11 )
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v11 + 48);
  v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, _QWORD *))(*((_QWORD *)a1 + 10)
                                                                                               + 64LL))(
          *((_QWORD *)a1 + 9),
          a2,
          v4 + 4);
  v8 = v17;
  if ( v11 )
    *((_QWORD *)a2 + 2) = v11;
  if ( v17 < 0 )
    goto LABEL_44;
  v4[2] = a1;
  *((_DWORD *)v4 + 22) = *((_DWORD *)a2 + 2);
  *((_DWORD *)v4 + 23) = *((_DWORD *)a2 + 3);
  v4[12] = *((_QWORD *)a2 + 4);
  v25.m_Lock = (KPushLockBase *)qword_1C00926D0;
  v25.m_State = Unlocked;
  v25.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v25);
  v18 = (struct NDIS_PD_PROVIDER_HANDLE__ **)*((_QWORD *)a1 + 23);
  if ( *v18 != (struct NDIS_PD_PROVIDER_HANDLE__ *)((char *)a1 + 176) )
    __fastfail(3u);
  *v4 = (char *)a1 + 176;
  v4[1] = v18;
  *v18 = (struct NDIS_PD_PROVIDER_HANDLE__ *)v4;
  *((_QWORD *)a1 + 23) = v4;
  v19 = v4 + 9;
  v20 = *(_QWORD **)(v10 + 216);
  if ( *v20 != v10 + 208 )
    __fastfail(3u);
  *v19 = v10 + 208;
  v4[10] = v20;
  *v20 = v19;
  *(_QWORD *)(v10 + 216) = v19;
  if ( v11 )
  {
    v4[5] = v11;
    v21 = *(_QWORD **)(v11 + 80);
    v22 = v4 + 6;
    if ( *v21 != v11 + 72 )
      __fastfail(3u);
    *v22 = v11 + 72;
    v4[7] = v21;
    *v21 = v22;
    *(_QWORD *)(v11 + 80) = v22;
    ++*(_DWORD *)(v11 + 88);
  }
  KLockHolder::~KLockHolder(&v25);
  *a3 = (struct NDIS_PD_FILTER_HANDLE__ *)v4;
LABEL_46:
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
  {
    LODWORD(v24) = v8;
    WPP_SF_qqd(0x31u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a3, v24);
  }
  return (unsigned int)v8;
}
