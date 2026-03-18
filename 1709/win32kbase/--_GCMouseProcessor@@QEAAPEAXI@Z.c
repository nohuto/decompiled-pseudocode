/*
 * XREFs of ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C00165D0
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0012D40 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0008658 (--1CBaseProcessor@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C009C008 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::`scalar deleting destructor'(CMouseProcessor *this)
{
  CMouseProcessor::MouseInterceptState::MarshalSync *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = (CMouseProcessor *)((char *)this + 3016);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor *)((char *)this + 3016));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(v2);
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2696));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this, v3, v4);
  Win32FreePool(this, v5, v6);
  return this;
}
