/*
 * XREFs of ?xxxInertiaPTPTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01AF030
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     zzzPostInertiaMessage @ 0x1C020AA48 (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaPTPTimerProc(struct tagWND *a1)
{
  struct DEVICEINFO *v1; // rax
  struct CPTPProcessor *Processor; // rax
  __int64 v3; // [rsp+D0h] [rbp-18h]

  v1 = (struct DEVICEINFO *)HMValidateHandleNoSecure((unsigned __int64)ghdevTouchpad, 19);
  Processor = CPTPProcessorFactory::GetProcessor(v1);
  if ( Processor )
  {
    v3 = *((_QWORD *)Processor + 65);
    EtwTraceTouchpadStopInertiaQueued();
    if ( (v3 & 1) != 0 )
      zzzPostInertiaMessage(0x23Bu);
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
