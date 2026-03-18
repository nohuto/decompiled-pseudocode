/*
 * XREFs of ?GetTextureMemoryLayoutData@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180198A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700 (--$emplace_back@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDat.c)
 */

__int64 __fastcall CLinearGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-28h]
  __int128 v8; // [rsp+38h] [rbp-20h]

  a3[1] = *a3;
  if ( *(_BYTE *)(a1 + 168) )
  {
    v4 = *(_QWORD *)(a1 + 160);
    v8 = _xmm;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v4 + 176LL))(v4, a2, &v6);
    }
    else
    {
      v6 = _xmm;
      v7 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    }
    std::vector<CContent::LayoutData>::emplace_back<CContent::LayoutData const &>((__int64)a3, (__int64)&v6);
  }
  return 0LL;
}
