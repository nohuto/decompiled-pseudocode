/*
 * XREFs of IcAddApicInstance @ 0x1C009CF50
 * Callers:
 *     IrqLibpParseMadt @ 0x1C009C8B8 (IrqLibpParseMadt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall IcAddApicInstance(int a1)
{
  unsigned int v2; // eax
  char v3; // bl
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  SIZE_T v7; // r15
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  v2 = (*(__int64 (**)(void))(PmHalDispatchTable + 64))();
  v3 = v2;
  if ( !v2 )
    return 3221226021LL;
  v5 = HIBYTE(v2);
  v6 = HIWORD(v2);
  v7 = 200 * (HIBYTE(v2) - 1) + 232;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x49706341u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v7);
  *(_DWORD *)(v9 + 16) = a1;
  *(_DWORD *)(v9 + 24) = v5;
  *(_DWORD *)(v9 + 20) = a1 + (unsigned __int8)v6;
  if ( !(_BYTE)v6 && !v3 )
    *(_DWORD *)(v9 + 28) = 0x80000000;
  v10 = (__int64 *)qword_1C0066548;
  if ( *(__int64 **)qword_1C0066548 != &IcListHead )
    __fastfail(3u);
  *(_QWORD *)(v9 + 8) = qword_1C0066548;
  *(_QWORD *)v9 = &IcListHead;
  *v10 = v9;
  result = 0LL;
  qword_1C0066548 = v9;
  return result;
}
