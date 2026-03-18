/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x1402968EC
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140295E0C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x140296DFC (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140296828 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrStart @ 0x140297520 (RtlpHpVaMgrStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx
  KIRQL v7; // bp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int16 v10; // cx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3 >> 20;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 96));
  v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v4, &v12);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_WORD *)(v8 + 42);
    if ( v10 == -1 )
    {
LABEL_3:
      v9 = 0LL;
      goto LABEL_8;
    }
    *(_WORD *)(v8 + 42) = v10 + 1;
  }
  else if ( v12 )
  {
    v9 = v12;
    if ( (int)RtlpHpVaMgrStart(v12, a1, a2, a3, ((int)v12 - (int)a1 - 112) / 48) < 0 )
      goto LABEL_3;
    ++*(_DWORD *)(a1 + 104);
  }
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
  __writecr8(v7);
  if ( v9 )
    return *(unsigned __int8 *)(v9 + 44);
  else
    return 0xFFFFFFFFLL;
}
