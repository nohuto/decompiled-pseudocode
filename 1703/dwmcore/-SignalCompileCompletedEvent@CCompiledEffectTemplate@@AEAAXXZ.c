/*
 * XREFs of ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180005FEC
 * Callers:
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x180005D0C (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180005D98 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180005E88 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
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
