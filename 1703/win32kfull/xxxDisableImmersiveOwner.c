/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01D2B6C
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01D7490 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL);
  }
  else
  {
    v2 = 1;
    SetOrClrWF(1, a1, 0xFA01u, 0);
  }
  return v2;
}
