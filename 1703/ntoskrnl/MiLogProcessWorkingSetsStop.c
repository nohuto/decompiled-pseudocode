/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x1400836EC
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiLogProcessWorkingSetsStop()
{
  ULONG64 v0; // r8
  const struct _TlgProvider_t *v1; // r9
  _QWORD *v2; // r10
  const GUID *v3; // [rsp+20h] [rbp-59h]
  const GUID *v4; // [rsp+28h] [rbp-51h]
  __int64 v5; // [rsp+40h] [rbp-39h] BYREF
  __int64 v6; // [rsp+48h] [rbp-31h] BYREF
  __int64 v7; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  __int64 *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  __int64 *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 1uLL) )
    {
      v5 = v2[720];
      v6 = v2[768];
      v7 = v2[782];
      v9 = &v5;
      v11 = &v6;
      v13 = &v7;
      v10 = 8LL;
      v12 = 8LL;
      v14 = 8LL;
      TlgWriteEx(v1, &unk_1402AC99E, v0, (ULONG)v1, v3, v4, 5u, &pData);
    }
  }
}
