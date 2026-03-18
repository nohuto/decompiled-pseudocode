/*
 * XREFs of ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B23B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaPTPTimerProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DEVICEINFO *v4; // rax
  struct CPTPProcessor *Processor; // rax
  __int64 v6; // [rsp+D0h] [rbp-18h]

  LOBYTE(a2) = 19;
  v4 = (struct DEVICEINFO *)HMValidateHandleNoSecure((unsigned __int64)ghdevTouchpad, a2, a3, a4);
  Processor = CPTPProcessorFactory::GetProcessor(v4);
  if ( Processor )
  {
    v6 = *((_QWORD *)Processor + 68);
    EtwTraceTouchpadStopInertiaQueued();
    if ( (v6 & 1) != 0 )
      zzzPostInertiaMessage(0x23Bu, 1);
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
