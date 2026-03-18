/*
 * XREFs of ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C021EED4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0222EF0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rbx
  char *v5; // r10
  DMMVIDPNPRESENTPATH *v6; // rcx
  int v7; // r11d
  DMMVIDPNTOPOLOGY *v8; // r9
  DMMVIDPNTOPOLOGY *v9; // rax
  _QWORD *v11; // rax

  v3 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 32;
  v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v8 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    v5 = (char *)v8 - 8;
  if ( v5 )
  {
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) == a2 && *((_DWORD *)v5 + 26) < v7 )
      {
        v6 = (DMMVIDPNPRESENTPATH *)v5;
        v7 = *((_DWORD *)v5 + 26);
      }
      v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v5 + 1);
      v5 = (char *)v9 - 8;
      if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v5 = 0LL;
    }
    while ( v5 );
    if ( v6 )
      return DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v6, a3);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v11[3] = v3;
  v11[5] = -1071774919LL;
  v11[4] = this;
  WdLogEvent5_WdError(v11);
  return 3223192377LL;
}
