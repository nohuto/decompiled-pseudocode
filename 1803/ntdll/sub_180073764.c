/*
 * XREFs of sub_180073764 @ 0x180073764
 * Callers:
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 */

bool __fastcall sub_180073764(HANDLE SourceHandle)
{
  struct _TEB *v1; // rbx
  bool v2; // bl
  bool v4; // zf
  __int64 *v5; // [rsp+40h] [rbp-40h] BYREF
  int v6; // [rsp+48h] [rbp-38h]
  int v7; // [rsp+4Ch] [rbp-34h]
  char ThreadInformation[16]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v9; // [rsp+60h] [rbp-20h]
  HANDLE v10; // [rsp+68h] [rbp-18h]
  HANDLE TargetHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = 0LL;
  TargetHandle = 0LL;
  v1 = NtCurrentTeb();
  if ( !SourceHandle )
    return v1->ThreadPoolData != 0LL;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x818u,
         0,
         0) < 0 )
    return 0;
  if ( ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL) >= 0
    && v1->ClientId.UniqueProcess == v9 )
  {
    if ( v1->ClientId.UniqueThread == v10 )
    {
      v4 = v1->ThreadPoolData == 0LL;
      goto LABEL_10;
    }
    v5 = &v12;
    v7 = 8;
    v6 = 6008;
    if ( ZwQueryInformationThread(TargetHandle, ThreadTebInformation, &v5, 0x10u, 0LL) >= 0 )
    {
      v4 = v12 == 0;
LABEL_10:
      v2 = !v4;
      goto LABEL_11;
    }
  }
  v2 = 0;
LABEL_11:
  if ( TargetHandle )
    ZwClose(TargetHandle);
  return v2;
}
