/*
 * XREFs of DestroyThreadsObjects @ 0x1C003ED90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     DestroyCacheDCEntries @ 0x1C007C05C (DestroyCacheDCEntries.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  char *v2; // rdx
  unsigned __int8 v3; // r8
  _QWORD *v4; // r9
  __int64 *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 49) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 )
    CleanupW32ThreadLocks(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v1 = 0;
  if ( *((_QWORD *)v0 + 130) )
  {
    if ( (int)Is_FreeTouchInputInfoSupported() >= 0 )
      _FreeTouchInputInfo(*((_QWORD *)v0 + 130), 1LL);
    *((_QWORD *)v0 + 130) = 0LL;
  }
  if ( *((_QWORD *)v0 + 131) )
  {
    if ( (int)Is_FreeGestureInfoSupported() >= 0 )
      _FreeGestureInfo(*((_QWORD *)v0 + 131), 1LL);
    *((_QWORD *)v0 + 131) = 0LL;
  }
  do
  {
    v2 = (char *)qword_1C018E9B8 + 32 * v1;
    v3 = v2[24];
    v4 = (char *)gpKernelHandleTable + 24 * v1;
    if ( v3 )
    {
      if ( (*((_BYTE *)&unk_1C015EA5C + 24 * v3) & 2) != 0 )
      {
        if ( v3 == 2 )
        {
          v5 = (__int64 *)(*v4 + 88LL);
          if ( *v5 )
          {
            if ( *(struct tagTHREADINFO **)(*v5 + 16) == v0 )
              HMAssignmentUnlock(v5);
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v4[1] == v0 && (v2[25] & 1) == 0 )
      {
        HMDestroyUnlockedObject((char *)qword_1C018E9B8 + 32 * v1);
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
}
