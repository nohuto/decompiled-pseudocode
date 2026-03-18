/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800C67CC
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18005C0BC (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CChannelContext@@IEAA@IK_KPEAVCConnection@@@Z @ 0x18007E01C (--0CChannelContext@@IEAA@IK_KPEAVCConnection@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::Create(
        int a1,
        int a2,
        __int64 a3,
        struct CConnection *a4,
        struct CChannelContext **a5)
{
  unsigned int v9; // ebx
  CChannelContext *v10; // rax
  CChannelContext *v11; // rsi
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0;
  v10 = (CChannelContext *)WPF::ProcessHeapImpl::AllocClear(0x50uLL);
  if ( !v10 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v11 = CChannelContext::CChannelContext(v10, a1, a2, a3, a4);
  if ( v11 )
  {
    v12 = WPF::ProcessHeapImpl::AllocClear(0x48uLL);
    v13 = v12;
    if ( !v12 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      JUMPOUT(0x180125124LL);
    }
    *(_QWORD *)v12 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v12 = &CResourceTable::`vftable';
    v12[2] = 0;
    *((_QWORD *)v12 + 2) = &HANDLE_TABLE::`vftable';
    v12[7] = 0;
    v12[8] = 1;
    *((_QWORD *)v12 + 5) = 0LL;
    v12[6] = 16;
    v12[12] = a1;
    *((_QWORD *)v12 + 8) = v12 + 14;
    *((_QWORD *)v12 + 7) = v12 + 14;
    (**(void (__fastcall ***)(void *))v12)(v12);
    *((_QWORD *)v11 + 4) = v13;
    *a5 = v11;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29u);
  }
  return v9;
}
