/*
 * XREFs of ??1CBaseProcessor@@QEAA@XZ @ 0x1C006F500
 * Callers:
 *     ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C0047690 (--_GCMouseProcessor@@QEAAPEAXI@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C006DF04 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C006E610 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 * Callees:
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C006F4DC (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 */

void __fastcall CBaseProcessor::~CBaseProcessor(CBaseProcessor *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::UnbindMonitorsFromInput(this);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( v2 != gBaseLog )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)this + 1) = 0LL;
  }
}
