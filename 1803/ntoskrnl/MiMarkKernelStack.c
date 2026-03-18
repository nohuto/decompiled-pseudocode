/*
 * XREFs of MiMarkKernelStack @ 0x140176624
 * Callers:
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnKernelStack @ 0x1400B334C (MiSetPfnKernelStack.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  char v4; // al
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v6) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v3);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  MiSetPfnKernelStack((__int64 *)v3, a2);
  v4 = *(_BYTE *)(v3 + 35);
  *(_QWORD *)(v3 + 16) |= 0x3E0uLL;
  *(_BYTE *)(v3 + 35) = v4 & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
