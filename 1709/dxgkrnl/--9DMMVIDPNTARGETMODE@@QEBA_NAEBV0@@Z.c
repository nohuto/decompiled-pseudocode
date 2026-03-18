/*
 * XREFs of ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000B8E4
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005130 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00A3164 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00A5E1C (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNTARGETMODE::operator!=(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  bool result; // al
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx

  v3 = (a2 + 72) & -(__int64)(a2 != 0);
  result = 1;
  if ( *(_DWORD *)(a1 + 76) == *(_DWORD *)(v3 + 4)
    && *(_DWORD *)(a1 + 80) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 8)
    && *(_DWORD *)(a1 + 84) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0xC)
    && *(_DWORD *)(a1 + 88) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x10)
    && *(_DWORD *)(a1 + 92) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x14)
    && *(_DWORD *)(a1 + 96) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x18)
    && *(_DWORD *)(a1 + 100) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x1C)
    && *(_DWORD *)(a1 + 104) == *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x20)
    && *(_QWORD *)(a1 + 112) == *(_QWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x28) )
  {
    v5 = *(_DWORD *)(((a2 + 72) & -(__int64)(a2 != 0)) + 0x30);
    v6 = *(_DWORD *)(a1 + 120);
    if ( (((unsigned __int8)v6 ^ *(_BYTE *)(v3 + 48)) & 7) == 0
      && (((unsigned __int16)v6 ^ (unsigned __int16)v5) & 0x1F8) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 128);
      v8 = *(_DWORD *)(a1 + 128);
      if ( (((unsigned __int8)v8 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
        && (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 0xFC) == 0
        && ((v7 ^ v8) & 0x3F00) == 0
        && ((v7 ^ v8) & 0xFC000) == 0
        && ((v7 ^ v8) & 0x3F00000) == 0
        && ((v7 ^ v8) & 0xFC000000) == 0 )
      {
        return 0;
      }
    }
  }
  return result;
}
