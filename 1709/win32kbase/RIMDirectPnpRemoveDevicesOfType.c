/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C000AB20
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C001A5A0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C000BEE8 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 v4; // r8
  int v5; // edx
  int v6; // ebp
  _QWORD *v7; // rdi
  int v8; // edx
  __int64 i; // rbx
  int v10; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    99,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v4) = 1;
  v6 = RawInputManagerObjectResolveHandle(a1, 3LL, v4, &Object);
  if ( v6 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v7 + 73) )
    {
      v6 = -1073741637;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        18,
        100,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      for ( i = v7[69]; i; i = *(_QWORD *)(i + 40) )
      {
        v10 = *(_DWORD *)(i + 184);
        if ( (v10 & 0x1000) == 0 && (v10 & 0x200) == 0 && *(unsigned __int8 *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 184) = v10 | 8;
          rimOnPnpRemoveComplete(v7, i);
        }
      }
    }
    v7[13] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  LOBYTE(v5) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    19,
    101,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v6);
  return (unsigned int)v6;
}
