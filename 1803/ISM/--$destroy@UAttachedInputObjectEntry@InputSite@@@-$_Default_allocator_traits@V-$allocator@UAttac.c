/*
 * XREFs of ??$destroy@UAttachedInputObjectEntry@InputSite@@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x18000CDB0
 * Callers:
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::emplace_back_InputSite::AttachedInputObjectEntry__::_1_::catch$66 @ 0x1800E3C27 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::destroy<InputSite::AttachedInputObjectEntry>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a2 + 8;
  result = (*(_DWORD *)(a2 + 64) & 3) - 1LL;
  if ( (*(_DWORD *)(a2 + 64) & 3) == 1LL )
  {
    v4 = *(_QWORD *)(a2 + 48);
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a2 + 64) & 3) == 2LL )
  {
    v4 = a2 + 8;
LABEL_5:
    result = (**(__int64 (__fastcall ***)(__int64))(a2 + 56))(v4);
  }
  *(_QWORD *)(v2 + 56) = 0LL;
  return result;
}
