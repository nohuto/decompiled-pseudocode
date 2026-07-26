/*
 * XREFs of ndisOidPreIovDeleteNicSwitch @ 0x1C00E6BF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C0025A9C (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0045D94 (WPP_SF_qqqq.c)
 */

bool __fastcall ndisOidPreIovDeleteNicSwitch(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  bool v4; // di
  __int64 v5; // rcx
  void *OidSourceHandle; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *SwitchBySwitchId; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qqqq(0x10u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, a1[3], a1[1], v3);
  if ( !*a1 )
    goto LABEL_4;
  if ( ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    v7 = *(_QWORD *)(v1 + 3584);
    if ( v7
      && *(_BYTE *)(v7 + 1) >= 2u
      && *(_WORD *)(v7 + 2) >= 0x74u
      && *(_DWORD *)(v7 + 36)
      && *(_DWORD *)(v3 + 4) == 1 )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( !*(_DWORD *)(v3 + 48) )
      {
        *(_DWORD *)(v3 + 56) = 1;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( !*((_DWORD *)a1 + 10) )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( *(_BYTE *)(v8 + 1) && !*(_DWORD *)(v8 + 8) )
        {
          SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v5, 0);
          if ( !SwitchBySwitchId )
          {
            *((_DWORD *)a1 + 10) = 0;
            goto LABEL_26;
          }
          if ( *((_DWORD *)SwitchBySwitchId + 12) <= 1u && !*((_DWORD *)SwitchBySwitchId + 18) )
          {
LABEL_4:
            v4 = 0;
            goto LABEL_26;
          }
        }
        *((_DWORD *)a1 + 10) = -1073741811;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  else
  {
    OidSourceHandle = (void *)ndisGetOidSourceHandle(a1[4]);
    if ( OidSourceHandle != &ndisIntReqGeneric )
      *((_DWORD *)a1 + 10) = -1073741637;
    v4 = OidSourceHandle != &ndisIntReqGeneric;
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    LODWORD(v11) = v4;
    WPP_SF_qqqDD(0x11u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, *a1, a1[3], a1[1], v11, *((_DWORD *)a1 + 10));
  }
  return v4;
}
