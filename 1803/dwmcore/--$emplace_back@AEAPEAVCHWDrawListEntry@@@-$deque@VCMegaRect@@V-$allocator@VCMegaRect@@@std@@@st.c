/*
 * XREFs of ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800BCB78
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800BCA68 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<CMegaRect>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 112LL);
    v5 = a1[1];
  }
  v7 = *a2;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)v8 = *a2;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  result = *(_QWORD *)(v7 + 56);
  *(_DWORD *)(v8 + 24) = *(_DWORD *)(result + 12);
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_DWORD *)(v8 + 104) = 0;
  ++a1[4];
  return result;
}
