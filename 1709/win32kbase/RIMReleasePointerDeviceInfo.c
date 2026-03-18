/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C000A6B4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimDestroyDeadzone @ 0x1C0096F70 (rimDestroyDeadzone.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  void *v6; // rax
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a2 + 456);
  v4 = *(_QWORD *)(a2 + 472);
  v6 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v2 + 104));
  *(_QWORD *)(v4 + 840) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 104));
  }
  else
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      18,
      33,
      (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
      23);
  }
  if ( *(_DWORD *)(v4 + 24) == 5 )
  {
    v11 = *(_QWORD *)(a1 + 968);
    if ( v11 )
    {
      Win32FreePool(v11, v8, v9);
      *(_QWORD *)(a1 + 968) = 0LL;
    }
    rimDestroyDeadzone();
  }
  result = RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 472) = 0LL;
  return result;
}
