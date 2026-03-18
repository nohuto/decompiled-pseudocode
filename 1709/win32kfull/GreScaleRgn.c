/*
 * XREFs of GreScaleRgn @ 0x1C027A240
 * Callers:
 *     NtGdiScaleRgn @ 0x1C028B3E0 (NtGdiScaleRgn.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEAAHXZ @ 0x1C012CCB4 (-bDpiScaleTransform@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  DC *v4; // rbx
  DC *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 1);
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v4 = v6[0];
  if ( v7[0] && v6[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v6[0]) )
      RGNOBJ::vScale(
        v7,
        _mm_unpacklo_ps((__m128)*((unsigned int *)v4 + 135), (__m128)*((unsigned int *)v4 + 136)).m128_u64[0]);
  }
  else
  {
    v3 = 0;
  }
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v3;
}
