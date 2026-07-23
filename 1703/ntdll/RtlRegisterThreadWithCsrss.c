/*
 * XREFs of RtlRegisterThreadWithCsrss @ 0x1800130C0
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS RtlRegisterThreadWithCsrss(void)
{
  NTSTATUS v0; // ecx
  CLIENT_ID ClientId; // xmm0
  _QWORD v3[6]; // [rsp+20h] [rbp-1C8h] BYREF
  int v4; // [rsp+50h] [rbp-198h]
  __int64 v5; // [rsp+60h] [rbp-188h]
  CLIENT_ID v6; // [rsp+68h] [rbp-180h]

  v0 = 0;
  if ( byte_18015BA58 || !byte_18015BA59 || !ProcedureAddress )
    return v0;
  if ( !byte_18015B26C )
  {
    v5 = 0LL;
    ClientId = NtCurrentTeb()->ClientId;
    v3[5] = 0LL;
    v6 = ClientId;
    v3[0] = 5767216LL;
    v4 = 65561;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))ProcedureAddress)(v3, v3);
  }
  return -1073741637;
}
