/*
 * XREFs of ndisOidPreIovCreateVPort @ 0x1C00F2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     ndisIovCreateVPort @ 0x1C00F1F88 (ndisIovCreateVPort.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCreateVPort(_QWORD *a1)
{
  _DWORD *v1; // rsi
  unsigned __int8 VPort; // bl
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v1 = (_DWORD *)a1[4];
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qqq(0x2Bu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, *a1, a1[3], v1);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] < 0x23Cu )
  {
    v4 = -1073676268;
LABEL_9:
    v1[17] = 572;
    VPort = 1;
    *((_DWORD *)a1 + 10) = v4;
    goto LABEL_16;
  }
  if ( v1[13] < 0x23Cu )
  {
    v4 = -1073676266;
    goto LABEL_9;
  }
  if ( *a1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(*a1) )
    {
      v6 = *(_QWORD *)(v5 + 4640);
      if ( !v6 || !*(_QWORD *)(v5 + 3584) || (*(_BYTE *)(v6 + 8) & 3) != 3 )
      {
LABEL_4:
        VPort = 1;
        *((_DWORD *)a1 + 10) = -1073741637;
        goto LABEL_16;
      }
    }
    VPort = ndisIovCreateVPort(a1);
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v9 = *((_DWORD *)a1 + 10);
    LODWORD(v8) = VPort;
    WPP_SF_qqDD(0x2Cu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, *a1, a1[3], v8, v9);
  }
  return VPort;
}
