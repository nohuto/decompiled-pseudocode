/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1800138C0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v5; // r10
  int v6; // ecx
  unsigned int v7; // r11d
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  *a2 = 0LL;
  v5 = a1;
  if ( v2
    && (*(_DWORD *)(a1 + 28) == 1
     && (v6 = *(_DWORD *)(a1 + 24), v6 != -1)
     && ((v12 = *(_QWORD *)(v2 + 72), (v12 & 2) == 0)
       ? (LODWORD(v12) = v12 & 1)
       : (v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL)),
         v6 + 1 < (unsigned int)v12)
     || !*(_DWORD *)(v5 + 28) && (v6 = *(_DWORD *)(v5 + 24)) != 0) )
  {
    v7 = v6 + 1;
    if ( *(_DWORD *)(v5 + 28) != 1 )
      v7 = v6 - 1;
    v8 = *(_QWORD *)(v2 + 72);
    if ( (v8 & 2) != 0 )
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v9 = *(_QWORD *)(v2 + 72) & 1LL;
    if ( v9 <= v7 )
      v10 = 0LL;
    else
      v10 = CPtrArrayBase::operator[]();
    *(_QWORD *)(v5 + 8) = v10;
    *(_DWORD *)(v5 + 24) = v7;
    *a2 = v10;
  }
  else
  {
    return 1;
  }
  return v3;
}
