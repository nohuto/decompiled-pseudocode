/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0018DA0
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0019610 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C0018FA8 (RIMHidTLCActive.c)
 *     ApiSetIsRemoteConnection @ 0x1C0018FD4 (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     rimFakePnpRemoveComplete @ 0x1C010F3C4 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ebp
  _QWORD *v4; // rdi
  __int64 i; // rbx
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x69u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v2) = 1;
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v4 + 73) || *((_BYTE *)v4 + 75) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v3 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x6Au,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      for ( i = v4[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v6 = *(_DWORD *)(i + 184);
          if ( (v6 & 0x1000) == 0
            && (v6 & 1) == 0
            && (v6 & 2) == 0
            && (v6 & 4) == 0
            && (v6 & 8) == 0
            && (v6 & 0x200) == 0
            && (v6 & 0x4000) == 0 )
          {
            v7 = *(_QWORD *)(i + 464);
            if ( v7 )
            {
              if ( (unsigned int)RIMHidTLCActive(v7) )
              {
                if ( !*(_QWORD *)(i + 224) )
                {
                  *(_DWORD *)(i + 184) = v8 | 1;
                  rimOnPnpArrived(v4, i, (void *)0xFFFFFFFFFFFFFFFFLL);
                  if ( *(_QWORD *)(i + 224) )
                    *(_DWORD *)(i + 200) |= 0x20u;
                }
              }
              else if ( *(_QWORD *)(i + 224) )
              {
                v9 = *(_DWORD *)(i + 200);
                if ( (v9 & 0x80u) == 0 && (v9 & 0x100) == 0 && (v9 & 0x200) == 0 )
                  rimFakePnpRemoveComplete(v4, i);
              }
            }
          }
        }
      }
    }
    v4[13] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x6Bu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v3);
  return (unsigned int)v3;
}
