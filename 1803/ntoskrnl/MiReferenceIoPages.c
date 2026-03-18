/*
 * XREFs of MiReferenceIoPages @ 0x140139BCC
 * Callers:
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x1408BA520 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140139FA8 (MiIoSpaceIsConstant.c)
 *     MiInitializeIoPageNodeArray @ 0x14014A570 (MiInitializeIoPageNodeArray.c)
 *     MiRemoveUnmappedIoNode @ 0x14014C5F4 (MiRemoveUnmappedIoNode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiFlushCacheMdl @ 0x140267808 (MiFlushCacheMdl.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  int v6; // esi
  __int64 v7; // r15
  __int64 *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  char *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // r13
  unsigned __int64 *v14; // r12
  __int64 IsConstant; // rax
  __int64 v16; // r9
  _QWORD *v17; // rdi
  bool v18; // bp
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  int v28; // r10d
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  _QWORD *PoolWithTag; // rax
  int v33; // eax
  int v34; // ecx
  _WORD *v35; // rcx
  unsigned __int64 v36; // rcx
  int v37; // [rsp+24h] [rbp-144h]
  __int64 v40; // [rsp+30h] [rbp-138h]
  __int64 *v41; // [rsp+40h] [rbp-128h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-118h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-110h]
  __int64 v44; // [rsp+68h] [rbp-100h]
  char v45; // [rsp+70h] [rbp-F8h] BYREF
  char v46; // [rsp+A0h] [rbp-C8h] BYREF

  v6 = a1;
  v40 = a3;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v7 = -1LL;
  v37 = 0;
  v8 = &qword_1403CC348[a1];
  v9 = a2 & 0xFFFFFFFFFLL;
  v42 = (unsigned __int64 *)v8;
  v44 = a2 & 0xFFFFFFFFFLL;
  v10 = &qword_1403CC358;
  v11 = 0LL;
  v12 = 0;
  if ( a1 != 1 )
    v10 = 0LL;
  v13 = a2 & 0xFFFFFFFFFLL;
  v41 = v10;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v9, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CC340);
  v16 = v40;
  if ( v40 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)*v8;
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = v17[5];
          if ( v9 >= v19 )
          {
            if ( v9 < v19 + 512 )
            {
              v21 = v17;
              goto LABEL_17;
            }
            v20 = (_QWORD *)v17[1];
            if ( !v20 )
            {
              v18 = 1;
              break;
            }
          }
          else
          {
            v20 = (_QWORD *)*v17;
            if ( !*v17 )
            {
              v18 = 0;
              break;
            }
          }
          v17 = v20;
        }
      }
      if ( !v41 || (v21 = (_QWORD *)MiRemoveUnmappedIoNode(v41, v9)) == 0LL )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
        v21 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
          __writecr8(CurrentIrql);
          MiDereferenceIoPages(a1, v13, v9 - v13);
          return 3221225626LL;
        }
        memset(PoolWithTag, 0, 0x440uLL);
        v21[5] = v9 & 0xFFFFFFFFFFFFFE00uLL;
        v21[6] = v21 + 8;
        MiInitializeIoPageNodeArray(v21);
      }
      RtlAvlInsertNodeEx(v42, (unsigned __int64)v17, v18, v21);
      v16 = v40;
LABEL_17:
      if ( a6 && !*a6 )
        *a6 = v21;
      v22 = v21[5];
      v23 = v21[6];
      v24 = v22 + 512;
      v25 = (unsigned __int16 *)(v23 + 2 * (v9 - v22));
      if ( v22 == -512 || v16 + v9 <= v24 )
        v26 = 2 * (v16 + v9 - v22);
      else
        v26 = 1024LL;
      v27 = v23 + v26;
      if ( (unsigned __int64)v25 < v23 + v26 )
        break;
LABEL_32:
      if ( v37 )
      {
        v35 = (_WORD *)v21[6];
        v24 = (unsigned __int64)(v35 + 512);
        if ( v35 < v35 + 512 )
        {
          v23 = 0x3FFFLL;
          do
          {
            if ( (*v35 & 0x3FFF) == 0 )
              *v35 |= 0xC000u;
            ++v35;
          }
          while ( (unsigned __int64)v35 < v24 );
          v13 = v44;
          v16 = v40;
        }
      }
      if ( !v16 )
      {
        v12 = 0;
        goto LABEL_35;
      }
      v8 = (__int64 *)v42;
    }
    v23 = (__int64)a5;
    v28 = v37;
    while ( 1 )
    {
      v29 = *v25;
      v24 = *v25;
      if ( (*v25 & 0x3FFF) == 0x3FFF )
        break;
      v30 = (unsigned int)v24 >> 14;
      if ( (v29 & 0x3FFF) != 0 )
      {
        if ( (_DWORD)v30 == a4 )
          ++dword_1403CC380;
        else
          ++dword_1403CC384;
      }
      else
      {
        ++v21[7];
        if ( (_DWORD)v30 == a4 )
        {
          ++dword_1403CC38C;
        }
        else
        {
          if ( v41 && (v29 & 0xC000) == 0x4000 && !v28 )
          {
            ++dword_1403CC390;
            if ( !v11 )
            {
              v11 = &v45;
              v14 = (unsigned __int64 *)&v46;
            }
            *v14++ = v9;
            if ( v14 == (unsigned __int64 *)(v11 + 176) )
            {
              ++dword_1403CC388;
              *(_QWORD *)v11 = 0LL;
              *((_DWORD *)v11 + 2) = 131248;
              *((_QWORD *)v11 + 4) = 0LL;
              *((_QWORD *)v11 + 5) = 0x10000LL;
              v33 = MiFlushCacheMdl(1LL, v30, v23);
              v34 = v37;
              v16 = v40;
              v11 = 0LL;
              if ( v33 )
                v34 = 1;
              v37 = v34;
              v28 = v34;
            }
          }
          v23 = (__int64)a5;
          v29 = (_WORD)a4 << 14;
        }
      }
      if ( v23 )
        *(_DWORD *)v23 |= 1 << (v29 >> 14);
      v24 = 1LL;
      --v16;
      ++v9;
      v40 = v16;
      *v25++ = (v29 ^ (v29 + 1)) & 0x3FFF ^ v29;
      if ( (unsigned __int64)v25 >= v27 )
        goto LABEL_32;
    }
    v12 = -1073741670;
    if ( v9 != v13 )
      v7 = v9;
LABEL_35:
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      *((_DWORD *)v11 + 11) = 0;
      v36 = (unsigned __int64)(unsigned int)(((char *)v14 - v11 - 48) >> 3) << 12;
      *((_DWORD *)v11 + 10) = v36;
      *((_WORD *)v11 + 4) = 8 * (((v36 + 4095) >> 12) + 6);
      *((_WORD *)v11 + 5) = 2;
      ++dword_1403CC388;
      MiFlushCacheMdl(v36, v24, v23);
    }
    v6 = a1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
  __writecr8(CurrentIrql);
  if ( v7 != -1 )
    MiDereferenceIoPages(v6, v13, v7 - v13);
  return v12;
}
