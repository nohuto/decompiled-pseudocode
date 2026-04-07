/*
 * XREFs of ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18000EBD0
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180022F44 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x18000ECD0 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::Create(struct CDWMDXGIEnumeration **a1)
{
  __int64 v2; // rax
  CDWMDXGIEnumeration *v3; // rbx
  int inited; // eax
  unsigned int v5; // edi

  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         88LL);
  v3 = (CDWMDXGIEnumeration *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v2 = &CDWMDXGIEnumeration::`vftable';
    *(_DWORD *)(v2 + 8) = 0;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 76) = 0;
    *(_DWORD *)(v2 + 80) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    (**(void (__fastcall ***)(CDWMDXGIEnumeration *))v3)(v3);
    inited = CDWMDXGIEnumeration::InitDXGI(v3);
    v5 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800AB370, 1u, inited, 0x3Cu);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      (*(void (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800AB370, 1u, -2147024882, 0x38u);
  }
  return v5;
}
