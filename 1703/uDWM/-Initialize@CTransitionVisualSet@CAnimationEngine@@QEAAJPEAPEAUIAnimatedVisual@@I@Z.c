/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180012E10
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180012498 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18001316C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800131B0 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180037C70 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  struct IAnimatedVisual *v14; // rcx
  CAnimationEngine::CTransitionVisual *v15; // rcx
  int v16; // eax
  CAnimatedTransitionVisual *v17; // rcx
  __int64 (__fastcall *v18)(CAnimatedTransitionVisual *__hidden, unsigned int); // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // edx
  __int64 i; // rsi
  CAnimationEngine::CTransitionVisual *v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
    v9 = 0;
    *((_DWORD *)this + 1) = a3;
    if ( a3 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v11 == WPF::ProcessHeapImpl::Alloc )
          v12 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x58uLL);
        else
          v12 = (_DWORD *)v11(WPF::g_pProcessHeap, 88uLL);
        v13 = v12;
        if ( v12 )
        {
          v14 = a2[v10];
          v12[16] = 0;
          v12[17] = 0;
          v12[18] = 0;
          v12[19] = 0;
          v12[20] = 0;
          v12[21] = 0;
          *(_QWORD *)v12 = v14;
          if ( v14 )
            (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v14 + 264LL))(v14);
        }
        *(_QWORD *)(v10 * 8 + *((_QWORD *)this + 3)) = v13;
        v15 = *(CAnimationEngine::CTransitionVisual **)(v10 * 8 + *((_QWORD *)this + 3));
        if ( !v15 )
        {
          v25 = 1619;
          goto LABEL_26;
        }
        v16 = CAnimationEngine::CTransitionVisual::Initialize(v15);
        v6 = v16;
        if ( v16 < 0 )
          break;
        v17 = a2[v10];
        v18 = **(__int64 (__fastcall ***)(CAnimatedTransitionVisual *__hidden, unsigned int))v17;
        v19 = *(unsigned int *)this;
        if ( v18 == CAnimatedTransitionVisual::OnStoryboardBegin )
          v20 = CAnimatedTransitionVisual::OnStoryboardBegin(v17, v19);
        else
          v20 = v18(v17, v19);
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x655u);
          goto LABEL_17;
        }
        ++v9;
        ++v10;
        if ( v9 >= a3 )
          goto LABEL_17;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x654u);
LABEL_17:
      if ( v6 < 0 )
        goto LABEL_27;
    }
  }
  else
  {
    v25 = 1612;
LABEL_26:
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v25);
LABEL_27:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    {
      v24 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
      if ( v24 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v24, v21);
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 3) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_DWORD *)this + 1) = 0;
  }
  return (unsigned int)v6;
}
