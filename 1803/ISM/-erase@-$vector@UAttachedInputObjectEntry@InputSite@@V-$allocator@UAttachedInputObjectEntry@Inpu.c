/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18000E4EC
 * Callers:
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DE10 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DF90 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E110 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E290 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??4AttachedInputObjectEntry@InputSite@@QEAAAEAU01@$$QEAU01@@Z @ 0x18000E594 (--4AttachedInputObjectEntry@InputSite@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rcx

  v6 = *(_QWORD *)(a1 + 8);
  v7 = a3 + 72;
  if ( a3 + 72 != v6 )
  {
    do
    {
      InputSite::AttachedInputObjectEntry::operator=(v7 - 72, v7);
      v7 += 72LL;
    }
    while ( v7 != v6 );
    v6 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_DWORD *)(v6 - 8) & 3) == 1LL )
  {
    v8 = *(_QWORD *)(v6 - 24);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(v6 - 8) & 3) == 2LL )
  {
    v8 = v6 - 64;
LABEL_8:
    (**(void (__fastcall ***)(__int64))(v6 - 16))(v8);
  }
  *(_QWORD *)(v6 - 8) = 0LL;
  *(_QWORD *)(a1 + 8) -= 72LL;
  *a2 = a3;
  return a2;
}
