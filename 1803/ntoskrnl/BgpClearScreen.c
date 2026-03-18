/*
 * XREFs of BgpClearScreen @ 0x140165060
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     BgpConsoleClearScreenEx @ 0x14083F998 (BgpConsoleClearScreenEx.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140840410 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpGxFillRectangle @ 0x140165AAC (BgpGxFillRectangle.c)
 *     BgpGxInitializeRectangle @ 0x140165B0C (BgpGxInitializeRectangle.c)
 */

__int64 __fastcall BgpClearScreen(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int BitsPerPixel; // eax
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h]
  unsigned __int64 v17; // [rsp+30h] [rbp-10h]
  unsigned int v18; // [rsp+68h] [rbp+28h] BYREF
  unsigned int i; // [rsp+6Ch] [rbp+2Ch]

  v2 = a1;
  if ( (dword_14039D7F0 & 1) == 0 )
    return 3221225473LL;
  v3 = DWORD2(BgInternal);
  v4 = DWORD1(BgInternal);
  v17 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v7 = (unsigned int)BgpGetBitsPerPixel(a1, a2, HIDWORD(BgInternal)) >> 3;
  v8 = 8120LL;
  v15 = v17;
  v9 = HIDWORD(v17);
  v10 = v17;
  v16 = v6;
  v11 = v3 * v7 * v4;
  if ( v11 < 0x1FB8 )
    v8 = v11;
  if ( v3 * v7 * HIDWORD(v17) > (unsigned int)v8 )
  {
    do
    {
      v10 >>= 1;
      v9 >>= 1;
      v6 = (unsigned int)v6 >> 1;
    }
    while ( v7 * v9 * v10 > (unsigned int)v8 );
    v15 = __PAIR64__(v9, v10);
    v16 = v6;
  }
  BitsPerPixel = BgpGetBitsPerPixel(v8, v5, v6);
  result = ((__int64 (__fastcall *)(unsigned __int64 *, _QWORD, void *, __int64))BgpGxInitializeRectangle)(
             &v15,
             BitsPerPixel,
             &unk_1403E6810,
             0x2000LL);
  if ( (int)result >= 0 )
  {
    BgpGxFillRectangle(&unk_1403E6810, v2);
    v14 = 0;
    for ( i = 0; v14 < v4; i = v14 )
    {
      v18 = 0;
      if ( v3 )
      {
        do
        {
          BgpGxDrawRectangle(&unk_1403E6810, &v18);
          if ( (byte_1403E6820 & 0x10) != 0 )
            BgpGxFillRectangle(&unk_1403E6810, v2);
          v18 += v10;
        }
        while ( v18 < v3 );
        v14 = i;
      }
      v14 += v9;
    }
    dword_14039D7F0 |= 0x2000u;
    return 0LL;
  }
  return result;
}
