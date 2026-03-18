/*
 * XREFs of CmpPromoteKey @ 0x1406EF198
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPopulateKcbStack @ 0x1404A5C10 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1404A5CCC (CmpStartKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400 (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v4; // di
  int started; // ebx
  bool v6; // r15
  unsigned int v7; // esi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v9; // r12
  __int64 v10; // rdi
  __int64 i; // rdx
  PPRIVILEGE_SET *v12; // r14
  PPRIVILEGE_SET *v13; // r13
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  signed __int64 *v19; // rcx
  PPRIVILEGE_SET *v20; // rax
  __int64 KcbAtLayerHeight; // [rsp+20h] [rbp-58h]
  PPRIVILEGE_SET v23[4]; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v24[5]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp+48h]
  ULONG_PTR BugCheckParameter2a; // [rsp+C0h] [rbp+48h]
  __int64 *v29; // [rsp+D8h] [rbp+60h]

  memset(v23, 0, sizeof(v23));
  WORD1(v23[0]) = -1;
  memset(v24, 0, 0x20uLL);
  v4 = *(_WORD *)(a1 + 2);
  WORD1(v24[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v4);
  started = CmpStartKcbStack((__int64)v23, v4);
  if ( started < 0 )
    goto LABEL_24;
  started = CmpStartKcbStack((__int64)v24, v4);
  if ( started < 0 )
    goto LABEL_24;
  v6 = 1;
  v7 = ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 8LL * v7, 0x37364D43u);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_24;
  }
  memset(TransientPoolWithTag, 0, 8LL * v7);
  LODWORD(v10) = v7;
  for ( i = KcbAtLayerHeight; (*(_DWORD *)(i + 176) & 0x40000) == 0; i = *(_QWORD *)(i + 64) )
  {
    v10 = (*(_DWORD *)(i + 4) >> 21) & 0x3FF;
    *((_QWORD *)&v9->PrivilegeCount + v10) = i;
  }
  v12 = v23;
  v13 = v24;
  CmpPopulateKcbStack((__int64)v24, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)v24);
  if ( (unsigned int)v10 >= v7 )
  {
LABEL_20:
    started = 0;
    v6 = a3 == 0;
    goto LABEL_21;
  }
  v14 = (__int64 *)((char *)v9 + 8 * (unsigned int)v10);
  v29 = v14;
  while ( 1 )
  {
    v15 = *v14;
    BugCheckParameter2 = *v14;
    CmpPopulateKcbStack((__int64)v12, *v14);
    CmpLockKcbStackTopExclusiveRestShared(v16);
    if ( CmpIsKeyStackDeleted((__int64)v12, 0LL) )
      break;
    v17 = *(_DWORD *)(v15 + 32);
    if ( v15 == KcbAtLayerHeight )
    {
      if ( v17 != -1 && !a2 )
        goto LABEL_19;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v15 + 24) + 72LL, 0LL);
      LOBYTE(v18) = a2;
    }
    else
    {
      if ( v17 != -1 )
        goto LABEL_19;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v15 + 24) + 72LL, 0LL);
      v18 = 0LL;
    }
    started = CmpPromoteSingleKeyFromKcbStacks(v13, v12, v18);
    v19 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 24) + 72LL);
    BugCheckParameter2a = (ULONG_PTR)v19;
    if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v19);
      v19 = (signed __int64 *)BugCheckParameter2a;
    }
    KeAbPostRelease((ULONG_PTR)v19);
    if ( started < 0 )
      goto LABEL_30;
LABEL_19:
    CmpUnlockKcbStack((__int64)v13);
    v20 = v12;
    LODWORD(v10) = v10 + 1;
    v12 = v13;
    v13 = v20;
    v14 = ++v29;
    if ( (unsigned int)v10 >= v7 )
      goto LABEL_20;
  }
  started = -1073741444;
LABEL_30:
  CmpUnlockKcbStack((__int64)v12);
LABEL_21:
  if ( v6 )
    CmpUnlockKcbStack((__int64)v13);
  CmSiFreeMemory(v9);
LABEL_24:
  if ( v23[3] )
    CmSiFreeMemory(v23[3]);
  if ( v24[3] )
    CmSiFreeMemory(v24[3]);
  return (unsigned int)started;
}
