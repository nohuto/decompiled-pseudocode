/*
 * XREFs of ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02B69E4
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bEqualRGB_In_Palette(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r10

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a1 + 28) == v2 )
  {
    LODWORD(v3) = 256;
    if ( v2 == 256 )
    {
      if ( (*(_DWORD *)(a2 + 24) & 0x100) == 0 )
        goto LABEL_8;
      v4 = *(_QWORD *)(a2 + 72);
      if ( v4 )
      {
        LODWORD(v5) = 256;
        while ( 1 )
        {
          v5 = (unsigned int)(v5 - 1);
          if ( *(unsigned __int8 *)(v5 + v4 + 4) != (_DWORD)v5 )
            break;
          if ( !(_DWORD)v5 )
          {
LABEL_8:
            while ( 1 )
            {
              v3 = (unsigned int)(v3 - 1);
              if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * v3) ^ *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4 * v3)) & 0xFFFFFF) != 0 )
                break;
              if ( !(_DWORD)v3 )
                return 1LL;
            }
            return 0LL;
          }
        }
      }
    }
  }
  return 0LL;
}
