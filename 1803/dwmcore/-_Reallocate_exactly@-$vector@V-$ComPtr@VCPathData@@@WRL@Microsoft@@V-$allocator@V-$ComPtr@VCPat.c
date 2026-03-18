/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180197EA0
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180197A20 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 8uLL);
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  v8 = (_QWORD *)v5;
  while ( v7 != v6 )
  {
    *v8 = 0LL;
    if ( v8 != v7 )
    {
      *v8 = *v7;
      *v7 = 0LL;
    }
    ++v8;
    ++v7;
  }
  return std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(a1, v5, v4, a2);
}
