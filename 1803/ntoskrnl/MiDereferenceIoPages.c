/*
 * XREFs of MiDereferenceIoPages @ 0x140139794
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  void *v3; // rbx
  ULONG_PTR v4; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v7; // r13
  unsigned __int64 *i; // rdi
  __int64 *v9; // rax
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  ULONG_PTR v16; // rdx
  unsigned __int64 *v17; // rsi
  _WORD *v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  ULONG_PTR v21; // rbx
  ULONG_PTR v22; // r9
  unsigned __int64 j; // r14
  unsigned __int64 *v24; // r10
  _WORD *v25; // rcx
  _WORD *v26; // rdx
  _QWORD *v27; // rdx
  bool v28; // r8
  int v29; // eax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  bool v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v37; // [rsp+30h] [rbp-58h]
  __int64 *v38; // [rsp+38h] [rbp-50h]
  KIRQL v39; // [rsp+90h] [rbp+8h]
  ULONG_PTR v40; // [rsp+98h] [rbp+10h]
  __int16 v41; // [rsp+98h] [rbp+10h]
  _QWORD *v43; // [rsp+A8h] [rbp+20h] BYREF

  v40 = a3;
  v3 = 0LL;
  v43 = 0LL;
  v4 = a2 & 0xFFFFFFFFFLL;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  v7 = a3;
  i = (unsigned __int64 *)&qword_1403CC348[a1];
  v37 = i;
  v9 = &qword_1403CC358;
  if ( a1 != 1 )
    v9 = 0LL;
  v38 = v9;
  v39 = ExAcquireSpinLockExclusive(&dword_1403CC340);
LABEL_5:
  for ( i = (unsigned __int64 *)*i; i; i = (unsigned __int64 *)i[1] )
  {
    v10 = i[5];
    if ( v4 < v10 )
      goto LABEL_5;
    if ( v4 < v10 + 512 )
      break;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0x1Au, 0x61948uLL, v4, a3, BugCheckParameter4);
      v11 = i[1];
      v12 = (unsigned __int64)i;
      if ( v11 )
      {
        v13 = *(_QWORD **)v11;
        if ( *(_QWORD *)v11 )
        {
          do
          {
            v11 = (unsigned __int64)v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
      }
      else
      {
        for ( j = i[2]; ; j = *(_QWORD *)(v11 + 16) )
        {
          v11 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 || *(_QWORD *)v11 == v12 )
            break;
          v12 = v11;
        }
      }
      v14 = i[5];
      v15 = i[6];
      v16 = (BugCheckParameter4 & 0xFFFFFFFFFLL) - v14;
      v17 = i;
      v18 = (_WORD *)(v15 + 2 * v16);
      v19 = v7 + BugCheckParameter4 > v14 + 512 ? 1024LL : 2 * (v16 + v7);
      v20 = v15 + v19;
      if ( (unsigned __int64)v18 < v15 + v19 )
        break;
LABEL_23:
      v7 = v40;
      i = (unsigned __int64 *)v11;
      if ( !v40 )
        goto LABEL_24;
    }
    v21 = v40;
LABEL_17:
    if ( (*v18 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
    v41 = (*v18 ^ (*v18 - 1)) & 0x3FFF ^ *v18;
    *v18 = v41;
    if ( (v41 & 0x3FFF) != 0 )
      goto LABEL_21;
    v22 = v17[7];
    if ( v22 == 0 || v22 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v17, v22, BugCheckParameter4);
    v17[7] = v22 - 1;
    if ( v22 != 1 )
      goto LABEL_21;
    RtlAvlRemoveNode(v37, (__int64)v17);
    v24 = (unsigned __int64 *)v38;
    if ( v38 )
    {
      v25 = (_WORD *)v17[6];
      v26 = v25 + 512;
      while ( 1 )
      {
        if ( v25 >= v26 )
          goto LABEL_39;
        if ( (*v25 & 0xC000) == 0x4000 )
          break;
        ++v25;
      }
      _InterlockedOr(v36, 0);
      v29 = KiCacheFlushTimeStamp;
      *((_DWORD *)v17 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_1403CC360 == &qword_1403CC360 )
        dword_1403CC370 = v29;
      v30 = (_QWORD *)qword_1403CC368;
      v31 = v17 + 3;
      if ( *(__int64 **)qword_1403CC368 != &qword_1403CC360 )
        __fastfail(3u);
      *v31 = &qword_1403CC360;
      v32 = 0;
      v17[4] = (unsigned __int64)v30;
      *v30 = v31;
      qword_1403CC368 = (__int64)(v17 + 3);
      v33 = (_QWORD *)*v24;
      if ( *v24 )
      {
        while ( 1 )
        {
          if ( v17[5] < v33[5] )
          {
            v35 = (_QWORD *)*v33;
            if ( !*v33 )
            {
              v32 = 0;
              break;
            }
          }
          else
          {
            v35 = (_QWORD *)v33[1];
            if ( !v35 )
            {
              v32 = 1;
              break;
            }
          }
          v33 = v35;
        }
      }
      RtlAvlInsertNodeEx(v24, (unsigned __int64)v33, v32, i);
      v17 = 0LL;
      ++qword_1403CC378;
    }
LABEL_39:
    if ( !v17 )
      goto LABEL_21;
    v27 = v43;
    v28 = 0;
    if ( !v43 )
      goto LABEL_41;
    while ( 1 )
    {
      if ( v17[5] < v27[5] )
      {
        v34 = (_QWORD *)*v27;
        if ( !*v27 )
        {
          v28 = 0;
LABEL_41:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v43, (unsigned __int64)v27, v28, i);
LABEL_21:
          ++v18;
          --v21;
          ++BugCheckParameter4;
          v40 = v21;
          if ( (unsigned __int64)v18 >= v20 )
          {
            v3 = v43;
            goto LABEL_23;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v34 = (_QWORD *)v27[1];
        if ( !v34 )
        {
          v28 = 1;
          goto LABEL_41;
        }
      }
      v27 = v34;
    }
  }
LABEL_24:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
  __writecr8(v39);
  while ( v3 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v43, (__int64)v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v43;
  }
}
