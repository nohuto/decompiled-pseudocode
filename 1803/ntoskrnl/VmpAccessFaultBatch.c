/*
 * XREFs of VmpAccessFaultBatch @ 0x1402AB618
 * Callers:
 *     VmAccessFault @ 0x1407A06C0 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     VmpAccessFaultBatchResolve @ 0x1402AB83C (VmpAccessFaultBatchResolve.c)
 *     VmpFaultEntryInsert @ 0x1402ABC38 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1402ABD44 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x1402AC860 (VmpProcessContextLockShared.c)
 *     VmpProcessUpdateSlat @ 0x1402AC8C0 (VmpProcessUpdateSlat.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  PEX_SPIN_LOCK v9; // rbp
  int v10; // r13d
  int updated; // esi
  __int64 v12; // r12
  int v13; // r15d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx

  v6 = a4;
  LODWORD(v7) = a3;
  v9 = SpinLock;
  while ( 1 )
  {
    VmpFaultEntryInsert(v9, a2, (unsigned int)v7);
    v10 = 1;
    updated = VmpAccessFaultBatchResolve(a2, (unsigned int)v7, v6, a5);
    if ( updated < 0 )
      goto LABEL_27;
    v12 = VmpProcessContextLockShared(v9);
    if ( *((_QWORD *)v9 + 9) != a6 )
      break;
    v13 = 0;
    v14 = a2 + 48LL * (unsigned int)v7;
    if ( a2 < v14 )
    {
      v15 = a2 + 32;
      v16 = (48 * (unsigned __int64)(unsigned int)v7 - 1) / 0x30 + 1;
      do
      {
        if ( (*(_QWORD *)(v15 - 8) & 0x10000000000000LL) != 0 || (*(_BYTE *)(v15 + 7) & 1) != 0 )
        {
          *(_QWORD *)v15 |= 0x80000000000000uLL;
          ++v13;
        }
        v15 += 48LL;
        --v16;
      }
      while ( v16 );
      v9 = SpinLock;
    }
    if ( v13 != (_DWORD)v7 )
    {
      updated = VmpProcessUpdateSlat(v9, a2, (unsigned int)v7, (a4 >> 5) & 1);
      if ( updated < 0 )
        goto LABEL_24;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    __writecr8((unsigned __int8)v12);
    v12 = -1LL;
    VmpFaultEntryRemove(v9, a2, (unsigned int)v7);
    v10 = 0;
    if ( v13 )
    {
      v7 = 0LL;
      if ( a2 < v14 )
      {
        v17 = (__int64 *)(a2 + 32);
        do
        {
          v18 = *v17;
          if ( (*v17 & 0x80000000000000LL) != 0 )
          {
            if ( (v18 & 0x100000000000000LL) == 0 )
            {
              *(v17 - 1) &= ~0x10000000000000uLL;
              *v17 = v18 & 0xFFFFFFFFFFFFFLL;
              v19 = 6 * v7;
              v7 = (unsigned int)(v7 + 1);
              *(_OWORD *)(a2 + 8 * v19) = *((_OWORD *)v17 - 2);
              *(_OWORD *)(a2 + 8 * v19 + 16) = *((_OWORD *)v17 - 1);
              *(_OWORD *)(a2 + 8 * v19 + 32) = *(_OWORD *)v17;
            }
            if ( !--v13 )
              break;
          }
          v17 += 6;
        }
        while ( (unsigned __int64)(v17 - 4) < v14 );
        v6 = a4;
        if ( (_DWORD)v7 )
          continue;
      }
    }
    updated = 0;
    goto LABEL_24;
  }
  updated = -1073741558;
LABEL_24:
  if ( v12 != -1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    __writecr8((unsigned __int8)v12);
  }
  if ( v10 )
LABEL_27:
    VmpFaultEntryRemove(v9, a2, (unsigned int)v7);
  return (unsigned int)updated;
}
