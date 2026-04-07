/*
 * XREFs of ?SetText@CText@@QEAAJPEBG@Z @ 0x180014B28
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800140E0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x18001A0AC (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800794F4 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031238 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetText(CText *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax
  void *v6; // rdx
  const unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int16 *v13; // rax
  int v14; // eax
  void (*v16)(void); // rax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v5 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x1000u);
  else
    v5(this, 4096u);
  *((_BYTE *)this + 280) &= ~1u;
  v6 = (void *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    v16 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v16 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v16();
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( a2 )
  {
    v7 = a2;
    v8 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v8;
    }
    while ( v8 );
    v4 = v8 == 0 ? 0x80070057 : 0;
    if ( v8 )
      v9 = 0x7FFFFFFF - v8;
    else
      v9 = 0LL;
    v10 = v9 & -(__int64)(v8 != 0);
    if ( !v8 )
    {
      v18 = 112;
      goto LABEL_25;
    }
    if ( v10 )
    {
      v11 = 2 * v10 + 2;
      v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v12 == WPF::ProcessHeapImpl::Alloc )
        v13 = (unsigned __int16 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v11);
      else
        v13 = (unsigned __int16 *)v12(WPF::g_pProcessHeap, v11);
      *((_QWORD *)this + 36) = v13;
      if ( v13 )
      {
        v14 = StringCchCopyW(v13, v10 + 1, a2);
        v4 = v14;
        if ( v14 >= 0 )
          return v4;
        v18 = 122;
        v17 = v14;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v18);
        return v4;
      }
      v4 = -2147024882;
      v18 = 120;
LABEL_25:
      v17 = v4;
      goto LABEL_28;
    }
  }
  return v4;
}
