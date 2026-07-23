/*
 * XREFs of sub_180055584 @ 0x180055584
 * Callers:
 *     TpStartAsyncIoOperation @ 0x180025840 (TpStartAsyncIoOperation.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800552A0 (TpReleaseCleanupGroupMembers.c)
 *     sub_180055720 @ 0x180055720 (sub_180055720.c)
 *     TpWaitForAlpcCompletion @ 0x180055760 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x1800560F0 (TpWaitForJobNotification.c)
 *     TpCancelAsyncIoOperation @ 0x18007B150 (TpCancelAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x18007FA70 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180082D50 (TpWaitForIoCompletion.c)
 *     sub_180108010 @ 0x180108010 (sub_180108010.c)
 *     sub_180108370 @ 0x180108370 (sub_180108370.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800556D0 @ 0x1800556D0 (sub_1800556D0.c)
 *     sub_1800556F8 @ 0x1800556F8 (sub_1800556F8.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

int __fastcall sub_180055584(_RTL_SRWLOCK *a1, int a2, int a3)
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
    LODWORD(v11) = sub_1800556F8(v12);
  }
  else if ( v3 )
  {
    sub_1800556D0(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = ZwWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
