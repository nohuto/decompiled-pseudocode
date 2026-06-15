/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800C2DFC
 * Callers:
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x180098A90 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ??1?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAA@XZ @ 0x1800BF54C (--1-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWorkFi.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800BF5C4 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x1800BF7C0 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2))) + 8LL);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(_QWORD **)(a1[1] + 8 * v5);
    if ( v6 )
      std::_Deallocate(v6, 1uLL, 0x10uLL);
  }
  v7 = (_QWORD *)a1[1];
  if ( v7 )
    std::_Deallocate(v7, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
