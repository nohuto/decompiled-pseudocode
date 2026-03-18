/*
 * XREFs of ??1CBaseProcessor@@QEAA@XZ @ 0x1C0132780
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C012AF70 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0133B34 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C0132894 (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 */

void __fastcall CBaseProcessor::~CBaseProcessor(struct _LIST_ENTRY **this)
{
  struct _LIST_ENTRY *v2; // rdx

  *this = (struct _LIST_ENTRY *)&CBaseProcessor::`vftable';
  CBaseProcessor::UnbindMonitorsFromInput((CBaseProcessor *)this);
  v2 = this[1];
  if ( v2 )
  {
    if ( v2 != WPP_MAIN_CB.Queue.ListEntry.Blink )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    this[1] = 0LL;
  }
}
