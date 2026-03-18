/*
 * XREFs of ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0096274
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000C290 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C003B27C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C003B2A4 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 */

void __fastcall FxIoQueueIoWrite::Invoke(
        FxIoQueueIoWrite *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int Length)
{
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Request, Length);
    LOBYTE(v8) = irql;
    FxLockedCallback::CallbackEnd(this, v8);
  }
}
