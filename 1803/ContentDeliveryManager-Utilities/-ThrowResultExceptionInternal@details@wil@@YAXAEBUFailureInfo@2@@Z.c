/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800026D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18000247C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  wil::ResultException::ResultException((wil::ResultException *)pExceptionObject, this);
  throw (wil::ResultException *)pExceptionObject;
}
