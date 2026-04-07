/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180015C70
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18002CB64 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003A8E8 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x180021020 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  CWindowData *v3; // rax
  void **v4; // rsi
  CWindowData *v5; // rbp
  int v7; // edi
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  char *v11; // rbx
  __int16 v12; // cx
  unsigned __int64 v14; // r8
  int (*v15)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // rax
  int v16; // eax
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdx
  void *(__fastcall *v19)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (void **)((char *)this + 16);
  v5 = (CWindowData *)((char *)this + 686);
  v7 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 686) )
  {
    if ( v7 > 26 )
    {
      v18 = 2LL * v7;
      v19 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      v3 = v19 == WPF::ProcessHeapImpl::Alloc
         ? (CWindowData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v18)
         : (CWindowData *)v19(WPF::g_pProcessHeap, v18);
      *v4 = v3;
      if ( !v3 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1D1Fu);
        return 2147942414LL;
      }
    }
  }
  else if ( v7 <= 26 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    v3 = v5;
    *v4 = v5;
  }
  else
  {
    v14 = 2LL * v7;
    v15 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
    if ( v15 == WPF::ProcessHeapImpl::Realloc )
      v16 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, v4, v14);
    else
      v16 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, void **, unsigned __int64))v15)(
              WPF::g_pProcessHeap,
              v4,
              v14);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1D30u);
      return v17;
    }
    v3 = (CWindowData *)*v4;
    if ( !*v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1D31u);
      return 2147942414LL;
    }
  }
  v8 = v7;
  v9 = 0;
  if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
    v9 = -2147024809;
  if ( v9 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 2147483646 - v8;
      v11 = (char *)(a2 - (char *)v3);
      while ( v10 + v8 )
      {
        v12 = *(_WORD *)((char *)v3 + (_QWORD)v11);
        if ( !v12 )
          break;
        *(_WORD *)v3 = v12;
        v3 = (CWindowData *)((char *)v3 + 2);
        if ( !--v8 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v3 = (CWindowData *)((char *)v3 - 2);
      v9 = -2147024774;
    }
  }
  *(_WORD *)v3 = 0;
LABEL_13:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1D35u);
  return (unsigned int)v9;
}
