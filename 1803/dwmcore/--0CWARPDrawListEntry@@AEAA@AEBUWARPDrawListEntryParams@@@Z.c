/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x18017DEA4
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18017E104 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x18013E300 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x18017E048 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPDrawListEntryParams *a2)
{
  const __m128i *v4; // rax
  __m128 v5; // xmm2
  float *v6; // rax
  __int64 v7; // rdx
  char *v8; // r8
  char *v9; // r9
  float v10; // xmm0_4
  float v12[3]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+2Ch] [rbp-1Ch]

  CDrawListEntry::CDrawListEntry(this, a2);
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 13);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 192) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_BYTE *)this + 332) = *((_BYTE *)a2 + 232);
  *((_BYTE *)this + 333) = *((_BYTE *)a2 + 233);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 5) = *(_OWORD *)((char *)a2 + 56);
  v4 = (const __m128i *)*((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = (__m128)_mm_loadu_si128(v4 + 7);
    v6 = (float *)*((_QWORD *)a2 + 3);
    v7 = 4LL;
    v8 = (char *)(this - (CWARPDrawListEntry *)v6);
    v9 = (char *)((char *)v12 - (char *)v6);
    v13 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v12[0] = v13 * v5.m128_f32[0];
    v12[2] = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] * v13;
    v12[1] = _mm_shuffle_ps(v5, v5, 85).m128_f32[0] * v13;
    do
    {
      v10 = *(float *)((char *)v6 + (_QWORD)v9) * *v6;
      *(float *)((char *)++v6 + (_QWORD)v8 + 76) = v10;
      --v7;
    }
    while ( v7 );
  }
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 96, (char *)a2 + 72);
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 176, (char *)a2 + 152);
  return this;
}
