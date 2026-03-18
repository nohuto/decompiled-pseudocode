/*
 * XREFs of ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F6990
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801F68F0 (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801F6FF0 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrushPoolManager::CreateHwBrush(
        CHwLinearGradientBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  char *v8; // rbx
  __int64 v9; // rax
  struct CHwBrush *v10; // rsi
  _QWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  __int64 v15; // rcx
  const void *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x70uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v9 = *((_QWORD *)this + 10);
  v10 = (struct CHwBrush *)(v8 + 32);
  *((_QWORD *)v8 + 3) = this;
  *((_QWORD *)v8 + 1) = &CMILRefCountBase::`vftable';
  v11 = v8 + 64;
  *((_DWORD *)v8 + 4) = 0;
  *((_QWORD *)v8 + 1) = &CMILPoolResource::`vftable';
  *((_QWORD *)v8 + 5) = v9;
  *((_QWORD *)v8 + 4) = &CHwBrush::`vftable';
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 9) = v8 + 64;
  *((_QWORD *)v8 + 8) = v8 + 64;
  *((_QWORD *)v8 + 12) = 0LL;
  *((_QWORD *)v8 + 13) = 0LL;
  *(_QWORD *)v8 = &CHwLinearGradientBrush::`vftable'{for `IMILCacheableResource'};
  *((_QWORD *)v8 + 1) = &CHwLinearGradientBrush::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v8 + 4) = &CHwLinearGradientBrush::`vftable'{for `CHwBrush'};
  *((_DWORD *)v8 + 20) = 1;
  v12 = CHwLinearGradientBrush::SetBrushAndContext((CHwLinearGradientBrush *)v8, a2, a3);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = (_QWORD *)((char *)this + 32);
    v15 = *((_QWORD *)this + 4);
    if ( *(CHwLinearGradientBrushPoolManager **)(v15 + 8) != (CHwLinearGradientBrushPoolManager *)((char *)this + 32) )
      __fastfail(3u);
    *v11 = v15;
    *((_QWORD *)v8 + 9) = v14;
    *(_QWORD *)(v15 + 8) = v11;
    *v14 = v11;
    *a4 = v10;
    (**(void (__fastcall ***)(__int64))v10)((__int64)(v8 + 32));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x36u);
    CHwLinearGradientBrush::`vector deleting destructor'((CHwLinearGradientBrush *)v8, 1);
  }
  return v13;
}
