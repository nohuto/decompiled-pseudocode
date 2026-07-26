/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C006D420
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006C324 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006C3CC (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    WPP_SF_qq(0x12u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
    v4 = *(_QWORD *)a1;
  }
  if ( v4
    && ndisIovNicSwitchWithoutIovSupported(v3)
    && (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric
    && !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(_DWORD *)(v5 + 8));
    ndisIovDeleteNicSwitch(v3, *(_DWORD *)(v5 + 8));
  }
}
