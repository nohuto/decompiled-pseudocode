/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0004890
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00051BC (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00BD97C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0216B04 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // r9d
  int v10; // ecx
  int v11; // r9d

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  if ( v4 )
  {
    v6 = (a2 + 72) & ((unsigned __int128)-(__int128)a2 >> 64);
    do
    {
      if ( *(_DWORD *)(v4 + 76) == *(_DWORD *)(v6 + 4)
        && *(_DWORD *)(v4 + 80) == *(_DWORD *)(v6 + 8)
        && *(_DWORD *)(v4 + 84) == *(_DWORD *)(v6 + 12)
        && *(_DWORD *)(v4 + 88) == *(_DWORD *)(v6 + 16)
        && *(_DWORD *)(v4 + 92) == *(_DWORD *)(v6 + 20)
        && *(_DWORD *)(v4 + 96) == *(_DWORD *)(v6 + 24)
        && *(_DWORD *)(v4 + 100) == *(_DWORD *)(v6 + 28)
        && *(_DWORD *)(v4 + 104) == *(_DWORD *)(v6 + 32)
        && *(_QWORD *)(v4 + 112) == *(_QWORD *)(v6 + 40) )
      {
        v9 = *(_DWORD *)(v6 + 48);
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)(v4 + 120)) & 7) == 0
          && (((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)(v4 + 120)) & 0x1F8) == 0 )
        {
          v10 = *(_DWORD *)(a2 + 128);
          v11 = *(_DWORD *)(v4 + 128);
          if ( (((unsigned __int8)v11 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
            && (((unsigned __int8)v11 ^ (unsigned __int8)v10) & 0xFC) == 0
            && (((unsigned __int16)v11 ^ (unsigned __int16)v10) & 0x3F00) == 0
            && ((v11 ^ v10) & 0xFC000) == 0
            && ((v11 ^ v10) & 0x3F00000) == 0
            && ((v11 ^ v10) & 0xFC000000) == 0 )
          {
            break;
          }
        }
      }
      v7 = *(_QWORD *)(v4 + 8);
      v4 = v7 - 8;
      if ( v7 == v2 )
        v4 = 0LL;
    }
    while ( v4 );
  }
  return v4;
}
