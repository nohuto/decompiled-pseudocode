/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800165E0
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x1800252E4 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003DADC (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001E6F4 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18001E880 (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct IDwmChannel *a2, struct CBitmapSource **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBitmapSource *v7; // rax
  CBitmapSource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax

  v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (CBitmapSource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v7 = (CBitmapSource *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 104LL);
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
    v9 = CBitmapSource::Initialize(v7, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x95u);
    }
    else
    {
      v11 = CBitmapSource::Update(v8, a1);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x97u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x93u);
  }
  return v10;
}
