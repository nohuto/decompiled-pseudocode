/*
 * XREFs of ?SetErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII@Z @ 0x1800D917C
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     _lambda_b140be1596bfe507958c2c38a65a7737_::operator() @ 0x1800D83A8 (_lambda_b140be1596bfe507958c2c38a65a7737_--operator().c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180051AB0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetErrorStatus(
        struct _FILETIME *this,
        DWORD a2,
        DWORD a3)
{
  const char *v6; // r9
  _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  GetSystemTime(&SystemTime);
  this[139].dwLowDateTime = a2;
  this[139].dwHighDateTime = a3;
  if ( !SystemTimeToFileTime(&SystemTime, this + 140) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x5E7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      v6);
  BYTE1(this[12].dwHighDateTime) = 1;
}
