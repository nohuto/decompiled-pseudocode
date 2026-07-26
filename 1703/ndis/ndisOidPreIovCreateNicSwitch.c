/*
 * XREFs of ndisOidPreIovCreateNicSwitch @ 0x1C00E6900
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0045D94 (WPP_SF_qqqq.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E56C4 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

bool __fastcall ndisOidPreIovCreateNicSwitch(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  bool v4; // di
  char v5; // r10
  bool v6; // r11
  int v7; // r11d
  void *OidSourceHandle; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  wchar_t *Buffer; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  bool v15; // zf
  __int64 v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  v5 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_qqqq(0xCu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, a1[3], a1[1], v3);
    v5 = byte_1C0092621;
  }
  v6 = 0;
  if ( !*a1 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)v1) )
  {
    OidSourceHandle = (void *)ndisGetOidSourceHandle((__int64)a1[4]);
    if ( OidSourceHandle != &ndisIntReqGeneric )
      *((_DWORD *)a1 + 10) = -1073741637;
    v4 = OidSourceHandle != &ndisIntReqGeneric;
    goto LABEL_33;
  }
  NicSwitchCurrentCapabilities = v1->NicSwitchCurrentCapabilities;
  if ( !NicSwitchCurrentCapabilities
    || NicSwitchCurrentCapabilities->Header.Revision < 2u
    || NicSwitchCurrentCapabilities->Header.Size < 0x74u
    || !NicSwitchCurrentCapabilities->MaxNumSwitches
    || *((_DWORD *)&v3->Header + 1) != 12 )
  {
    goto LABEL_32;
  }
  *((_DWORD *)a1 + 10) = v7;
  if ( v3->PcwDatapathEventMask >= 0x224u )
  {
    if ( HIDWORD(v3->Reserved28) < 0x224 )
    {
      HIDWORD(v3->ShortRef.SpinLock) = 548;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    HIDWORD(v3->ShortRef.SpinLock) = 548;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( *((_DWORD *)a1 + 10) == v7 )
  {
    Buffer = v3->Reserved4.Buffer;
    v11 = *((_BYTE *)Buffer + 1);
    if ( !v11
      || *((_DWORD *)Buffer + 3) != v7
      || *((_DWORD *)Buffer + 2) != 1
      || *((_DWORD *)Buffer + 133) > v1->NicSwitchCurrentCapabilities->MaxNumVFs )
    {
      goto LABEL_20;
    }
    if ( v11 < 2u )
    {
      v15 = ndisIovHWvRSSSupported(v1) == 0;
    }
    else
    {
      if ( ndisIovHWvRSSSupported(v1) )
      {
        v14 = *(_DWORD *)(v12 + 548);
        if ( !v14 || v14 > *(_DWORD *)(v13 + 128) )
        {
LABEL_20:
          *((_DWORD *)a1 + 10) = -1073741811;
          goto LABEL_33;
        }
LABEL_4:
        v4 = v6;
        goto LABEL_33;
      }
      v15 = *(_DWORD *)(v12 + 548) == 1;
    }
    if ( v15 )
      goto LABEL_4;
LABEL_32:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_33:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v18 = *((_DWORD *)a1 + 10);
    LODWORD(v17) = v4;
    WPP_SF_qqqDD(0xDu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, *a1, a1[3], a1[1], v17, v18);
  }
  return v4;
}
