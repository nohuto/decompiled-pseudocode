/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C006B650
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006A6B4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006A75C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x12u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v1);
  if ( *(_QWORD *)a1
    && ndisIovNicSwitchWithoutIovSupported(v3)
    && (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric
    && !*(_DWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(_DWORD *)(v4 + 8));
    ndisIovDeleteNicSwitch(v3, *(_DWORD *)(v4 + 8));
  }
}
