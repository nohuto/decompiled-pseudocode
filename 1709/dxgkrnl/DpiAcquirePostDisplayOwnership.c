/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C0122B08
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C0122AF0 (DpAcquirePostDisplayOwnership.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C0123F00 (DpGetPostDisplayInfoPlusEdid.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C01DB0C0 (DpAcquirePostDisplayOwnership2.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = a2;
  v7 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v7 = -1073741811;
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a1);
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  else if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C0060B38 && a1 == qword_1C0060B40 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
      {
        a2 = (_DWORD *)*(unsigned int *)(v8 + 236);
        if ( (_DWORD)a2 != 2 && (*(_DWORD *)(v8 + 240) != 2 || (((_DWORD)a2 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 4) )
          *(_BYTE *)(v8 + 3736) |= 4u;
      }
    }
    if ( qword_1C0060A80 == a1 )
    {
      memmove(v5, &dword_1C0060A90, 0x20uLL);
      if ( a3 )
        *a3 ^= ((unsigned __int8)dword_1C0060B7C ^ (unsigned __int8)*a3) & 0xF;
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v8, a2, a1, a4);
      *(_QWORD *)(v11 + 24) = 0LL;
      WdLogEvent5_WdEvent(v11);
      memset(v5, 0, 0x20uLL);
      v5[6] = -1;
      if ( a3 )
        *a3 &= 0xFFFFFFF0;
    }
  }
  else
  {
    v7 = -1073741811;
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  return v7;
}
