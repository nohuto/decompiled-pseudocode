/*
 * XREFs of ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0280DB8
 * Callers:
 *     NtGdiUpdateColors @ 0x1C0292C60 (NtGdiUpdateColors.c)
 * Callees:
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall MulUpdateColors(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _XLATEOBJ *a3)
{
  RECTL rclBounds; // xmm0
  DHPDEV dhpdev; // rax
  unsigned int v7; // ebp
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-50h] BYREF
  RECTL v18; // [rsp+68h] [rbp-40h] BYREF

  rclBounds = a2->rclBounds;
  dhpdev = a1->dhpdev;
  v7 = 1;
  v18 = rclBounds;
  v8 = *(__int64 **)dhpdev;
  if ( *(_QWORD *)dhpdev )
  {
    do
    {
      v9 = v8[6];
      if ( (*(_DWORD *)(v9 + 2188) & 0x100) != 0
        && bIntersect(&v18, (const struct _RECTL *)((char *)v8 + 28), (struct _RECTL *)v17) )
      {
        v10 = *(__m128i *)v17;
        a2->rclBounds = *(RECTL *)v17;
        v11 = *(_QWORD *)(v9 + 2568);
        v12 = v8[8];
        LODWORD(v16) = _mm_cvtsi128_si32(v10);
        v13 = (*(_DWORD *)(v11 + 112) & 0x400) == 0;
        HIDWORD(v16) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
        if ( v13 )
          v14 = EngCopyBits;
        else
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v9 + 2856);
        v7 &= OffCopyBits(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v14,
                (LONG *)v8 + 18,
                v12,
                (int *)v8 + 18,
                v12,
                a2,
                (__int64)a3,
                v17,
                &v16);
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    rclBounds = v18;
  }
  a2->rclBounds = rclBounds;
  return v7;
}
