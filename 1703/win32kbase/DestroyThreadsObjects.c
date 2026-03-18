/*
 * XREFs of DestroyThreadsObjects @ 0x1C0040A10
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     DestroyCacheDCEntries @ 0x1C007B04C (DestroyCacheDCEntries.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  char *v2; // r8
  _QWORD *v3; // rdx
  unsigned __int8 v4; // r9
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 46) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 )
    CleanupW32ThreadLocks(v0);
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  v6 = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v6);
  v1 = 0;
  if ( *((_QWORD *)v0 + 119) )
  {
    if ( (int)Is_FreeTouchInputInfoSupported() >= 0 )
      _FreeTouchInputInfo(*((_QWORD *)v0 + 119), 1LL);
    *((_QWORD *)v0 + 119) = 0LL;
  }
  if ( *((_QWORD *)v0 + 120) )
  {
    if ( (int)Is_FreeGestureInfoSupported() >= 0 )
      _FreeGestureInfo(*((_QWORD *)v0 + 120), 1LL);
    *((_QWORD *)v0 + 120) = 0LL;
  }
  do
  {
    v2 = (char *)qword_1C0189E38 + 32 * v1;
    v3 = (char *)gpKernelHandleTable + 16 * v1;
    v4 = v2[24];
    if ( v4 )
    {
      if ( (*((_BYTE *)&unk_1C015ED5C + 24 * v4) & 2) != 0 )
      {
        if ( v4 == 2 )
        {
          v5 = *v3 + 88LL;
          if ( *(_QWORD *)v5 )
          {
            if ( *(struct tagTHREADINFO **)(*(_QWORD *)v5 + 16LL) == v0 )
              HMAssignmentUnlock(v5);
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v3[1] == v0 && (v2[25] & 1) == 0 )
      {
        HMDestroyUnlockedObject((char *)qword_1C0189E38 + 32 * v1);
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  if ( !v6 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v6);
  }
}
