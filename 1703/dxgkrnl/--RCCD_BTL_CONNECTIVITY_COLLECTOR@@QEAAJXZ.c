/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFE94 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B15E8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  _DWORD *v3; // rcx
  unsigned __int64 v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  const struct _UNICODE_STRING *v13; // rdx
  _DWORD *v14; // rcx
  __int64 v16; // rax
  _BYTE v17[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v3 = a1[2];
    v2 += 2048LL;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v4 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v4 = -1LL;
    v5 = operator new(v4, 0x63644356u, PagedPool);
    a1[2] = v5;
    if ( !v5 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v16 + 24) = v2;
      *(_QWORD *)(v16 + 32) = a1;
      WdLogEvent5_WdLowResource(v16);
      return 3221225495LL;
    }
    *((_WORD *)a1 + 4) = 0;
    *((_WORD *)a1 + 5) = v2;
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::IterateAdaptersWithCallback(
           Global,
           BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_,
           a1,
           1LL);
    v12 = v8;
  }
  while ( v8 == -1073741789 );
  if ( v8 >= 0 )
  {
    v13 = (const struct _UNICODE_STRING *)(a1 + 1);
    if ( *((_WORD *)a1 + 4) )
    {
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v17, v13);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v17);
      v12 = **a1;
    }
    else
    {
      v12 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v13, v10, v11) + 24) = a1;
    }
  }
  v14 = a1[2];
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  a1[2] = 0LL;
  return v12;
}
