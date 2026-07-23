/*
 * XREFs of TppCancelWait @ 0x18000FF54
 * Callers:
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x180012C80 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180071E50 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A12F0 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, _RTL_SRWLOCK *a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  char v8; // si
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  char v14; // al

  v4 = a3 & 2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), v4 != 0);
    if ( v10 )
    {
      if ( v10 != 259 && v10 != -1073741536 )
        TppRaiseInvalidParameter(v12, v11);
      v14 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v14 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v14 | 4;
        TppBarrierAdjust(a1 + 56, 1LL, 0LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      v13 = TppCancelTimer(a1, a2, 1);
      *a4 = -1;
      if ( v13 )
        *a4 = -2;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL, 0LL);
        *(_BYTE *)(a1 + 464) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 464) &= 0xFCu;
  return v8;
}
