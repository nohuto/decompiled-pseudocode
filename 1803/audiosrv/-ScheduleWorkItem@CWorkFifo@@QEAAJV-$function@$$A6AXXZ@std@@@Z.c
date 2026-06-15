/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180044670 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800F3264 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800F38E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x1800F3A90 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800F4528 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180097980 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Setp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@U?$integral_constant@_N$0A@@1@@Z @ 0x1800F1A38 (--$_Setp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFi.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1800F3374 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F33FC (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800F44FC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x1800F5914 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CWorkFifo::ScheduleWorkItem(wil::details **this, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  CWorkFifo::WorkItem *v12; // rax
  std::_Ref_count_base *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  std::_Ref_count_base *v21[2]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v22[96]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct _Mtx_internal_imp_t *v24; // [rsp+A0h] [rbp+8h]

  v2 = a2;
  v24 = (struct _Mtx_internal_imp_t *)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v5);
      v8 = _Mtx_unlock(v24);
      if ( v8 )
        std::_Throw_C_error(v8);
      goto LABEL_30;
    }
    wil::details::ResetEvent(this[28], v6);
    v12 = (CWorkFifo::WorkItem *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
    }
    *(_OWORD *)v21 = 0LL;
    std::shared_ptr<CWorkFifo::WorkItem>::_Setp<CWorkFifo::WorkItem>(v21, v12);
    v13 = v21[0];
    if ( !v21[0] )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v21[1] )
        std::_Ref_count_base::_Decref(v21[1]);
      v14 = _Mtx_unlock(v24);
      if ( v14 )
        std::_Throw_C_error(v14);
      goto LABEL_30;
    }
    v15 = std::function<void (void)>::function<void (void)>((__int64)v22, v2);
    v16 = CWorkFifo::WorkItem::Initialize(v13, v15);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v16);
      if ( v21[1] )
        std::_Ref_count_base::_Decref(v21[1]);
      v17 = _Mtx_unlock(v24);
      if ( v17 )
        std::_Throw_C_error(v17);
      goto LABEL_30;
    }
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(this + 12, v21);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v21[1] )
        std::_Ref_count_base::_Decref(v21[1]);
      v20 = _Mtx_unlock(v24);
      if ( v20 )
        std::_Throw_C_error(v20);
      v7 = -2147024882;
      v2 = a2;
      goto LABEL_30;
    }
    if ( this[16] == (wil::details *)1 && !*((_BYTE *)this + 137) )
      SubmitThreadpoolWork(this[2]);
    if ( v21[1] )
      std::_Ref_count_base::_Decref(v21[1]);
  }
  v18 = _Mtx_unlock(v24);
  if ( v18 )
    std::_Throw_C_error(v18);
  v7 = 0;
LABEL_30:
  std::_Func_class<void,>::_Tidy(v2, v9, v10, v11);
  return v7;
}
