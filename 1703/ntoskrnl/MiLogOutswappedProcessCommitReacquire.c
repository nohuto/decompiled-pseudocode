/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x14020B310
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
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
  const GUID *v17; // [rsp+20h] [rbp-49h]
  const GUID *v18; // [rsp+28h] [rbp-41h]
  int v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v23; // [rsp+80h] [rbp+17h]
  ULONG v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]
  __int64 *v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+98h] [rbp+2Fh]
  int v28; // [rsp+9Ch] [rbp+33h]

  if ( qword_14036CFD8 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( qword_14036CFD8->LevelPlus1 > 5 && TlgKeywordOn(qword_14036CFD8, 4uLL) )
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
          TlgWriteEx(v12, &unk_1402AC4C9, v11, v10, v17, v18, 5u, &pData);
        }
      }
      else if ( qword_14036CFD8->LevelPlus1 > 5 && TlgKeywordOn(qword_14036CFD8, 4uLL) )
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
        TlgWriteEx(v16, &unk_1402AC425, v15, v14, v17, v18, 5u, &pData);
      }
    }
    else if ( qword_14036CFD8->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(qword_14036CFD8, 4uLL) )
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
        TlgWriteEx(v8, &unk_1402AC479, v7, v6, v17, v18, 5u, &pData);
      }
    }
  }
}
