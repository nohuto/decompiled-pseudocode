/*
 * XREFs of LdrIsResItemExist @ 0x1400DD1E0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1400DD0A8 (LdrpGetRcConfig.c)
 *     LdrRscIsTypeExist @ 0x1400DD260 (LdrRscIsTypeExist.c)
 */

__int64 __fastcall LdrIsResItemExist(void *a1, _QWORD *a2)
{
  _DWORD *RcConfig; // rax
  __int64 v4; // r8
  _DWORD *v5; // rbx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 1, 1);
  v5 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v4, &v8) < 0 )
    {
      return 393216;
    }
    else
    {
      v6 = v8;
      if ( (v5[5] & 0x100) != 0 )
        v6 = v8 | 0x100000;
      if ( (v5[4] & 0x10) != 0 )
        v6 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v6;
}
