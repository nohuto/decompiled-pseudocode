/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24
 * Callers:
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800C0A34 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800C1150 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x1800C1310 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18005B1D0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resetp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@@Z @ 0x1800BEE30 (--$_Resetp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWork.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1800C0B44 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C0C00 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C1D4C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C32A8 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CWorkFifo::ScheduleWorkItem(wil::details **this, _QWORD *a2)
{
  _QWORD *v2; // rsi
  int v4; // eax
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  CWorkFifo::WorkItem *v10; // rax
  std::_Ref_count_base *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v20[12]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct _Mtx_internal_imp_t *v22; // [rsp+A0h] [rbp+8h]

  v2 = a2;
  v22 = (struct _Mtx_internal_imp_t *)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x54,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v5);
      v8 = _Mtx_unlock(v22);
      if ( v8 )
        std::_Throw_C_error(v8);
      goto LABEL_35;
    }
    wil::details::ResetEvent(this[28], v6);
    v10 = (CWorkFifo::WorkItem *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
    }
    *(_OWORD *)v19 = 0LL;
    std::shared_ptr<CWorkFifo::WorkItem>::_Resetp<CWorkFifo::WorkItem>(v19, v10);
    v11 = v19[0];
    if ( !v19[0] )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v12 = _Mtx_unlock(v22);
      if ( v12 )
        std::_Throw_C_error(v12);
      goto LABEL_35;
    }
    v13 = std::function<void (void)>::function<void (void)>(v20, (__int64)v2);
    v14 = CWorkFifo::WorkItem::Initialize(v11, v13);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v14);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v15 = _Mtx_unlock(v22);
      if ( v15 )
        std::_Throw_C_error(v15);
      goto LABEL_35;
    }
    try
    {
      std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back(this + 12, v19);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v16 = _Mtx_unlock(v22);
      if ( v16 )
        std::_Throw_C_error(v16);
      v7 = -2147024882;
      v2 = a2;
      goto LABEL_35;
    }
    if ( this[16] == (wil::details *)1 && !*((_BYTE *)this + 137) )
      SubmitThreadpoolWork(this[2]);
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
  }
  v17 = _Mtx_unlock(v22);
  if ( v17 )
    std::_Throw_C_error(v17);
  v7 = 0;
LABEL_35:
  std::_Func_class<void,>::_Tidy(v2, v9);
  return v7;
}
