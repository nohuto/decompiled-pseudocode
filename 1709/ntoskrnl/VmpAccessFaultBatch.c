/*
 * XREFs of VmpAccessFaultBatch @ 0x1402786D8
 * Callers:
 *     VmAccessFault @ 0x140278290 (VmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     VmpFaultEntryInsert @ 0x140278B6C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140278C5C (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x140279674 (VmpProcessContextLockShared.c)
 *     VmpProcessUpdateSlat @ 0x1402796D4 (VmpProcessUpdateSlat.c)
 *     MmVirtualAccessFault @ 0x1406E504C (MmVirtualAccessFault.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        char a5,
        unsigned __int8 a6,
        __int64 a7)
{
  int v10; // r9d
  _QWORD *v11; // r14
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // r12d
  int v16; // eax
  unsigned __int64 v17; // r13
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rsi
  int updated; // r14d
  __int64 v21; // r12
  int v22; // ebx
  unsigned __int64 v23; // r8
  _QWORD *i; // rdx
  int v25; // r13d
  unsigned __int64 v26; // r8
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v31; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+24h] [rbp-54h] BYREF
  int v33; // [rsp+28h] [rbp-50h]
  __int64 v34[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+A0h] [rbp+28h]

  v31 = a5 & 2;
  v10 = a5 & 1 | 2;
  v11 = a3;
  if ( (a5 & 2) == 0 )
    v10 = a5 & 1;
  v12 = v10 | 1;
  v33 = a5 & 4;
  if ( (a5 & 4) == 0 )
    v12 = v10;
  v13 = v12 | 8;
  if ( (a5 & 8) == 0 )
    v13 = v12;
  v14 = v13 | 0x10;
  if ( (a5 & 0x10) == 0 )
    v14 = v13;
  v15 = a5 & 0x20;
  v37 = v15;
  v16 = v14 | 0x20;
  if ( !v15 )
    v16 = v14;
  v35 = v16;
  while ( 1 )
  {
    VmpFaultEntryInsert(SpinLock, a2, a4);
    v17 = a2;
    v18 = v11;
    v19 = a2 + 32LL * a4;
    if ( a2 < v19 )
    {
      do
      {
        updated = MmVirtualAccessFault(*(_QWORD *)(v17 + 24) << 12, v35, v34, &v32);
        if ( updated >= 0 )
        {
          v18[1] = v34[0];
          if ( v31 || (a6 & (unsigned __int8)v32 & 2) != 0 )
            *v18 |= 0x10000000000000uLL;
          if ( v33 )
            *v18 |= 0x20000000000000uLL;
        }
        else
        {
          if ( !v15 )
            goto LABEL_47;
          v18[1] = -1LL;
        }
        v17 += 32LL;
        v18 += 2;
      }
      while ( v17 < v19 );
      v11 = a3;
    }
    v21 = VmpProcessContextLockShared(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a7 )
      break;
    v22 = 0;
    v23 = a2;
    for ( i = v11; v23 < v19; i += 2 )
    {
      if ( (*(_QWORD *)(v23 + 24) & 0x10000000000000LL) != 0 || i[1] == -1LL )
      {
        *i |= 0x40000000000000uLL;
        ++v22;
      }
      v23 += 32LL;
    }
    if ( v22 != a4 )
    {
      updated = VmpProcessUpdateSlat(SpinLock, v11, a4, v37 != 0);
      if ( updated < 0 )
        goto LABEL_43;
      v11 = a3;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v21);
    v21 = -1LL;
    VmpFaultEntryRemove(SpinLock, a2, a4);
    v25 = 0;
    v26 = a2;
    v27 = v11;
    if ( !v22 )
      goto LABEL_41;
    a4 = 0;
    if ( a2 >= v19 )
      goto LABEL_41;
    do
    {
      if ( (*v27 & 0x40000000000000LL) != 0 )
      {
        if ( v27[1] != -1LL )
        {
          *(_QWORD *)(v26 + 24) &= ~0x10000000000000uLL;
          v28 = 2LL * a4;
          v29 = 32LL * a4;
          *(_OWORD *)(v29 + a2) = *(_OWORD *)v26;
          *(_OWORD *)(v29 + a2 + 16) = *(_OWORD *)(v26 + 16);
          *v27 &= 0xFFFFFFFFFFFFFuLL;
          ++a4;
          *(_OWORD *)&v11[v28] = *(_OWORD *)v27;
        }
        if ( !--v22 )
          break;
      }
      v26 += 32LL;
      v27 += 2;
    }
    while ( v26 < v19 );
    if ( !a4 )
    {
LABEL_41:
      updated = 0;
      goto LABEL_44;
    }
    v15 = v37;
  }
  updated = -1073741558;
LABEL_43:
  v25 = 1;
LABEL_44:
  if ( v21 != -1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v21);
  }
  if ( v25 )
LABEL_47:
    VmpFaultEntryRemove(SpinLock, a2, a4);
  return (unsigned int)updated;
}
