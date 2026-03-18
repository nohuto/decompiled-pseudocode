/*
 * XREFs of Template_qqsp @ 0x1C00DD840
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C007B2B0 (EtwTraceQueueMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqsp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const char *a6, char a7)
{
  const char *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  const char *v14; // [rsp+50h] [rbp-1h]
  int v15; // [rsp+58h] [rbp+7h]
  int v16; // [rsp+5Ch] [rbp+Bh]
  char *v17; // [rsp+60h] [rbp+Fh]
  __int64 v18; // [rsp+68h] [rbp+17h]
  int v19; // [rsp+B8h] [rbp+67h] BYREF

  v19 = a4;
  v7 = a6;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v13 = 4LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v15 = v9;
  v16 = 0;
  if ( !a6 )
    v7 = "NULL";
  v18 = 8LL;
  v14 = v7;
  v17 = &a7;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &QueueNullPostMessage, &W32kControlGuid, 4u, &UserData);
}
