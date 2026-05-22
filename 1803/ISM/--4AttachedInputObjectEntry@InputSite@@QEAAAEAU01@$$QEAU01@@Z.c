/*
 * XREFs of ??4AttachedInputObjectEntry@InputSite@@QEAAAEAU01@$$QEAU01@@Z @ 0x18000E594
 * Callers:
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x18000E4EC (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18000EEE8 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSite::AttachedInputObjectEntry::operator=(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = *a2;
  v3 = a2 + 1;
  v4 = a1 + 8;
  if ( (*(_DWORD *)(a1 + 64) & 3) == 1LL )
  {
    v5 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 3) != 2LL )
      goto LABEL_6;
    v5 = a1 + 8;
  }
  (**(void (__fastcall ***)(__int64))(v4 + 48))(v5);
LABEL_6:
  *(_QWORD *)(v4 + 56) = 0LL;
  v6 = v3[7];
  *(_QWORD *)(v4 + 56) = v6;
  v7 = (v6 & 3) - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = v3[6];
      *(_QWORD *)(v4 + 48) = v8;
      (*(void (__fastcall **)(__int64, _QWORD *))(v8 + 16))(v4, v3);
    }
    else
    {
      *(_OWORD *)v4 = *(_OWORD *)v3;
      *(_OWORD *)(v4 + 16) = *((_OWORD *)v3 + 1);
      *(_OWORD *)(v4 + 32) = *((_OWORD *)v3 + 2);
      *(_QWORD *)(v4 + 48) = v3[6];
    }
  }
  else
  {
    *(_QWORD *)(v4 + 48) = v3[6];
    *(_QWORD *)(v4 + 40) = v3[5];
    v3[7] = 0LL;
  }
  return a1;
}
