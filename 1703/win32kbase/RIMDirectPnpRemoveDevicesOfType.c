/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C0094120
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C004FB50 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x1C0094A7C (rimOnPnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(char *a1, int a2)
{
  int v2; // r14d
  int v4; // ebp
  _QWORD *v5; // rdi
  int v6; // edx
  __int64 i; // rbx
  int v8; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    99,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        18,
        100,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        v8 = *(_DWORD *)(i + 184);
        if ( (v8 & 0x1000) == 0 && (v8 & 0x200) == 0 && *(unsigned __int8 *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 184) = v8 | 8;
          rimOnPnpRemoveComplete(v5, i);
        }
      }
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x65u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v4);
  return (unsigned int)v4;
}
