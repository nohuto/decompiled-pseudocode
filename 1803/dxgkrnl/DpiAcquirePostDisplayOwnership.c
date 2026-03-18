/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C0202EC8
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C01ECFC0 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C01ECFE0 (DpAcquirePostDisplayOwnership2.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C01ED880 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rsi
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  v6 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C007AA90 && a1 == qword_1C007AA98 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          a2 = (_DWORD *)*(unsigned int *)(v8 + 236);
          if ( (_DWORD)a2 != 2
            && (*(_DWORD *)(v8 + 240) != 2 || (((_DWORD)a2 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 4) )
          {
            *(_BYTE *)(v8 + 3736) |= 4u;
          }
        }
      }
      if ( qword_1C007A9D8 == a1 )
      {
        memmove(v4, &dword_1C007A9E8, 0x20uLL);
        if ( a3 )
          *a3 ^= ((unsigned __int8)dword_1C007AAD4 ^ (unsigned __int8)*a3) & 0xF;
      }
      else
      {
        v9 = WdLogNewEntry5_WdEvent(v8, a2);
        *(_QWORD *)(v9 + 24) = 0LL;
        WdLogEvent5_WdEvent(v9);
        memset(v4, 0, 0x20uLL);
        v4[6] = -1;
        if ( a3 )
          *a3 &= 0xFFFFFFF0;
      }
    }
    else
    {
      v6 = -1073741811;
      v10 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v10 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v10);
    }
  }
  else
  {
    v6 = -1073741811;
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v7[3] = 275LL;
    v7[4] = 21LL;
    v7[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  return v6;
}
