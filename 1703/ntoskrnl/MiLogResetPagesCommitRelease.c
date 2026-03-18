/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x14020B5F4
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r10
  __int64 v1; // r11
  ULONG64 v2; // r8
  TraceLoggingHProvider v3; // r9
  const GUID *v4; // [rsp+20h] [rbp-69h]
  const GUID *v5; // [rsp+28h] [rbp-61h]
  int v6; // [rsp+40h] [rbp-49h] BYREF
  __int64 v7; // [rsp+48h] [rbp-41h] BYREF
  __int64 v8; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  int *v11; // [rsp+90h] [rbp+7h]
  int v12; // [rsp+98h] [rbp+Fh]
  int v13; // [rsp+9Ch] [rbp+13h]
  __int64 *v14; // [rsp+A0h] [rbp+17h]
  int v15; // [rsp+A8h] [rbp+1Fh]
  int v16; // [rsp+ACh] [rbp+23h]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  int v18; // [rsp+B8h] [rbp+2Fh]
  int v19; // [rsp+BCh] [rbp+33h]

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 4uLL) )
    {
      v6 = *(_DWORD *)(v0 + 736);
      v8 = *(_QWORD *)(v0 + 1488);
      v7 = v1;
      TlgCreateSz(&pDesc, (LPCSTR)(v0 + 1104));
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v14 = &v7;
      v11 = &v6;
      v17 = &v8;
      v12 = 4;
      v15 = 8;
      v18 = 8;
      TlgWriteEx(v3, &unk_1402AC51D, v2, (ULONG)v3, v4, v5, 6u, &pData);
    }
  }
}
