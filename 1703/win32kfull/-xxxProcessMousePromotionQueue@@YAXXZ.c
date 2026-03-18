/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0008850 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D54CC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01D56A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01D479C (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D57B4 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // esi
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // cl
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  if ( !qword_1C032C4B0 && qword_1C032C430 )
  {
    dword_1C032C4B8 &= ~1u;
    qword_1C032C4B0 = gptiCurrent;
    v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C430);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( (gdwMitConfig & 1) != 0 )
        {
          if ( (unsigned int)HasCapture()
            && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL)) )
          {
LABEL_19:
            v10 = 1;
            goto LABEL_13;
          }
        }
        else if ( gspwndMouseOwner )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gspwndMouseOwner + 16LL) + 376LL) + 824LL);
          v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 376LL) + 824LL);
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
        if ( glDitMouseHandling || (*((_DWORD *)v3 + 11) & 0x20) != 0 && v10 )
        {
          v11 = 1;
          v0 = 1;
        }
        else
        {
          v11 = 0;
        }
        PushW32ThreadLock((__int64)v3, v17, (__int64)SpbApcRundown);
        if ( gdwInAtomicOperation )
        {
          v12 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation, v13, v14);
        xxxSendMousePromotion(v3, v11);
        EnterCrit(0LL, 1LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v17[0];
        Win32FreePool(v3);
        v3 = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C430);
        if ( !v3 )
          break;
        v4 = gptiCurrent;
      }
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned int)IsDwmInputThread(v2, v1, v4, v5) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_34:
        qword_1C032C4B0 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_34;
      v16 = gdwInAtomicOperation;
      if ( gdwInAtomicOperation )
      {
        v2 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v2, v16, v4, v5);
    ProcessQueuedMouseEvents();
    EnterCrit(0LL, 1LL);
    goto LABEL_34;
  }
}
