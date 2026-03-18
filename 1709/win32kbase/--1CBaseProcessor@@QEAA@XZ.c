/*
 * XREFs of ??1CBaseProcessor@@QEAA@XZ @ 0x1C0008658
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0007214 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C000A760 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C00165D0 (--_GCMouseProcessor@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C0008634 (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 */

void __fastcall CBaseProcessor::~CBaseProcessor(CBaseProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::UnbindMonitorsFromInput(this, a2, a3);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    if ( v4 != gBaseLog )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v4);
    *((_QWORD *)this + 1) = 0LL;
  }
}
