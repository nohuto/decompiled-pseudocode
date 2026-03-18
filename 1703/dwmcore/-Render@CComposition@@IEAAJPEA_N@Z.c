/*
 * XREFs of ?Render@CComposition@@IEAAJPEA_N@Z @ 0x1801316B4
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?PerformQueuedSnapshots@CComposition@@QEAAJXZ @ 0x18005BC84 (-PerformQueuedSnapshots@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CComposition::Render(CComposition *this, bool *a2)
{
  RTL_SRWLOCK *v2; // rsi
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v8; // eax

  v2 = (RTL_SRWLOCK *)((char *)this + 584);
  *a2 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 73);
  v5 = CComposition::PerformQueuedSnapshots(this);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v5, 0x3EEu);
  }
  else
  {
    v8 = CRenderTargetManager::Render(*((CRenderTargetManager **)this + 4), a2, v6);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v8, 0x3F1u);
  }
  ReleaseSRWLockShared(v2);
  return v7;
}
