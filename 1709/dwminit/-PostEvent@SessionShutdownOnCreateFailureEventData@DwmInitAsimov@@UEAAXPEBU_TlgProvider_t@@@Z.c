/*
 * XREFs of ?PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180007570
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800082F0 (__security_check_cookie.c)
 */

void __fastcall DwmInitAsimov::SessionShutdownOnCreateFailureEventData::PostEvent(
        DwmInitAsimov::SessionShutdownOnCreateFailureEventData *this,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-29h] BYREF
  char *v5; // [rsp+50h] [rbp-9h]
  __int64 v6; // [rsp+58h] [rbp-1h]
  char *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  char *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  char *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  char *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x200000000000LL) == *((_QWORD *)a2 + 3) )
  {
    v6 = 16LL;
    v5 = (char *)this + 16;
    v7 = (char *)this + 32;
    v9 = (char *)this + 36;
    v11 = (char *)this + 52;
    v13 = (char *)this + 54;
    v8 = 4LL;
    v10 = 16LL;
    v12 = 2LL;
    v14 = 2LL;
    TlgWrite(a2, &unk_18000C09D, (LPCGUID)a2, a4, 7u, &pData);
  }
}
