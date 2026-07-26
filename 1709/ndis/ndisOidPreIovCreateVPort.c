/*
 * XREFs of ndisOidPreIovCreateVPort @ 0x1C00F00F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisIovCreateVPort @ 0x1C00EF384 (ndisIovCreateVPort.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCreateVPort(_QWORD *a1)
{
  _DWORD *v1; // rsi
  unsigned __int8 VPort; // bl
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v1 = (_DWORD *)a1[4];
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qqq(0x2Bu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, *a1, a1[3], v1);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] >= 0x23Cu )
  {
    if ( v1[13] < 0x23Cu )
    {
      v1[17] = 572;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    v1[17] = 572;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( *((_DWORD *)a1 + 10) )
  {
    VPort = 1;
  }
  else if ( *a1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(*a1) )
    {
      v5 = *(_QWORD *)(v4 + 4640);
      if ( !v5 || !*(_QWORD *)(v4 + 3584) || (*(_BYTE *)(v5 + 8) & 3) != 3 )
      {
LABEL_4:
        VPort = 1;
        *((_DWORD *)a1 + 10) = -1073741637;
        goto LABEL_17;
      }
    }
    VPort = ndisIovCreateVPort((__int64)a1);
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v8 = *((_DWORD *)a1 + 10);
    LODWORD(v7) = VPort;
    WPP_SF_qqDD(0x2Cu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, *a1, a1[3], v7, v8);
  }
  return VPort;
}
