/*
 * XREFs of IopCsqCancelRoutine @ 0x140155EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopCsqCancelRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, char *); // rax
  __int64 v6; // rdx
  __int64 result; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF

  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  v3 = *(_QWORD *)(a2 + 144);
  if ( *(_DWORD *)v3 == 1 )
  {
    v4 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)v3 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v4 = *(_QWORD *)(a2 + 144);
  }
  v5 = *(void (__fastcall **)(__int64, char *))(v4 + 32);
  *(_QWORD *)(v4 + 56) = 0LL;
  v5(v4, &v8);
  (*(void (__fastcall **)(__int64, __int64))(v4 + 16))(v4, a2);
  if ( v3 != v4 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(a2 + 144) = 0LL;
  }
  LOBYTE(v6) = v8;
  (*(void (__fastcall **)(__int64, __int64))(v4 + 40))(v4, v6);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 48))(v4, a2);
}
