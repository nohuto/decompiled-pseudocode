/*
 * XREFs of ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18000CDF8
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_InputSite::AttachedInputObjectEntry_____ptr64_InputSite::AttachedInputObjectEntry_____ptr64_std::allocator_InputSite::AttachedInputObjectEntry____::_1_::catch$1 @ 0x1800E3CB6 (_std--_Uninitialized_move_al_unchecked_InputSite--AttachedInputObjectEntry_____ptr64_InputSite--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1 + 56;
    while ( (*(_DWORD *)(v3 + 8) & 3) != 1LL )
    {
      if ( (*(_DWORD *)(v3 + 8) & 3) == 2LL )
      {
        v4 = v3 - 48;
LABEL_7:
        (**(void (__fastcall ***)(__int64))v3)(v4);
      }
      *(_QWORD *)(v3 + 8) = 0LL;
      v3 += 72LL;
      if ( v3 - 56 == a2 )
        return;
    }
    v4 = *(_QWORD *)(v3 - 8);
    goto LABEL_7;
  }
}
