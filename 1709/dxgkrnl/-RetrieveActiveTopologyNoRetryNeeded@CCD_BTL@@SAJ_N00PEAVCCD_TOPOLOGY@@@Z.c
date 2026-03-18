/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00F9E08
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C43F0 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  unsigned __int16 v5; // bx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v12) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v5 = 8;
  v12 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v5) >= v5 )
  {
    v8 = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &v12);
    if ( v8 != -1073741789 )
      goto LABEL_4;
    v5 = v12;
  }
  v10 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v10 + 24) = v5;
  WdLogEvent5_WdError(v10);
  v8 = -1073741801;
LABEL_4:
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = v8;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v8;
}
