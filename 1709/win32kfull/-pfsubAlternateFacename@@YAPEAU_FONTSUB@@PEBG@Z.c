/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00F822C
 * Callers:
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C00ADD44 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00F7C3C (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0292FBC (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(WCHAR *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  WCHAR *v3; // rax
  int v4; // r8d
  int v5; // ecx
  WCHAR v7[32]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfsTable;
  v2 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v7, a1, 32);
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v3 = v7;
    do
    {
      v4 = *(WCHAR *)((char *)v3 + v1 + 64 - (char *)v7);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( !v5
      && ((v1[129] & 1) != 0 || v1[128] == v1[194])
      && (v1 != gpfsTable || (GetAppCompatFlags2(0x400u) & 0x400) != 0) )
    {
      break;
    }
    v1 += 196;
  }
  return (struct _FONTSUB *)v1;
}
