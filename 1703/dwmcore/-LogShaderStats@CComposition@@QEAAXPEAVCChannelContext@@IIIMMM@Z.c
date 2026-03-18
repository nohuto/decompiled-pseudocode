/*
 * XREFs of ?LogShaderStats@CComposition@@QEAAXPEAVCChannelContext@@IIIMMM@Z @ 0x180004860
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180005E88 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComposition::LogShaderStats(
        CComposition *this,
        struct CChannelContext *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7,
        float a8)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int, _DWORD, _DWORD, _DWORD))(**((_QWORD **)this + 70)
                                                                                                + 72LL))(
    *((_QWORD *)this + 70),
    *((_QWORD *)a2 + 6),
    a3,
    a4,
    a5,
    LODWORD(a6),
    LODWORD(a7),
    LODWORD(a8));
}
