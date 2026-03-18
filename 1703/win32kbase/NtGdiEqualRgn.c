/*
 * XREFs of NtGdiEqualRgn @ 0x1C008F240
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C008F2A4 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 */

__int64 __fastcall NtGdiEqualRgn(HRGN a1, HRGN a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v4, a2, 1);
  LODWORD(a2) = GreEqualRgn((struct RGNOBJAPI *)v5, (struct RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return (unsigned int)a2;
}
