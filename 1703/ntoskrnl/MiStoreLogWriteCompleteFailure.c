/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x140220C60
 * Callers:
 *     SmIoRequestComplete @ 0x140054C54 (SmIoRequestComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  ULONG64 v0; // r8
  const struct _TlgProvider_t *v1; // r9
  int v2; // r10d
  const GUID *v3; // [rsp+20h] [rbp-78h]
  const GUID *v4; // [rsp+28h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-50h] BYREF
  int *v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+74h] [rbp-24h]

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 2uLL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v2;
      v8 = 4;
      TlgWriteEx(v1, &unk_1402ACBD3, v0, (ULONG)v1, v3, v4, 3u, &pData);
    }
  }
}
