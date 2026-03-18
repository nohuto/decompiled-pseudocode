/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001A730
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000D8D4 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000EA94 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007818C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0096214 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(
        FxIoQueue *this,
        unsigned __int8 *PreviousIrql,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // r15
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *p_m_DriverOwned; // r14
  int v19; // ecx
  _LIST_ENTRY *p_m_PowerDriverNotified; // r12
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  char v23; // r13
  _LIST_ENTRY *v24; // rdx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rdx
  _LIST_ENTRY *v30; // r14
  FxIoQueue *v31; // rax
  unsigned int v32; // r12d
  unsigned __int8 v33; // r8
  WDFREQUEST__ *v34; // r8
  WDFQUEUE__ *v35; // rdx
  __int64 v36; // r8
  unsigned __int8 v37; // r8
  _LIST_ENTRY *v38; // rcx
  _LIST_ENTRY *v39; // rax
  unsigned __int16 v40; // r9
  void *v41; // rdx
  void *v42; // rdx
  unsigned __int16 v43; // ax
  const void *v44; // rcx
  void *v45; // rcx
  unsigned __int16 v46; // r9
  unsigned __int16 v47; // ax
  const void *v48; // rbx
  _LIST_ENTRY *v49; // rcx
  _LIST_ENTRY *v50; // rax
  _LIST_ENTRY *v51; // rdx
  _LIST_ENTRY *v52; // rdx
  __m128i m_IoStop; // xmm0
  FxIoQueue *v54; // rax
  unsigned int v55; // r12d
  void *v56; // rdx
  unsigned __int16 v57; // ax
  const void *v58; // rcx
  unsigned __int8 v59; // r8
  WDFREQUEST__ *v60; // r8
  WDFQUEUE__ *v61; // rdx
  unsigned __int16 v62; // ax
  const void *v63; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v65; // rdx
  _LIST_ENTRY *Blink; // rdx
  void *v67; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v69; // rcx
  unsigned __int8 v70; // r8
  void *v71; // r8
  WDFQUEUE__ *v72; // rdx
  unsigned __int16 v73; // r9
  const void *v74; // rcx
  unsigned __int16 v75; // ax
  const void *v76; // rbx
  void *_a1; // [rsp+28h] [rbp-58h]
  void *_a2; // [rsp+30h] [rbp-50h]
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-40h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-30h] BYREF
  FxIoQueueIoStop v81; // [rsp+60h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState > FxIoQueuePowerPurgeNotifyingDriver )
  {
    v9 = m_PowerState - 9;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          p_m_PowerNotify = &this->m_PowerNotify;
          if ( p_m_PowerNotify->Flink == p_m_PowerNotify )
          {
            *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
            return 1;
          }
          Flink = p_m_PowerNotify->Flink;
          if ( p_m_PowerNotify->Flink->Blink != p_m_PowerNotify || (v65 = Flink->Flink, Flink->Flink->Blink != Flink) )
            __fastfail(3u);
          p_m_PowerNotify->Flink = v65;
          v65->Blink = p_m_PowerNotify;
          Blink = this->m_DriverOwned.Blink;
          if ( Blink->Flink != &this->m_DriverOwned )
            __fastfail(3u);
          Flink->Flink = &this->m_DriverOwned;
          v30 = Flink - 19;
          Flink->Blink = Blink;
          Blink->Flink = Flink;
          this->m_DriverOwned.Blink = Flink;
          resumeCallback = this->m_IoResume;
          if ( _mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] && !HIBYTE(v30[13].Flink) )
          {
            if ( m_Globals->FxVerboseOn )
            {
              v67 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
              m_ObjectSize = this->m_ObjectSize;
              if ( !WORD1(v30->Blink) )
                v67 = 0LL;
              v69 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              _a2 = v67;
              if ( !m_ObjectSize )
                v69 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v69, _a2);
            }
            FxObject::AddRef(
              (FxObject *)v30,
              (void *)0x646C6F48,
              5603,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Unlock(this, *PreviousIrql, v70);
            v71 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v30->Blink) )
              v71 = 0LL;
            v72 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v72 = 0LL;
            FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v72, v71);
            v36 = 5609LL;
            goto LABEL_56;
          }
          if ( !m_Globals->FxVerboseOn )
            return 1;
          v46 = 99;
LABEL_88:
          v47 = this->m_ObjectSize;
          v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v47 )
            v48 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v46, WPP_FxIoQueue_cpp_Traceguids, v48);
          return 1;
        }
        if ( v11 == 1 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v62 = this->m_ObjectSize;
            v63 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v62 )
              v63 = 0LL;
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v63);
          }
          *p_m_PowerState = FxIoQueuePowerOn;
        }
        return 0;
      }
      p_m_DriverOwned = &this->m_DriverOwned;
      *p_m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !m_Globals->FxVerboseOn )
          return 1;
        v46 = 97;
        goto LABEL_88;
      }
      if ( m_Globals->FxVerboseOn )
      {
        v40 = 96;
        goto LABEL_83;
      }
      goto LABEL_58;
    }
    goto LABEL_21;
  }
  if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
  {
    v49 = &this->m_PowerNotify;
    if ( v49->Flink == v49 )
    {
      *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    }
    v50 = v49->Flink;
    if ( v49->Flink->Blink != v49 || (v51 = v50->Flink, v50->Flink->Blink != v50) )
      __fastfail(3u);
    v49->Flink = v51;
    v51->Blink = v49;
    v52 = this->m_PowerDriverNotified.Blink;
    if ( v52->Flink != &this->m_PowerDriverNotified )
      __fastfail(3u);
    v50->Flink = &this->m_PowerDriverNotified;
    v30 = v50 - 19;
    v50->Blink = v52;
    v52->Flink = v50;
    this->m_PowerDriverNotified.Blink = v50;
    m_IoStop = (__m128i)this->m_IoStop;
    BYTE1(v50[3].Flink) = 0;
    v81 = (FxIoQueueIoStop)m_IoStop;
    if ( !_mm_srli_si128(m_IoStop, 8).m128i_u64[0] || HIBYTE(v30[13].Flink) )
      return 1;
    v54 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v54 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_102:
      v55 = 2;
    }
    else
    {
      while ( v54[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v30[7].Blink )
      {
        v54 = (FxIoQueue *)v54->FxNonPagedObject::FxObject::__vftable;
        if ( v54 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_102;
      }
      v55 = 268435458;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v56 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v57 = this->m_ObjectSize;
      if ( !WORD1(v30->Blink) )
        v56 = 0LL;
      v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = v56;
      if ( !v57 )
        v58 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v58, _a2);
    }
    FxObject::AddRef(
      (FxObject *)v30,
      (void *)0x646C6F48,
      5362,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v59);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags((FxRequestBase *)v30, 512);
    v60 = (WDFREQUEST__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v30->Blink) )
      v60 = 0LL;
    v61 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v61 = 0LL;
    FxIoQueueIoStop::Invoke(&v81, v61, v60, v55);
    v36 = 5372LL;
    goto LABEL_56;
  }
  v13 = m_PowerState - 3;
  if ( !v13 )
  {
    if ( this->m_Dispatching == 1 )
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    p_m_DriverOwned = &this->m_DriverOwned;
    *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
    if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
    {
      if ( !m_Globals->FxVerboseOn )
        return 1;
      v46 = 87;
      goto LABEL_88;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v40 = 86;
LABEL_83:
      v45 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v45 = 0LL;
      _a1 = v45;
LABEL_86:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v40, WPP_FxIoQueue_cpp_Traceguids, _a1);
    }
LABEL_58:
    v38 = p_m_DriverOwned->Flink;
    this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
    this->m_PowerNotify.Flink = v38;
    v38->Blink = &this->m_PowerNotify;
    this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
    p_m_DriverOwned->Blink = p_m_DriverOwned;
    p_m_DriverOwned->Flink = p_m_DriverOwned;
    return 1;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = &this->m_PowerNotify;
    if ( v16->Flink == v16 )
    {
      *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
      return 1;
    }
    v27 = v16->Flink;
    if ( v16->Flink->Blink != v16 || (v28 = v27->Flink, v27->Flink->Blink != v27) )
      __fastfail(3u);
    v16->Flink = v28;
    v28->Blink = v16;
    v29 = this->m_PowerDriverNotified.Blink;
    if ( v29->Flink != &this->m_PowerDriverNotified )
      __fastfail(3u);
    v27->Flink = &this->m_PowerDriverNotified;
    v30 = v27 - 19;
    v27->Blink = v29;
    v29->Flink = v27;
    this->m_PowerDriverNotified.Blink = v27;
    stopCallback = this->m_IoStop;
    if ( !_mm_srli_si128((__m128i)stopCallback, 8).m128i_u64[0] || HIBYTE(v30[13].Flink) )
      return 1;
    v31 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_76:
      v32 = 1;
    }
    else
    {
      while ( v31[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v30[7].Blink )
      {
        v31 = (FxIoQueue *)v31->FxNonPagedObject::FxObject::__vftable;
        if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_76;
      }
      v32 = 268435457;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v42 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v43 = this->m_ObjectSize;
      if ( !WORD1(v30->Blink) )
        v42 = 0LL;
      v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = v42;
      if ( !v43 )
        v44 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v44, _a2);
    }
    FxObject::AddRef(
      (FxObject *)v30,
      (void *)0x646C6F48,
      5280,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v33);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags((FxRequestBase *)v30, 512);
    v34 = (WDFREQUEST__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v30->Blink) )
      v34 = 0LL;
    v35 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v35 = 0LL;
    FxIoQueueIoStop::Invoke(&stopCallback, v35, v34, v32);
    v36 = 5290LL;
LABEL_56:
    ((void (__fastcall *)(_LIST_ENTRY *, void *, __int64, const char *))v30->Flink[1].Flink)(
      v30,
      (void *)1684827976,
      v36,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v37);
    return 1;
  }
  v19 = v15 - 1;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      p_m_DriverOwned = &this->m_DriverOwned;
      *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !m_Globals->FxVerboseOn )
          return 1;
        v46 = 89;
        goto LABEL_88;
      }
      if ( m_Globals->FxVerboseOn )
      {
        v40 = 88;
        v41 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v41 = 0LL;
        _a1 = v41;
        goto LABEL_86;
      }
      goto LABEL_58;
    }
    return 0;
  }
LABEL_21:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v21 = this->m_PowerDriverNotified.Flink;
  acknowledgedList.Blink = &acknowledgedList;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  v23 = 0;
  if ( v21 != &this->m_PowerDriverNotified )
  {
    do
    {
      v24 = v21->Flink;
      if ( (unsigned __int8)(BYTE1(v21[3].Flink) - 1) <= 1u )
      {
        if ( v24->Blink != v21 || (v25 = v21->Blink, v25->Flink != v21) )
          __fastfail(3u);
        v25->Flink = v24;
        v24->Blink = v25;
        v26 = acknowledgedList.Blink;
        if ( acknowledgedList.Blink->Flink != &acknowledgedList )
          __fastfail(3u);
        v21->Blink = acknowledgedList.Blink;
        v21->Flink = &acknowledgedList;
        v26->Flink = v21;
        acknowledgedList.Blink = v21;
      }
      v21 = v24;
    }
    while ( v24 != p_m_PowerDriverNotified );
    goto LABEL_39;
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    if ( p_acknowledgedList->Blink != &acknowledgedList
      || (v39 = p_acknowledgedList->Flink, p_acknowledgedList->Flink->Blink != p_acknowledgedList) )
    {
      __fastfail(3u);
    }
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v39->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql, a4);
    v23 = 1;
LABEL_39:
    p_acknowledgedList = acknowledgedList.Flink;
  }
  if ( p_m_PowerDriverNotified->Flink == p_m_PowerDriverNotified )
  {
    if ( !this->m_TwoPhaseCompletions )
    {
      if ( this->m_Dispatching == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v74 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v74 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v74);
        }
        *p_m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !m_Globals->FxVerboseOn )
        return v23;
      v73 = 95;
      goto LABEL_152;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v73 = 93;
      goto LABEL_152;
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v73 = 92;
LABEL_152:
    v75 = this->m_ObjectSize;
    v76 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v75 )
      v76 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v73, WPP_FxIoQueue_cpp_Traceguids, v76);
  }
  return v23;
}
