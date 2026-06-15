/*
 * XREFs of ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C32A8
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C2C2C (-_Growmap@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@U.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Growmap(a1);
  a1[3] &= a1[2] - 1LL;
  v4 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v4) )
    *(_QWORD *)(a1[1] + 8 * v4) = std::_Allocate(1uLL, 0x10uLL);
  v5 = *(_QWORD **)(a1[1] + 8 * v4);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = a2[1];
    v7 = *a2;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(v5, v7, v6);
  }
  ++a1[4];
}
