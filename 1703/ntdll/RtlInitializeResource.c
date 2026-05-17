/*
 * XREFs of RtlInitializeResource @ 0x18000F220
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18000F3FC @ 0x18000F3FC (sub_18000F3FC.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateSemaphore @ 0x1800A69D0 (ZwCreateSemaphore.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  __int64 v8; // rax
  _WORD *result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = sub_18000F3FC();
  v4 = v2;
  if ( !v2 )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(v2 + 36) = 0;
  v5 = sub_18000F3C8(1LL, v3);
  *(_WORD *)(v4 + 2) = v5;
  *(_WORD *)(v4 + 44) = HIWORD(v5);
  v6 = ZwCreateSemaphore(&v10, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    sub_180008E24((PSLIST_ENTRY)v4);
    RtlRaiseStatus(v6);
  }
  v7 = ZwCreateSemaphore(&v11, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    ZwClose(v10);
    sub_180008E24((PSLIST_ENTRY)v4);
    RtlRaiseStatus(v7);
  }
  v8 = v10;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 56) = v11;
  *(_QWORD *)(a1 + 88) = v4;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  sub_18000F30C(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
