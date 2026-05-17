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

__int64 __fastcall sub_180055584(volatile signed __int64 *a1, int a2, unsigned __int64 *a3, __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  char *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (int)a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = (char *)(v11 & 0xFFFFFFFFFFFFFFFLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), (unsigned __int64)v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, (__int64)a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return sub_1800556F8(v14);
  }
  else if ( v4 )
  {
    sub_1800556D0(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return ZwWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
