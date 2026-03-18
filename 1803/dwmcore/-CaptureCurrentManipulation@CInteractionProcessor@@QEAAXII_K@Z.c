/*
 * XREFs of ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXII_K@Z @ 0x1801D36CC
 * Callers:
 *     ?CaptureCurrentManipulation@CInteraction@@UEAAXII_K@Z @ 0x180191BD0 (-CaptureCurrentManipulation@CInteraction@@UEAAXII_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CInteractionProcessor::CaptureCurrentManipulation(
        CInteractionProcessor *this,
        int a2,
        int a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  int *v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  int *v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  __int64 *v15; // [rsp+98h] [rbp+37h]
  __int64 v16; // [rsp+A0h] [rbp+3Fh]
  int v17; // [rsp+D0h] [rbp+6Fh] BYREF
  int v18; // [rsp+D8h] [rbp+77h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  *((_BYTE *)this + 808) |= 0x20u;
  *((_QWORD *)this + 104) = a4;
  *((_DWORD *)this + 206) = a2;
  *((_DWORD *)this + 207) = a3;
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v7 = v6;
      v9 = &v7;
      v11 = &v17;
      v13 = &v18;
      v15 = &v19;
      v10 = 8LL;
      v12 = v5;
      v14 = v5;
      v16 = 8LL;
      TlgWrite(v4, &unk_1802AA28D, 0LL, 0LL, 6u, &pData);
    }
  }
}
