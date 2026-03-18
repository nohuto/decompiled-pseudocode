/*
 * XREFs of EtwWriteString @ 0x140252970
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  _WORD *v9; // r14
  NTSTATUS v10; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // r10
  _QWORD *v15; // r15
  __int16 v16; // r9
  unsigned __int8 v17; // r10
  __int64 v18; // r9
  unsigned __int8 v19; // r10
  unsigned __int64 v20; // [rsp+98h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v22[2]; // [rsp+A8h] [rbp-1h] BYREF
  PCWSTR v23; // [rsp+B8h] [rbp+Fh] BYREF
  int v24; // [rsp+C0h] [rbp+17h]
  int v25; // [rsp+C4h] [rbp+1Bh]

  v20 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v9 = (_WORD *)(v12 + 28);
  v22[0] = 0LL;
  v13 = -1LL;
  BYTE4(v22[0]) = Level;
  v22[1] = Keyword;
  v23 = String;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)(RegHandle + 100);
  v24 = 2 * v13 + 2;
  v25 = 0;
  if ( v14 )
  {
    v15 = *(_QWORD **)(RegHandle + 32);
    if ( EtwpLevelKeywordEnabled((__int64)(v15 + 10), Level, Keyword) )
      v10 = EtwpEventWriteFull(
              v15,
              v17,
              0,
              0,
              (__int16 *)v22,
              v16,
              0,
              (GUID *)ActivityId,
              0LL,
              1u,
              (__int64)&v23,
              0LL,
              &v21,
              0LL,
              *(_BYTE *)(RegHandle + 102),
              v9,
              &v20);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 80LL, Level, Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD **)(RegHandle + 32),
               v19,
               0,
               0,
               (__int16 *)v22,
               4,
               0,
               (GUID *)ActivityId,
               0LL,
               1u,
               (__int64)&v23,
               0LL,
               &v21,
               v18,
               *(_BYTE *)(RegHandle + 102),
               v9,
               &v20);
  }
  return v10;
}
