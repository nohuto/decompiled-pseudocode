/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C0008900
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     rimDestroyDeadzone @ 0x1C0007424 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  void *v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a2 + 456);
  v4 = *(_QWORD *)(a2 + 472);
  v6 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v2 + 104));
  *(_QWORD *)(v4 + 1504) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 104));
  }
  else
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      18,
      35,
      (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids,
      23);
  }
  if ( *(_DWORD *)(v4 + 24) == 5 )
  {
    v9 = *(_QWORD *)(a1 + 968);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(a1 + 968) = 0LL;
    }
    rimDestroyDeadzone();
  }
  result = RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 472) = 0LL;
  return result;
}
