/*
 * XREFs of CmpIsKeyStackSymlink @ 0x14048FCAC
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 */

char __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 v1; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // r9
  int v4; // eax

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
  {
LABEL_4:
    LOBYTE(v4) = 0;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)v1);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        return (*(_DWORD *)(KcbAtLayerHeight + 176) >> 20) & 1;
      v1 = v3 - 1;
      if ( v1 < 0 )
        goto LABEL_4;
    }
  }
  return v4;
}
