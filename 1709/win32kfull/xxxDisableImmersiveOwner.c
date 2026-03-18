/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01D2E5C
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01E3CA0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v3 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL, v2);
  }
  else
  {
    v3 = 1;
    SetOrClrWF(1, a1, 0xFA01u, 0);
  }
  return v3;
}
