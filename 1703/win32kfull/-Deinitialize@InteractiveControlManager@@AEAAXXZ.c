/*
 * XREFs of ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C010884C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021B3D4 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

void __fastcall InteractiveControlManager::Deinitialize(InteractiveControlManager *this)
{
  struct InteractiveControlDevice **v2; // rbx
  __int64 v3; // rsi
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct InteractiveControlDevice **)((char *)this + 40);
  v3 = 5LL;
  do
  {
    if ( *v2 )
      InteractiveControlManager::RemoveDevice(this, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (unsigned __int64)this + 16;
  HMAssignmentLock(&v4);
  v4 = (unsigned __int64)this;
  HMAssignmentLock(&v4);
}
