/*
 * XREFs of MiDeleteEnclavePage @ 0x140264440
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // r9
  ULONG_PTR v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  char v9; // dl
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(a1);
  v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
  *v2 = ZeroPte;
  v3 = (v1 >> 12) & 0xFFFFFFFFFLL;
  if ( MiPteInShadowRange((unsigned __int64)v2) )
    MiWritePteShadow(v5, v4, v6);
  v7 = 48 * v3 - 0x58000000000LL;
  v8 = MiLockPageInline(v7);
  v9 = *(_BYTE *)(v7 + 34) & 0xEF;
  v10 = v8;
  *(_WORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v7 + 34) = v9;
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  MiInsertPageInFreeOrZeroedList(v3, 256);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  return result;
}
