/*
 * XREFs of SmpEventWriteString @ 0x1400109F8
 * Callers:
 *     SmpGetDumpDestination @ 0x140010B48 (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteString(__int64 a1, unsigned __int16 *a2)
{
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-30h] BYREF
  int v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_CrashDumpCopy_Error) )
    {
      v3 = *a2;
      v8 = 0;
      v11 = 0;
      LOWORD(v5) = (unsigned __int16)v3 >> 1;
      v6 = &v5;
      v4 = *((_QWORD *)a2 + 1);
      v10 = v3;
      v9 = v4;
      v7 = 2;
      ((void (__fastcall *)(REGHANDLE, const EVENT_DESCRIPTOR *, __int64, __int64 **, __int64))EtwEventWrite)(
        SmpTraceHandle,
        &SmssEvt_CrashDumpCopy_Error,
        2LL,
        &v6,
        v5);
    }
  }
}
