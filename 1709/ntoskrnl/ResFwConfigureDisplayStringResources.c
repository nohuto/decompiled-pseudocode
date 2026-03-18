/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x1407CE310
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x14013B550 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1407D00EC (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_14035A320 )
  {
    v4 = HIDWORD(qword_14035A320);
    v5 = dword_14035A328;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v6 = v2;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&v4, (unsigned int)&v8, 0) < 0 )
    return 0LL;
  dword_14035A1DC = BgpTxtRegionSize(v8);
  return v8;
}
