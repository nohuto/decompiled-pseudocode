/*
 * XREFs of ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F7470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDAddProviderToBMGroup(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        struct NDIS_PD_PROVIDER_HANDLE__ *a2)
{
  unsigned int v2; // ebx
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rdi
  char *v6; // r9
  char *v7; // r8
  __int64 v8; // rax
  char **v9; // rax
  char **v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-38h]
  KLockHolder v13; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  for ( i = a2; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_qq(0x48u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, a2);
  v13.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v13.m_State = Unlocked;
  v13.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v13);
  v6 = (char *)(i + 4);
  if ( *((_QWORD *)i + 2) )
  {
    v2 = -1073741768;
    goto LABEL_17;
  }
  v7 = (char *)a1 + 24;
  v8 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v8 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5528LL) + 72LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32)
                                                                                               + 5528LL)
                                                                                   + 72LL) )
    {
      v10 = (char **)*((_QWORD *)a1 + 4);
      if ( *v10 != v7 )
        __fastfail(3u);
      *(_QWORD *)v6 = v7;
      *((_QWORD *)i + 3) = v10;
      *v10 = v6;
      *((_QWORD *)a1 + 4) = v6;
    }
    else
    {
      v2 = -1073740007;
    }
    goto LABEL_17;
  }
  v9 = (char **)*((_QWORD *)a1 + 4);
  if ( *v9 != v7 )
    __fastfail(3u);
  *(_QWORD *)v6 = v7;
  *((_QWORD *)i + 3) = v9;
  *v9 = v6;
  *((_QWORD *)a1 + 4) = v6;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    WPP_SF_qq(
      0x49u,
      &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
      a1,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5528LL) + 72LL));
LABEL_17:
    if ( (unsigned __int8)byte_1C0099624 >= 4u )
    {
      v12 = v2;
      WPP_SF_qqd(0x4Au, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, a2, v12);
    }
  }
  KLockHolder::~KLockHolder(&v13);
  return v2;
}
