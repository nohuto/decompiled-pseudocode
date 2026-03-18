/*
 * XREFs of Template_pqPR1XR1 @ 0x1C003953C
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01A6720 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqPR1XR1(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  __int64 v7; // [rsp+50h] [rbp-1h]
  int v8; // [rsp+58h] [rbp+7h]
  int v9; // [rsp+5Ch] [rbp+Bh]
  __int64 v10; // [rsp+60h] [rbp+Fh]
  int v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+6Ch] [rbp+1Bh]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h]
  __int64 v18; // [rsp+D0h] [rbp+7Fh]
  va_list va2; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  v7 = v17;
  v10 = v18;
  v8 = 8 * v15;
  v11 = 8 * v15;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v9 = 0;
  v12 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
