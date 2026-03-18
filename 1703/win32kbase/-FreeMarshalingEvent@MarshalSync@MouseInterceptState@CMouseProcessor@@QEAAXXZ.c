/*
 * XREFs of ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0092800
 * Callers:
 *     ??_GCMouseProcessor@@QEAAPEAXI@Z @ 0x1C0047690 (--_GCMouseProcessor@@QEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(
        CMouseProcessor::MouseInterceptState::MarshalSync *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
}
