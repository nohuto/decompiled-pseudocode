/*
 * XREFs of ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18000A8C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2] - v5;
  v11[0] = v5;
  v11[2] = v7;
  v8 = a2[3] - v6;
  v11[1] = v6;
  v11[3] = v8;
  v9 = (a1 - 200) & -(__int64)(a1 != 224);
  return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v11, 1LL, a3);
}
