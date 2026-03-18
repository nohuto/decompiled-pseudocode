/*
 * XREFs of ExDupHandleTable @ 0x1405533A0
 * Callers:
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x140553220 (ExCreateHandleTable.c)
 *     ObInheritObjectHandle @ 0x14055384C (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x14055390C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1407BD4E4 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, volatile __int64 *a2, unsigned int a3, _BYTE *a4, __int64 *a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // esi
  __int64 *v7; // r15
  unsigned __int64 v9; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // edx
  _DWORD *v14; // rcx
  unsigned int *HandleTable; // rax
  unsigned int *v16; // rcx
  int v17; // r13d
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // r14
  volatile signed __int64 *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  char v36; // al
  volatile signed __int64 *v38; // r12
  int v39; // r12d
  __int64 v40; // rcx
  char HandleTableEntrySlow; // al
  unsigned int v42; // edx
  _QWORD *v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v47; // r10
  _QWORD *v48; // rax
  signed __int32 v49[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 *v51; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp+8h]
  unsigned int v59; // [rsp+C0h] [rbp+18h]

  v57 = a1;
  v5 = *(unsigned int *)a2;
  v6 = 0;
  v7 = a5;
  v50 = v5;
  v9 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v42 = 1;
      if ( a3 <= 1 )
      {
LABEL_60:
        v44 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v44 < v9 )
        {
          v9 = v44 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        v43 = a4 + 8;
        while ( (*v43 & 3) == 0 && *v43 > *(_QWORD *)&a4[8 * v42 - 8] )
        {
          ++v42;
          ++v43;
          if ( v42 >= a3 )
            goto LABEL_60;
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
  a1 = v57;
  v50 = v9;
LABEL_15:
  if ( v9 )
  {
    HandleTable = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
    *v7 = (__int64)HandleTable;
    v16 = HandleTable;
    if ( HandleTable )
    {
      if ( *HandleTable >= v9 )
      {
LABEL_18:
        *((_BYTE *)v16 + 44) |= 8u;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v53 = *v7;
        v17 = 0;
        v59 = 0;
        v18 = 0LL;
        v51 = (__int64 *)(v53 + 72);
        while ( 1 )
        {
          v19 = ExpLookupHandleTableEntry(a2, v18);
          v20 = *v7;
          v55 = v19;
          v52 = ExpLookupHandleTableEntry(v20, v18);
          v24 = v21 - v52;
          v25 = 1;
          v54 = v21 - v52;
          v26 = v52 + 16;
          while ( v17 >= 0 )
          {
            if ( a3 && *(_QWORD *)&a4[8 * v22] != v18 + 4 * v25 )
              goto LABEL_25;
            v27 = (volatile signed __int64 *)(v24 + v26);
            if ( (*(_DWORD *)(v24 + v26) & 0x40000) == 0 )
              goto LABEL_23;
            v38 = (volatile signed __int64 *)(v21 + 16LL * v25);
            if ( !ExLockHandleTableEntry(v23, v38) )
              goto LABEL_23;
            if ( (*(_DWORD *)v27 & 0x40000) == 0 )
            {
              _InterlockedExchangeAdd64(v38, 1uLL);
              _InterlockedOr(v49, 0);
              if ( *((_QWORD *)a2 + 6) )
                ExfUnblockPushLock(a2 + 6, 0LL);
LABEL_23:
              v7 = a5;
              if ( a3 )
                v17 = -1073741811;
              goto LABEL_25;
            }
            *(_OWORD *)v26 = *(_OWORD *)v27;
            *(_QWORD *)v26 &= 0xFFFFFFFFFFFE0001uLL;
            *(_QWORD *)v26 |= 1uLL;
            if ( *((_DWORD *)a2 + 1)
              && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v18 + 4 * v25)) != 0LL
              && (*HandleExtraInfo || HandleExtraInfo[1])
              && (v39 = ExpSetHandleExtraInfo(v47, v18 + 4 * v25), v39 < 0) )
            {
              _InterlockedExchangeAdd64(v27, 1uLL);
              _InterlockedOr(v49, 0);
              if ( *((_QWORD *)a2 + 6) )
                ExfUnblockPushLock(a2 + 6, 0LL);
            }
            else
            {
              v39 = ObInheritObjectHandle(v57, v18 + 4 * v25, a2, v27);
              if ( v39 >= 0 )
                goto LABEL_37;
              if ( !a4 )
                v39 = 263;
            }
            *(_QWORD *)v26 = 0LL;
            *(_QWORD *)(v26 + 8) = 0LL;
LABEL_37:
            v7 = a5;
            v17 = v39;
            if ( v39 >= 0 )
            {
              if ( v39 != 263 )
              {
                v40 = *a5;
                ++*(_DWORD *)(*a5 + 88);
                if ( a3 && v59 < a3 - 1 )
                  ++v59;
                if ( *(_QWORD *)(v40 + 96) )
                  ExpUpdateDebugInfo(v40, KeGetCurrentThread(), v18 + 4 * v25, 1LL);
                goto LABEL_26;
              }
              v17 = 0;
            }
LABEL_25:
            v28 = 16LL * v25 + v52;
            *v51 = v28;
            v51 = (__int64 *)(v28 + 8);
            *(_QWORD *)(v53 + 80) = v28;
            *(_QWORD *)v26 = 0LL;
LABEL_26:
            v24 = v54;
            ++v25;
            v21 = v55;
            v26 += 16LL;
            v22 = v59;
            v23 = (__int64)a2;
            if ( v25 >= 0x100 )
              goto LABEL_27;
          }
          memset((void *)(16LL * v25 + v52), 0, 4096 - 16LL * v25);
LABEL_27:
          v18 += 1024LL;
          if ( v18 >= v50 )
          {
            v29 = *v7;
            v30 = *v7;
            v31 = (__int64)CurrentThread;
            *v51 = 0LL;
            if ( v17 < 0 )
            {
              *(_BYTE *)(v30 + 44) |= 4u;
              v48 = (_QWORD *)(v29 + 24);
              v48[1] = v48;
              *v48 = v48;
            }
            else
            {
              *(_DWORD *)(v30 + 92) = *(_DWORD *)(v30 + 88);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
              v34 = (_QWORD *)qword_140862970;
              v35 = (_QWORD *)(*v7 + 24);
              if ( *(__int64 **)qword_140862970 != &HandleTableListHead )
                __fastfail(3u);
              *v35 = &HandleTableListHead;
              v35[1] = v34;
              *v34 = v35;
              qword_140862970 = (__int64)v35;
              v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v36 & 2) != 0 && (v36 & 4) == 0 )
                ExfTryToWakePushLock(
                  (volatile signed __int64 *)&HandleTableListLock,
                  (__int64)&HandleTableListHead,
                  v32,
                  v33);
              KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
              v17 = 0;
            }
            KeLeaveCriticalRegionThread(v31);
            return (unsigned int)v17;
          }
        }
      }
      while ( 1 )
      {
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v16, 0LL);
        v16 = (unsigned int *)*v7;
        if ( !HandleTableEntrySlow )
          break;
        if ( *v16 >= v9 )
          goto LABEL_18;
      }
      ExpFreeHandleTable(v16);
      *v7 = 0LL;
    }
    return 3221225626LL;
  }
  v45 = ExCreateHandleTable(a1, 1LL);
  *v7 = v45;
  if ( !v45 )
    return (unsigned int)-1073741670;
  return v6;
}
