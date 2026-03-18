/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x140250744
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14007A058 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  ULONG v6; // r9d
  ULONG64 v7; // r8
  TraceLoggingHProvider v8; // r10
  __int64 v9; // r11
  ULONG v10; // r9d
  ULONG64 v11; // r8
  TraceLoggingHProvider v12; // r10
  __int64 v13; // r11
  ULONG v14; // r9d
  ULONG64 v15; // r8
  TraceLoggingHProvider v16; // r10
  const GUID *v17; // [rsp+20h] [rbp-39h]
  const GUID *v18; // [rsp+28h] [rbp-31h]
  int v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *v23; // [rsp+80h] [rbp+27h]
  ULONG v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  __int64 *v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+98h] [rbp+3Fh]
  int v28; // [rsp+9Ch] [rbp+43h]

  if ( hProvider )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
        {
          v19 = *(_DWORD *)(v9 + 736);
          v20 = a2;
          TlgCreateSz(&pDesc, (LPCSTR)(v9 + 1104));
          v25 = 0;
          v28 = 0;
          v26 = &v20;
          v23 = &v19;
          v24 = v10;
          v27 = 8;
          TlgWriteEx(v12, &unk_140309D2E, v11, v10, v17, v18, 5u, &pData);
        }
      }
      else if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
      {
        v19 = *(_DWORD *)(v13 + 736);
        v20 = a2;
        TlgCreateSz(&pDesc, (LPCSTR)(v13 + 1104));
        v25 = 0;
        v28 = 0;
        v26 = &v20;
        v23 = &v19;
        v24 = v14;
        v27 = 8;
        TlgWriteEx(v16, &unk_140309DD2, v15, v14, v17, v18, 5u, &pData);
      }
    }
    else if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 4uLL) )
      {
        v19 = *(_DWORD *)(v5 + 736);
        v20 = a2;
        TlgCreateSz(&pDesc, (LPCSTR)(v5 + 1104));
        v25 = 0;
        v28 = 0;
        v26 = &v20;
        v23 = &v19;
        v24 = v6;
        v27 = 8;
        TlgWriteEx(v8, &unk_140309D82, v7, v6, v17, v18, 5u, &pData);
      }
    }
  }
}
