/*
 * XREFs of AllocGestureInfo @ 0x1C01EF110
 * Callers:
 *     NtUserInjectGesture @ 0x1C01DC1D0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C01EF47C (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall AllocGestureInfo(__int64 a1, int a2, __int64 a3, const void *a4)
{
  __int64 v5; // rdi
  __int64 v7; // r10
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v12; // rax
  __int64 v13; // rbx

  v5 = a3;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a3 + 48);
  v9 = v8 + 96;
  v10 = 0xFFFFFFFFLL;
  if ( v8 + 96 >= v8 )
    v10 = v9;
  if ( v9 < v8 )
  {
    UserSetLastError(534LL);
    return 0LL;
  }
  if ( !(_DWORD)v10 )
    return 0LL;
  LOBYTE(a3) = 21;
  v12 = HMAllocObject(v7, 0LL, a3, v10);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *(_DWORD *)(v12 + 24) = a2;
  *(_OWORD *)(v12 + 32) = *(_OWORD *)v5;
  *(_OWORD *)(v12 + 48) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(v12 + 64) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(v12 + 80) = *(_QWORD *)(v5 + 48);
  if ( a4 )
    memmove((void *)(v12 + 88), a4, *(unsigned int *)(v5 + 48));
  return *(_QWORD *)v13;
}
