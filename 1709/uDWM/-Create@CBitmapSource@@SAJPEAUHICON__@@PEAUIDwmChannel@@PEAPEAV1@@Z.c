/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035AD8
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019FD0 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180037850 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x180025260 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x1800253EC (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct IDwmChannel *a2, struct CBitmapSource **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  CBitmapSource *v7; // rax
  CBitmapSource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v7 = (CBitmapSource *)v6(WPF::g_pProcessHeap, 104LL);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CBitmapSource::`vftable';
    *((_DWORD *)v7 + 20) = 0x80000000;
    *((_DWORD *)v7 + 22) = 0x80000000;
    *((_DWORD *)v7 + 21) = 0x80000000;
    *((_DWORD *)v7 + 23) = 0x80000000;
    v9 = CBitmapSource::Initialize((CBaseObject **)v7, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x95u);
    }
    else
    {
      v11 = CBitmapSource::Update(v8, a1);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x97u);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x93u);
  }
  return v10;
}
