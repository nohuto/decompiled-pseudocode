/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000CE5C
 * Callers:
 *     ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C (--$emplace_back@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@InputSi.c)
 * Callees:
 *     ??$construct@UAttachedInputObjectEntry@InputSite@@U12@@?$_Default_allocator_traits@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@SAXAEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@1@QEAUAttachedInputObjectEntry@InputSite@@$$QEAU34@@Z @ 0x18000CD28 (--$construct@UAttachedInputObjectEntry@InputSite@@U12@@-$_Default_allocator_traits@V-$allocator@.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *,std::allocator<InputSite::AttachedInputObjectEntry>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v3 = a3;
  v5 = a1;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        std::_Default_allocator_traits<std::allocator<InputSite::AttachedInputObjectEntry>>::construct<InputSite::AttachedInputObjectEntry,InputSite::AttachedInputObjectEntry>(
          a1,
          v3,
          v5);
        v3 += 72LL;
        v7 = v3;
        v5 += 72LL;
      }
      while ( v5 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(a3, v7);
    throw;
  }
  return v3;
}
