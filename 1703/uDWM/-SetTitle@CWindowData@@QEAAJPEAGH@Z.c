/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180035D50
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180034054 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF10 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18002C7F0 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData **this, char *a2, int a3)
{
  void **v3; // rsi
  char *v5; // rbp
  int v6; // edi
  char *v7; // rax
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  signed __int64 v11; // rbx
  __int16 v12; // cx
  SIZE_T v14; // r8
  __int64 (__fastcall *v15)(WPF::ProcessHeapImpl *, void **, SIZE_T); // rax
  int v16; // eax
  unsigned int v17; // ebp
  SIZE_T v18; // rdx
  LPVOID (__fastcall *v19)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v20; // rax

  v3 = (void **)(this + 2);
  v5 = (char *)this + 686;
  v6 = a3 + 1;
  if ( this[2] == (CWindowData *)((char *)this + 686) )
  {
    if ( v6 > 26 )
    {
      v18 = 2LL * v6;
      v19 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v20 = v19 == WPF::ProcessHeapImpl::Alloc
          ? WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v18)
          : v19(WPF::g_pProcessHeap, v18);
      *v3 = v20;
      if ( !v20 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1BBEu);
        return 2147942414LL;
      }
    }
  }
  else if ( v6 <= 26 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *v3 = v5;
  }
  else
  {
    v14 = 2LL * v6;
    v15 = *(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, void **, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
    if ( v15 == WPF::ProcessHeapImpl::Realloc )
      v16 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, v3, v14);
    else
      v16 = v15(WPF::g_pProcessHeap, v3, v14);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1BCFu);
      return v17;
    }
    if ( !*v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1BD0u);
      return 2147942414LL;
    }
  }
  v7 = (char *)*v3;
  v8 = v6;
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
      v11 = a2 - v7;
      while ( v10 + v8 )
      {
        v12 = *(_WORD *)&v7[v11];
        if ( !v12 )
          break;
        *(_WORD *)v7 = v12;
        v7 += 2;
        if ( !--v8 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v7 -= 2;
      v9 = -2147024774;
    }
  }
  *(_WORD *)v7 = 0;
LABEL_13:
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1BD4u);
  return (unsigned int)v9;
}
