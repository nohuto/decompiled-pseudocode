/*
 * XREFs of TtmiLogQueueEnqueueEvent @ 0x1407767BC
 * Callers:
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void TtmiLogQueueEnqueueEvent()
{
  _DWORD *v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  _QWORD *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 1uLL) )
    {
      v2 = *v0;
      v6 = &v3;
      v8 = &v4;
      v10 = &v2;
      v3 = v1;
      v4 = v0;
      v7 = 8LL;
      v9 = 8LL;
      v11 = 4LL;
      TlgWrite(&stru_140861840, &unk_14030D15E, 0LL, 0LL, 5u, &pData);
    }
  }
}
