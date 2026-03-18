/*
 * XREFs of ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C004C6B8
 * Callers:
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C004CA90 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 * Callees:
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C00906A0 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 */

void __fastcall IOCPDispatcher::CleanupInputDispatcherObjects(IOCPDispatcher *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 642); i = (unsigned int)(i + 1) )
    IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher *)((char *)this + 32 * i + 8 * (unsigned int)i + 8));
  *((_DWORD *)this + 642) = 0;
}
