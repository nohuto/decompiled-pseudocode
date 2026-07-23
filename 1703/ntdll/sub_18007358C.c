/*
 * XREFs of sub_18007358C @ 0x18007358C
 * Callers:
 *     TpCancelAsyncIoOperation @ 0x180013D80 (TpCancelAsyncIoOperation.c)
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     TpStartAsyncIoOperation @ 0x180017660 (TpStartAsyncIoOperation.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800732B0 (TpReleaseCleanupGroupMembers.c)
 *     sub_180073730 @ 0x180073730 (sub_180073730.c)
 *     TpWaitForAlpcCompletion @ 0x18007F270 (TpWaitForAlpcCompletion.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 *     TpWaitForJobNotification @ 0x180080E80 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x180083460 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180087F70 (TpWaitForIoCompletion.c)
 *     sub_180105230 @ 0x180105230 (sub_180105230.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800736D8 @ 0x1800736D8 (sub_1800736D8.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

int __fastcall sub_18007358C(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Ptr; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  PVOID v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Ptr = (unsigned __int64)a1->Ptr;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Ptr;
    v10 = (Ptr ^ (v8 + Ptr)) & 0xFFFFFFFFFFFFFFFLL ^ Ptr;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Ptr = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Ptr;
    a1[2].Ptr = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = sub_180073700(v12);
  }
  else if ( v3 )
  {
    sub_1800736D8(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = ZwWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
