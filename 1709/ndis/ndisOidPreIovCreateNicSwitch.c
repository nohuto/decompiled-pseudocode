/*
 * XREFs of ndisOidPreIovCreateNicSwitch @ 0x1C00EFF20
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqqDD @ 0x1C0042EC8 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00EECF4 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

bool __fastcall ndisOidPreIovCreateNicSwitch(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  bool v4; // di
  bool v5; // r10
  int v6; // r10d
  void *OidSourceHandle; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  wchar_t *Buffer; // r8
  unsigned __int8 v10; // cl
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  bool v14; // zf
  __int64 v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qqqq(0xCu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v1, a1[3], a1[1], v3);
  v5 = 0;
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
  *((_DWORD *)a1 + 10) = v6;
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
  if ( *((_DWORD *)a1 + 10) == v6 )
  {
    Buffer = v3->Reserved4.Buffer;
    v10 = *((_BYTE *)Buffer + 1);
    if ( !v10
      || *((_DWORD *)Buffer + 3) != v6
      || *((_DWORD *)Buffer + 2) != 1
      || *((_DWORD *)Buffer + 133) > v1->NicSwitchCurrentCapabilities->MaxNumVFs )
    {
      goto LABEL_20;
    }
    if ( v10 < 2u )
    {
      v14 = ndisIovHWvRSSSupported(v1) == 0;
    }
    else
    {
      if ( ndisIovHWvRSSSupported(v1) )
      {
        v13 = *(_DWORD *)(v11 + 548);
        if ( !v13 || v13 > *(_DWORD *)(v12 + 128) )
        {
LABEL_20:
          *((_DWORD *)a1 + 10) = -1073741811;
          goto LABEL_33;
        }
LABEL_4:
        v4 = v5;
        goto LABEL_33;
      }
      v14 = *(_DWORD *)(v11 + 548) == 1;
    }
    if ( v14 )
      goto LABEL_4;
LABEL_32:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_33:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v17 = *((_DWORD *)a1 + 10);
    LODWORD(v16) = v4;
    WPP_SF_qqqDD(0xDu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, *a1, a1[3], a1[1], v16, v17);
  }
  return v4;
}
