/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x180107228
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180107090 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C96C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180107368 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // r13d
  int v7; // esi
  int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // r14
  int v11; // edi
  unsigned __int64 v12; // rdx
  _WORD *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12));
  v7 = 0;
  v17 = 0;
  v8 = 0;
  v9 = RtlpHpLfhSubsegmentIncBlockCounts(a2, a3, v6, (unsigned int)&v16, (__int64)&v17);
  v10 = v9;
  if ( v9 != -1 )
  {
    v7 = 1;
    v8 = 1;
    v11 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 24)))(
            *(_QWORD *)a1,
            a2 + (v9 << *(_BYTE *)(a2 + 44)),
            v16 << *(_BYTE *)(a2 + 44));
    if ( v11 < 0 )
      goto LABEL_11;
    v12 = 0LL;
    v13 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 46) + 2 * v10);
    v14 = v16;
    if ( v13 > &v13[v16] )
      v14 = 0LL;
    if ( v14 )
    {
      do
      {
        if ( !*v13 )
          *v13 = 1;
        ++v13;
        ++v12;
      }
      while ( v12 < v14 );
    }
    v8 = 0;
  }
  v11 = 0;
LABEL_11:
  if ( v17 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
      -(__int64)((unsigned __int64)(unsigned int)(v17 << *(_BYTE *)(a2 + 44)) >> 12));
  if ( v8 )
    RtlpHpLfhSubsegmentDecBlockCounts(a2, a3, v6, 2, 0LL);
  if ( v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
  return (unsigned int)v11;
}
