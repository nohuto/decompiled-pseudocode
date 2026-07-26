/*
 * XREFs of ndisUnprocessAllOpens @ 0x1C0010480
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // eax
  struct _KEVENT *v9; // rcx
  __int64 v10; // r9

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(24LL, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, a4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1639055;
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 392);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 232));
      v8 = *(_DWORD *)(v6 + 224);
      if ( (v8 & 0x80010) == 0x80010 )
      {
        v9 = *(struct _KEVENT **)(v6 + 1008);
        *(_DWORD *)(v6 + 224) = v8 & 0xFFF7FFEF;
        if ( v9 )
        {
          KeSetEvent(v9, 0, 0);
          *(_QWORD *)(v6 + 1008) = 0LL;
        }
      }
      else if ( (v8 & 0x80000) != 0 )
      {
        *(_DWORD *)(v6 + 224) &= ~0x80000u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 232));
      v6 = v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(25LL, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, v10);
}
