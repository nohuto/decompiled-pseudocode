/*
 * XREFs of ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800B2710
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800B25D0 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  LPVOID v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<CMegaRect>::_Growmap((__int64)a1);
  v4 = a1[1];
  v5 = a1[2] - 1LL;
  a1[3] &= v5;
  v6 = v5 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v4 + 8 * v6) )
  {
    v7 = HeapAlloc(WPF::g_processHeap, 0, 0x70uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)(a1[1] + 8 * v6) = v7;
  }
  result = a1[1];
  v9 = *(_QWORD *)(result + 8 * v6);
  if ( v9 )
  {
    v10 = *a2;
    *(_QWORD *)v9 = *a2;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    result = *(_QWORD *)(v10 + 56);
    *(_DWORD *)(v9 + 24) = *(_DWORD *)(result + 12);
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 104) = 0;
  }
  ++a1[4];
  return result;
}
