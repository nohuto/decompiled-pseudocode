/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800F54D8
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800F1E70 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x1800F1FC0 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 + a1[3] - 1LL))) + 8LL);
    if ( v3 )
    {
      std::_Ref_count_base::_Decref(v3);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(_QWORD **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate(v5, 1uLL, 0x10uLL);
  }
  v6 = (_QWORD *)a1[1];
  if ( v6 )
    std::_Deallocate(v6, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
