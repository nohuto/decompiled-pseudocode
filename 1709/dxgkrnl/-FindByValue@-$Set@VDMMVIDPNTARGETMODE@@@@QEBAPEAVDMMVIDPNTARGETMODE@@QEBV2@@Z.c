/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005130
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0004E68 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00A3164 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000B8E4 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v5; // r11
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 == a1 + 24 )
    return 0LL;
  v5 = v2 - 8;
  while ( v5 )
  {
    if ( !(unsigned __int8)DMMVIDPNTARGETMODE::operator!=(v5, a2) )
      break;
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 - 8;
    if ( v6 == a1 + 24 )
      v5 = 0LL;
  }
  return v5;
}
