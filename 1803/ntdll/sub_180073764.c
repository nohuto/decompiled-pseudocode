/*
 * XREFs of sub_180073764 @ 0x180073764
 * Callers:
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 */

bool __fastcall sub_180073764(__int64 a1)
{
  struct _TEB *v1; // rbx
  bool v2; // bl
  bool v4; // zf
  __int64 *v5; // [rsp+40h] [rbp-40h] BYREF
  int v6; // [rsp+48h] [rbp-38h]
  int v7; // [rsp+4Ch] [rbp-34h]
  char v8[16]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v9; // [rsp+60h] [rbp-20h]
  HANDLE v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+90h] [rbp+10h] BYREF
  __int64 v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v1 = NtCurrentTeb();
  if ( !a1 )
    return v1->ThreadPoolData != 0LL;
  if ( (int)ZwDuplicateObject(-1LL, a1, -1LL, &v11, 2072, 0, 0) < 0 )
    return 0;
  if ( (int)ZwQueryInformationThread(v11, 0LL, v8, 48LL, 0LL) >= 0 && v1->ClientId.UniqueProcess == v9 )
  {
    if ( v1->ClientId.UniqueThread == v10 )
    {
      v4 = v1->ThreadPoolData == 0LL;
      goto LABEL_10;
    }
    v5 = &v12;
    v7 = 8;
    v6 = 6008;
    if ( (int)ZwQueryInformationThread(v11, 26LL, &v5, 16LL, 0LL) >= 0 )
    {
      v4 = v12 == 0;
LABEL_10:
      v2 = !v4;
      goto LABEL_11;
    }
  }
  v2 = 0;
LABEL_11:
  if ( v11 )
    ZwClose(v11);
  return v2;
}
