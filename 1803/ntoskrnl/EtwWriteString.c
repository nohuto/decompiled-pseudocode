/*
 * XREFs of EtwWriteString @ 0x1402AD080
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  unsigned int v9; // r9d
  REGHANDLE v10; // rdi
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v14; // rax
  char v15; // r10
  unsigned __int8 v16; // r10
  __int64 v17; // r11
  unsigned __int8 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // [rsp+90h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp-19h] BYREF
  PCWSTR v22; // [rsp+A8h] [rbp-9h] BYREF
  int v23; // [rsp+B0h] [rbp-1h]
  int v24; // [rsp+B4h] [rbp+3h]
  _BYTE v25[32]; // [rsp+B8h] [rbp+7h] BYREF

  v20 = 0LL;
  memset(v25, 0, sizeof(v25));
  v9 = 0;
  v10 = RegHandle & -(__int64)(RegHandle != 0);
  if ( !v10 )
    return -1073741816;
  v12 = *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x68);
  v21[1] = Keyword;
  v13 = (void *)((v12 + 28) & -(__int64)(v12 != 0));
  v21[0] = 0LL;
  v14 = -1LL;
  v22 = String;
  BYTE4(v21[0]) = Level;
  do
    ++v14;
  while ( String[v14] );
  v15 = *(_BYTE *)(v10 + 100);
  v23 = 2 * v14 + 2;
  v24 = 0;
  if ( v15 && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 32) + 80LL, Level, Keyword) )
    v9 = EtwpEventWriteFull(
           v17,
           v16,
           0LL,
           v9,
           (__int64)v21,
           4,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v22,
           0LL,
           (__int64)v25,
           0LL,
           *(_WORD *)(v10 + 98),
           v13,
           &v20);
  if ( *(_BYTE *)(v10 + 101) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 80LL, Level, Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD *)(v10 + 32),
               v18,
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
               v19,
               *(_WORD *)(v10 + 98),
               v13,
               &v20);
  }
  return v9;
}
