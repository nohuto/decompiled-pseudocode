/*
 * XREFs of Template_ppp @ 0x1C001FDD0
 * Callers:
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0052438 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0052F84 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C006D260 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C009DAA0 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_ppp(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  va_list va2; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  v8 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 3u, &UserData);
}
