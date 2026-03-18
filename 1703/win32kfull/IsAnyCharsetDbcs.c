/*
 * XREFs of IsAnyCharsetDbcs @ 0x1C0029C5C
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0029CB4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     vFill_IFIMETRICS @ 0x1C022A32C (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAnyCharsetDbcs(__int64 a1)
{
  unsigned __int8 v1; // al
  int v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  char *v5; // rdx
  char v6; // cl

  v1 = *(_BYTE *)(a1 + 44) + 0x80;
  if ( v1 <= 8u )
  {
    v2 = 323;
    if ( _bittest(&v2, v1) )
      return 1LL;
  }
  v3 = *(int *)(a1 + 40);
  if ( (_DWORD)v3 )
  {
    v4 = (char *)(a1 + v3);
    v5 = v4 + 16;
    while ( v4 < v5 )
    {
      v6 = *v4;
      if ( *v4 == 1 )
        break;
      if ( v6 == (char)0x80 || v6 == -122 || v6 == -120 || v6 == -127 )
        return 1LL;
      ++v4;
    }
  }
  return 0LL;
}
