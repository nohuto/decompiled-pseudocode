/*
 * XREFs of MiMakeSystemLeavesNonZero @ 0x1401A63B4
 * Callers:
 *     MiComputePxeWalkAction @ 0x140010E80 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

struct _KTHREAD *__fastcall MiMakeSystemLeavesNonZero(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  struct _KTHREAD *result; // rax
  __int64 *v8; // r10
  __int64 v9; // rdx
  int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r10
  int v14; // r11d

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    do
    {
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v6;
    }
    while ( v6 );
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(768LL);
  v9 = (__int64)result;
  if ( v10 != -1 )
  {
    do
    {
      *v8 = v9;
      result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v8);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v11, v9, v12);
      v8 = (__int64 *)(v13 + 8);
    }
    while ( v14 != 1 );
  }
  return result;
}
