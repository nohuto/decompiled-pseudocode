/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140034570
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x140034084 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v3[144]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v4; // [rsp+C8h] [rbp-30h]
  __int64 v5; // [rsp+D0h] [rbp-28h]
  __int64 v6; // [rsp+D8h] [rbp-20h]
  __int64 v7; // [rsp+E0h] [rbp-18h]

  pExceptionObject[1] = 0LL;
  pExceptionObject[2] = 0LL;
  pExceptionObject[0] = &wil::ResultException::`vftable';
  v4 = 0LL;
  v5 = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v3, this);
  v6 = 0LL;
  v7 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
