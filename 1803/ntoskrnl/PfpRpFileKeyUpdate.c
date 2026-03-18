/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1404A9210
 * Callers:
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PfpRpIsRehashNeeded @ 0x1400B6628 (PfpRpIsRehashNeeded.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x14055A5E0 (PfpRpRehashIfNeeded.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  int v5; // ebx
  int v7; // eax
  PVOID v9; // r12
  _QWORD *v10; // rdi
  PVOID v11; // r13
  WCHAR *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  WCHAR *i; // rbp
  WCHAR v16; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 j; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // r11d
  _QWORD *v22; // r12
  __int64 v23; // r8
  unsigned int v24; // r10d
  char v25; // al
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 v30; // r10
  _QWORD *v31; // rcx
  void *v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-78h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+40h] [rbp-58h]
  unsigned int v35; // [rsp+A0h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h]
  int v37; // [rsp+B0h] [rbp+18h]
  PVOID PoolWithTag; // [rsp+B8h] [rbp+20h] BYREF

  v37 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 0;
  PoolWithTag = 0LL;
  v5 = a3;
  v35 = 0;
  v7 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  v9 = 0LL;
  v33 = v3;
  v10 = 0LL;
  if ( (v7 & 1) == 0 )
    return 3221225600LL;
  RunRef = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !v5 )
  {
    v14 = 0LL;
    goto LABEL_10;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  v11 = P;
  if ( P )
  {
    if ( (unsigned int)PfpRpIsRehashNeeded((_DWORD *)a1, (int *)&v35) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x48466650u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        v35 = 0;
    }
    v12 = *(WCHAR **)(a2 + 24);
    v13 = *(unsigned __int16 *)(a2 + 34);
    v14 = 314159LL;
    for ( i = &v12[v13]; v12 < i; v14 = 37 * ((unsigned __int8)v16 + 37 * v14) + HIBYTE(v16) )
      v16 = RtlUpcaseUnicodeChar(*v12++);
    if ( v14 )
    {
      v5 = v37;
      v3 = v33;
LABEL_10:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
      if ( v5 )
      {
        v21 = *(_DWORD *)(a1 + 4) >> 5;
        v20 = v3 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
        v19 = HIWORD(v20);
        if ( v21 )
        {
          j = *(_QWORD *)(a1 + 8)
            + 8
            * ((HIBYTE(v20)
              + 37
              * (BYTE6(v20)
               + 37
               * (BYTE5(v20)
                + 37
                * (BYTE4(v20)
                 + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))) & (unsigned int)(v21 - 1));
          while ( 1 )
          {
            j = *(_QWORD *)j;
            if ( (j & 1) != 0 )
              break;
            if ( v20 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(j + 8)) )
            {
              *(_QWORD *)(j + 16) = v14;
              goto LABEL_18;
            }
          }
        }
        v22 = P;
        v23 = v35;
        *(_QWORD *)P = 0LL;
        v22[1] = v33;
        v22[2] = v14;
        if ( (unsigned int)PfpRpRehashIfNeeded(a1, &PoolWithTag, v23) )
        {
          v24 = *(_DWORD *)(a1 + 4);
          P = 0LL;
          v25 = v24 & 0x1F;
          v26 = v22[1] & (-1LL << (v24 & 0x1F));
          v27 = 37
              * ((unsigned __int8)((unsigned __int16)((v22[1] & (unsigned __int64)(-1LL << v25)) >> 32) >> 8)
               + 37
               * ((unsigned __int8)((v22[1] & (unsigned __int64)(-1LL << v25)) >> 32)
                + 37
                * ((((_DWORD)v22[1] & (unsigned int)(-1 << v25)) >> 24)
                 + 37
                 * ((unsigned __int8)(((_DWORD)v22[1] & (unsigned int)(-1 << v25)) >> 16)
                  + 37
                  * (37 * ((unsigned __int8)v26 + 11623883LL)
                   + (unsigned __int8)((unsigned __int16)(v22[1] & (-1 << v25)) >> 8))))));
          v20 = HIBYTE(v26);
          j = (unsigned __int8)((v22[1] & (unsigned __int64)(-1LL << (v24 & 0x1F))) >> 48) + v27;
          v28 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (((_DWORD)v20 + 37 * (_DWORD)j) & ((v24 >> 5) - 1)));
          *v22 = *v28;
          *v28 = v22;
          ++*(_DWORD *)a1;
        }
        else
        {
          v4 = -1073741670;
        }
      }
      else
      {
LABEL_27:
        if ( *(_DWORD *)a1 )
        {
          v20 = *(_DWORD *)(a1 + 4) >> 5;
          v30 = v3 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
          v19 = 37
              * (BYTE6(v30)
               + 37
               * (BYTE5(v30)
                + 37
                * (BYTE4(v30)
                 + 37
                 * ((((unsigned int)v3 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                  + 37
                  * ((unsigned __int8)(((unsigned int)v3 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                   + 37
                   * ((unsigned __int8)((unsigned __int16)(v3 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)
                    + 37 * ((unsigned __int8)v30 + 11623883LL)))))));
          for ( j = *(_QWORD *)(a1 + 8) + 8 * (((_DWORD)v19 + HIBYTE(v30)) & (unsigned int)(v20 - 1)); ; j = *(_QWORD *)j )
          {
            v31 = *(_QWORD **)j;
            if ( (*(_QWORD *)j & 1) != 0 )
              break;
            if ( ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & v31[1]) == v30 )
            {
              *(_QWORD *)j = *v31;
              --*(_DWORD *)a1;
              *v31 |= 0x8000000000000002uLL;
              if ( *(_QWORD **)(a1 + 16) == v31 )
                *(_QWORD *)(a1 + 16) = a1 + 24;
              *v31 = v10;
              v10 = v31;
              goto LABEL_27;
            }
          }
        }
      }
LABEL_18:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48), j, v19, v20);
      KeAbPostRelease(a1 + 48);
      KeLeaveCriticalRegion();
      v9 = PoolWithTag;
      v11 = P;
      goto LABEL_21;
    }
    v4 = -1073741747;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_21:
  ExReleaseRundownProtection(RunRef);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  while ( v10 )
  {
    v32 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v32, 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
