/*
 * XREFs of EtwWriteString @ 0x14027A0D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  NTSTATUS v9; // r11d
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  char v14; // r10
  __int64 v15; // r15
  __int16 v16; // r9
  unsigned __int8 v17; // r10
  __int64 v18; // r9
  unsigned __int8 v19; // r10
  unsigned __int64 v20; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+A0h] [rbp-19h] BYREF
  PCWSTR v22; // [rsp+B0h] [rbp-9h] BYREF
  int v23; // [rsp+B8h] [rbp-1h]
  int v24; // [rsp+BCh] [rbp+3h]
  _BYTE v25[32]; // [rsp+C0h] [rbp+7h] BYREF

  v20 = 0LL;
  memset(v25, 0, sizeof(v25));
  v9 = 0;
  if ( !RegHandle )
    return -1073741816;
  v11 = *(_QWORD *)(RegHandle + 104);
  v21[1] = Keyword;
  v12 = (void *)((v11 + 28) & -(__int64)(v11 != 0));
  v21[0] = 0LL;
  v13 = -1LL;
  v22 = String;
  BYTE4(v21[0]) = Level;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)(RegHandle + 100);
  v23 = 2 * v13 + 2;
  v24 = 0;
  if ( v14 )
  {
    v15 = *(_QWORD *)(RegHandle + 32);
    if ( EtwpLevelKeywordEnabled(v15 + 80, Level, Keyword) )
      v9 = EtwpEventWriteFull(
             v15,
             v17,
             0LL,
             0,
             (__int64)v21,
             v16,
             0,
             (GUID *)ActivityId,
             0LL,
             1u,
             (__int64)&v22,
             0LL,
             (__int64)v25,
             0LL,
             *(_WORD *)(RegHandle + 98),
             v12,
             &v20);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 80LL, Level, Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD *)(RegHandle + 32),
               v19,
               0LL,
               0,
               (__int64)v21,
               4,
               0,
               (GUID *)ActivityId,
               0LL,
               1u,
               (__int64)&v22,
               0LL,
               (__int64)v25,
               v18,
               *(_WORD *)(RegHandle + 98),
               v12,
               &v20);
  }
  return v9;
}
