/*
 * XREFs of ExDupHandleTable @ 0x14042B980
 * Callers:
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     ObInheritObjectHandle @ 0x14042BE2C (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1407172E0 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x140717328 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, volatile __int64 *a2, unsigned int a3, _BYTE *a4, unsigned int **a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int **v7; // r14
  unsigned __int64 v9; // r13
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // edx
  _DWORD *v14; // rcx
  unsigned int *HandleTable; // rax
  __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 v18; // rdi
  __int64 *v19; // r12
  __int64 v20; // rax
  unsigned int *v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // r10d
  __int64 v24; // r11
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // r14
  volatile signed __int64 *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  volatile signed __int64 *v35; // r13
  int v36; // r13d
  unsigned int *v37; // rcx
  _QWORD *v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v42; // r10
  unsigned int *v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+20h] [rbp-88h]
  unsigned __int64 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp+8h]
  int v54; // [rsp+C0h] [rbp+18h]

  v52 = a1;
  v5 = *(unsigned int *)a2;
  v6 = 0;
  v7 = a5;
  v46 = v5;
  v9 = (unsigned int)v5;
  v10 = 1;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      if ( a3 <= 1 )
      {
LABEL_61:
        v39 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v39 < v9 )
        {
          v9 = v39 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        v38 = a4 + 8;
        while ( (*v38 & 3) == 0 && *v38 > *(_QWORD *)&a4[8 * v10 - 8] )
        {
          ++v10;
          ++v38;
          if ( v10 >= a3 )
            goto LABEL_61;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_15;
  do
  {
    v11 = ExpLookupHandleTableEntry(a2, v9 - 1024);
    v13 = 255;
    v14 = (_DWORD *)(v11 + 4080);
    while ( (*v14 & 0x40000) == 0 )
    {
      if ( (*(v14 - 4) & 0x40000) != 0 )
      {
        --v13;
        break;
      }
      if ( (*(v14 - 8) & 0x40000) != 0 )
      {
        v13 -= 2;
        break;
      }
      if ( (*(v14 - 12) & 0x40000) != 0 )
      {
        v13 -= 3;
        break;
      }
      if ( (*(v14 - 16) & 0x40000) != 0 )
      {
        v13 -= 4;
        break;
      }
      v14 -= 20;
      v13 -= 5;
      if ( !v13 )
        break;
    }
    if ( v13 )
      break;
    v9 = v12;
  }
  while ( v12 );
  v7 = a5;
LABEL_14:
  a1 = v52;
  v46 = v9;
LABEL_15:
  if ( v9 )
  {
    HandleTable = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
    *v7 = HandleTable;
    if ( HandleTable )
    {
      if ( *HandleTable >= v9 )
      {
LABEL_18:
        *((_BYTE *)*v7 + 44) |= 8u;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = (__int64)(*v7 + 16);
        v45 = 0;
        v48 = v16;
        v17 = 0;
        v54 = 0;
        v18 = 0LL;
        v19 = (__int64 *)(v16 + 8);
        while ( 1 )
        {
          v20 = ExpLookupHandleTableEntry(a2, v18);
          v21 = *v7;
          v50 = v20;
          v47 = ExpLookupHandleTableEntry(v21, v18);
          v25 = v22 - v47;
          v26 = 1;
          v49 = v22 - v47;
          v27 = v47 + 16;
          while ( v17 >= 0 )
          {
            if ( a3 && *(_QWORD *)&a4[8 * v23] != v18 + 4 * v26 )
              goto LABEL_25;
            v28 = (volatile signed __int64 *)(v25 + v27);
            if ( (*(_DWORD *)(v25 + v27) & 0x40000) == 0 )
              goto LABEL_23;
            v35 = (volatile signed __int64 *)(v22 + 16LL * v26);
            if ( !ExLockHandleTableEntry(v24, v35) )
              goto LABEL_23;
            if ( (*(_DWORD *)v28 & 0x40000) == 0 )
            {
              _InterlockedExchangeAdd64(v35, 1uLL);
              _InterlockedOr(v44, 0);
              if ( *((_QWORD *)a2 + 6) )
                ExfUnblockPushLock(a2 + 6, 0LL);
LABEL_23:
              if ( a3 )
              {
                v17 = -1073741811;
                v54 = -1073741811;
              }
              else
              {
                v17 = v54;
              }
              goto LABEL_25;
            }
            *(_OWORD *)v27 = *(_OWORD *)v28;
            *(_QWORD *)v27 &= 0xFFFFFFFFFFFE0001uLL;
            *(_QWORD *)v27 |= 1uLL;
            if ( *((_DWORD *)a2 + 1)
              && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v18 + 4 * v26)) != 0LL
              && (*HandleExtraInfo || HandleExtraInfo[1])
              && (v36 = ExpSetHandleExtraInfo(v42, v18 + 4 * v26, HandleExtraInfo), v36 < 0) )
            {
              _InterlockedExchangeAdd64(v28, 1uLL);
              _InterlockedOr(v44, 0);
              if ( *((_QWORD *)a2 + 6) )
                ExfUnblockPushLock(a2 + 6, 0LL);
            }
            else
            {
              v36 = ObInheritObjectHandle(v52, v18 + 4 * v26, a2, v28);
              if ( v36 >= 0 )
                goto LABEL_38;
              if ( !a4 )
                v36 = 263;
            }
            *(_QWORD *)v27 = 0LL;
            *(_QWORD *)(v27 + 8) = 0LL;
LABEL_38:
            v54 = v36;
            v17 = v36;
            if ( v36 >= 0 )
            {
              if ( v36 != 263 )
              {
                v37 = *a5;
                ++(*a5)[22];
                if ( a3 && v45 < a3 - 1 )
                  ++v45;
                if ( *((_QWORD *)v37 + 12) )
                  ExpUpdateDebugInfo(v37, KeGetCurrentThread(), v18 + 4 * v26, 1LL);
                goto LABEL_26;
              }
              v17 = 0;
              v54 = 0;
            }
LABEL_25:
            v29 = 16LL * v26 + v47;
            v30 = v48;
            *v19 = v29;
            *(_QWORD *)(v30 + 16) = v29;
            v19 = (__int64 *)(v29 + 8);
            *(_QWORD *)v27 = 0LL;
LABEL_26:
            v25 = v49;
            ++v26;
            v22 = v50;
            v27 += 16LL;
            v23 = v45;
            v24 = (__int64)a2;
            if ( v26 >= 0x100 )
              goto LABEL_27;
          }
          memset((void *)(16LL * v26 + v47), 0, 4096 - 16LL * v26);
LABEL_27:
          v7 = a5;
          v18 += 1024LL;
          if ( v18 >= v46 )
          {
            v31 = (__int64)CurrentThread;
            *v19 = 0LL;
            if ( v17 < 0 )
            {
              v43 = *a5;
              *((_BYTE *)v43 + 44) |= 4u;
              v43 += 6;
              *((_QWORD *)v43 + 1) = v43;
              *(_QWORD *)v43 = v43;
            }
            else
            {
              (*a5)[23] = (*a5)[22];
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
              v32 = (_QWORD *)qword_1407ACF98;
              v33 = *a5 + 6;
              if ( *(__int64 **)qword_1407ACF98 != &HandleTableListHead )
                __fastfail(3u);
              *v33 = &HandleTableListHead;
              v33[1] = v32;
              *v32 = v33;
              qword_1407ACF98 = (__int64)v33;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
              KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
              v17 = 0;
            }
            KiLeaveCriticalRegionUnsafe(v31);
            return (unsigned int)v17;
          }
        }
      }
      while ( ExpAllocateHandleTableEntrySlow(*v7, 0LL) )
      {
        if ( **v7 >= v9 )
          goto LABEL_18;
      }
      ExpFreeHandleTable(*v7);
      *v7 = 0LL;
    }
    return 3221225626LL;
  }
  v40 = ExCreateHandleTable(a1, 1LL);
  *v7 = (unsigned int *)v40;
  if ( !v40 )
    return (unsigned int)-1073741670;
  return v6;
}
