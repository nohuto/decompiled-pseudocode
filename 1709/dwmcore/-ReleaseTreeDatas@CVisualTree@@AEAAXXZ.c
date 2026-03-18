/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180030C20
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180031910 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004EC58 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004F170 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800B17C0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800B17F0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // rdi
  CVisualTreeData *v2; // rbx
  CVisual *v3; // rsi
  void (__fastcall *v4)(CVisualTreeData *__hidden); // rax
  void *(__fastcall *v5)(CVisualTreeData *__hidden, unsigned int); // rax

  v1 = (_QWORD *)((char *)this + 40);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (CVisualTreeData *)(*v1 - 240LL);
    v3 = (CVisual *)*((_QWORD *)v2 + 3);
    v4 = *(void (__fastcall **)(CVisualTreeData *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v4 == CVisualTreeData::Clear )
      CVisualTreeData::Clear(v2);
    else
      v4(v2);
    if ( CVisual::GetUnusedTreeData(v3) )
    {
      v5 = **(void *(__fastcall ***)(CVisualTreeData *__hidden, unsigned int))v2;
      if ( v5 == CVisualTreeData::`vector deleting destructor' )
        CVisualTreeData::`vector deleting destructor'(v2, 1u);
      else
        v5(v2, 1u);
    }
    else
    {
      CVisual::SetUnusedTreeData(v3, v2);
    }
  }
}
