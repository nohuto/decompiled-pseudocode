/*
 * XREFs of ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x1800D9C10
 * Callers:
 *     ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x1800D4770 (-OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 *     ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x1800D4B90 (-EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAX_K@Z @ 0x1800D9D44 (-_Growmap@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$all.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::push_back(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[4] + a1[3]) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = operator new(0x18uLL);
    v5 = a1[1];
  }
  result = *(_QWORD *)(v5 + 8 * v6);
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
  ++a1[4];
  return result;
}
