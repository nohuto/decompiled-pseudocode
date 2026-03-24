/*
 * XREFs of KbdInitializeDataQueue @ 0x1C0002400
 * Callers:
 *     KeyboardClassFlush @ 0x1C0004430 (KeyboardClassFlush.c)
 *     KbdCreateClassObject @ 0x1C000CC80 (KbdCreateClassObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00053A0 (WPP_RECORDER_SF_.c)
 */

void __fastcall KbdInitializeDataQueue(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 160));
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 120) = v4;
  *(_DWORD *)(a1 + 84) = 0;
  *(_BYTE *)(a1 + 361) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 160), v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 3LL);
  }
}
