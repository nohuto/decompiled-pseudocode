/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C0133B34
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0131A20 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0132780 (--1CBaseProcessor@@QEAA@XZ.c)
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0134754 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this, __int64 a2)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_QWORD *)this + 359) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 2856));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 2856));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2552));
  *(_QWORD *)this = &CKeyboardProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor((struct _LIST_ENTRY **)this);
}
