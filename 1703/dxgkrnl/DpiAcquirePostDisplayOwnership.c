/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C0122C80
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C0122C70 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C01C1490 (DpAcquirePostDisplayOwnership2.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C01C1B50 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v6 = -1073741811;
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a1);
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  else if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C006FCB8 && a1 == qword_1C006FCC0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
      {
        v8 = *(_DWORD *)(v7 + 236);
        if ( v8 != 2 && (*(_DWORD *)(v7 + 240) != 2 || ((v8 - 3) & 0xFFFFFFFC) != 0 || v8 == 4) )
          *(_BYTE *)(v7 + 3712) |= 4u;
      }
    }
    if ( qword_1C006FC00 == a1 )
    {
      memmove(a2, &dword_1C006FC10, 0x20uLL);
      if ( a3 )
        *a3 ^= ((unsigned __int8)dword_1C006FCFC ^ (unsigned __int8)*a3) & 0xF;
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v7);
      *(_QWORD *)(v11 + 24) = 0LL;
      WdLogEvent5_WdEvent(v11);
      memset(a2, 0, 0x20uLL);
      a2[6] = -1;
      if ( a3 )
        *a3 &= 0xFFFFFFF0;
    }
  }
  else
  {
    v6 = -1073741811;
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  return v6;
}
