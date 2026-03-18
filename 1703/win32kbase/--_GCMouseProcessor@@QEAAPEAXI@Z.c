/*
 * XREFs of ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C0047690
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C006F990 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C006F500 (--1CBaseProcessor@@QEAA@XZ.c)
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0092800 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::`scalar deleting destructor'(CMouseProcessor *this)
{
  CMouseProcessor::MouseInterceptState::MarshalSync *v2; // rbx

  v2 = (CMouseProcessor *)((char *)this + 2864);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 2864));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(v2);
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2544));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this);
  Win32FreePool((__int64)this);
  return this;
}
