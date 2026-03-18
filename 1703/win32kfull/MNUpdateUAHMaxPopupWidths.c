/*
 * XREFs of MNUpdateUAHMaxPopupWidths @ 0x1C0113C58
 * Callers:
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C004372C (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0113C14 (MNRefreshUAHCachedSizes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNUpdateUAHMaxPopupWidths(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // r8
  int *v4; // r9
  __int64 v5; // r10
  int v6; // edx

  LODWORD(result) = 0;
  v3 = (int *)(a1 + 148);
  v4 = (int *)(a2 + 120);
  v5 = 4LL;
  do
  {
    v6 = *v4;
    v4 += 2;
    if ( *v3 > v6 )
      v6 = *v3;
    result = (unsigned int)(v6 + result);
    *v3++ = v6;
    --v5;
  }
  while ( v5 );
  return result;
}
