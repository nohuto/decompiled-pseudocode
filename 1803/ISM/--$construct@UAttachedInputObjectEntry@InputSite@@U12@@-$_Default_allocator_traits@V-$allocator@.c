/*
 * XREFs of ??$construct@UAttachedInputObjectEntry@InputSite@@U12@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@$$QEAU34@@Z @ 0x18000CD28
 * Callers:
 *     ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C (--$emplace_back@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@InputSi.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CE5C (--$_Uninitialized_move_al_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V-$allocator@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  v3 = (_OWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a2 + 64) = v4;
  result = (v4 & 3) - 1;
  if ( result )
  {
    if ( result == 1 )
    {
      v6 = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(a2 + 56) = v6;
      return (*(__int64 (__fastcall **)(_OWORD *, __int64))(v6 + 16))(v3, a3 + 8);
    }
    else
    {
      *v3 = *(_OWORD *)(a3 + 8);
      *(_OWORD *)(a2 + 24) = *(_OWORD *)(a3 + 24);
      *(_OWORD *)(a2 + 40) = *(_OWORD *)(a3 + 40);
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 56);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 56);
    result = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(a2 + 48) = result;
    *(_QWORD *)(a3 + 64) = 0LL;
  }
  return result;
}
