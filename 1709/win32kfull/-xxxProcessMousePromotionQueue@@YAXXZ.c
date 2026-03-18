/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01E1B50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00F8720 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01E1D98 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01E1F7C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010F654 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01E101C (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01E20A8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // esi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // cl
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  if ( qword_1C0327730 || !qword_1C03276B0 )
    return;
  dword_1C0327738 &= ~1u;
  qword_1C0327730 = gptiCurrent;
  for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0);
        ;
        i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0) )
  {
    v19 = (__int64)i;
    if ( !i )
      break;
    if ( (gdwMitConfig & 1) != 0 )
    {
      if ( (unsigned int)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL)) )
      {
LABEL_19:
        v10 = 1;
        goto LABEL_13;
      }
    }
    else if ( gspwndMouseOwner )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gspwndMouseOwner + 16LL) + 400LL) + 832LL);
      v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v7 <= (unsigned int)v6 )
        {
          if ( (_DWORD)v7 != (_DWORD)v6 )
            goto LABEL_19;
          v8 = HIDWORD(v7);
          v9 = HIDWORD(v6);
          if ( (_DWORD)v8 != (_DWORD)v9 && (_DWORD)v8 != -1 && (_DWORD)v9 != -1 )
            goto LABEL_19;
        }
      }
    }
    v10 = 0;
LABEL_13:
    if ( glDitMouseHandling || (*(_DWORD *)(v19 + 44) & 0x20) != 0 && v10 )
    {
      v11 = 1;
      v0 = 1;
    }
    else
    {
      v11 = 0;
    }
    PushW32ThreadLock(v19, v21, (__int64)SpbApcRundown, v5);
    if ( gdwInAtomicOperation )
    {
      v12 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation);
    xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v19, v11);
    EnterCrit(0LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
    *(_QWORD *)(ThreadWin32Thread + 16) = v21[0];
    Win32FreePool(v19, v17, v18);
  }
  if ( glDitMouseHandling )
  {
    if ( !(unsigned int)IsDwmInputThread(v3, v2, v4, v5) )
    {
      xxxWaitForDITMouseInjectionFlush();
      goto LABEL_34;
    }
LABEL_33:
    UserSessionSwitchLeaveCrit(v3, v20);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
  }
  else if ( !v0 )
  {
    v20 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v3 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    goto LABEL_33;
  }
LABEL_34:
  qword_1C0327730 = 0LL;
}
