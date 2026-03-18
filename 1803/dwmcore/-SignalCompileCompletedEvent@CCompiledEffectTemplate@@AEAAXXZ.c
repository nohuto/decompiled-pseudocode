/*
 * XREFs of ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800372B8
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18003714C (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180037340 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x180037460 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompiledEffectTemplate::SignalCompileCompletedEvent(CCompiledEffectTemplate *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
