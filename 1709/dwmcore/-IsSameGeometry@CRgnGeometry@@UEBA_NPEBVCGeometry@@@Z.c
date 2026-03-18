/*
 * XREFs of ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180096B00
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096BB0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRgnGeometry::IsSameGeometry(CRgnGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl
  __int64 (__fastcall *v5)(const struct CGeometry *, __int64); // rax
  int v7; // r9d
  int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // r8d
  int v12; // r9d
  __m128i v14; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v5 = *(__int64 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL);
    if ( (char *)v5 == (char *)CRgnGeometry::IsOfType
       ? CRgnGeometry::IsOfType(a2, 109LL)
       : (unsigned __int8)v5(a2, 109LL) )
    {
      v7 = *((_DWORD *)this + 26) >> 4;
      v14 = *(__m128i *)((char *)a2 + 104);
      if ( v7 == (unsigned int)_mm_cvtsi128_si32(v14) >> 4 )
      {
        v8 = 0;
        v2 = 1;
        if ( v7 )
        {
          v9 = *((_QWORD *)this + 14);
          v10 = v14.m128i_i64[1];
          while ( (unsigned __int8)operator==(v9 + 16LL * v8, v10 + 16LL * v8) )
          {
            v8 = v11 + 1;
            if ( v8 >= v12 )
              return v2;
          }
          return 0;
        }
      }
    }
  }
  return v2;
}
