/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0050100
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C004ED10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C005030C (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ApiSetIsRemoteConnection @ 0x1C0051DB0 (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     rimFakePnpRemoveComplete @ 0x1C0110934 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // ebp
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    105,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  LOBYTE(v2) = 1;
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        18,
        106,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v7 = *(_DWORD *)(i + 184);
          if ( (v7 & 0x1000) == 0
            && (v7 & 1) == 0
            && (v7 & 2) == 0
            && (v7 & 4) == 0
            && (v7 & 8) == 0
            && (v7 & 0x200) == 0
            && (v7 & 0x4000) == 0 )
          {
            v8 = *(_QWORD *)(i + 464);
            if ( v8 )
            {
              if ( (unsigned int)RIMHidTLCActive(v8) )
              {
                if ( !*(_QWORD *)(i + 224) )
                {
                  *(_DWORD *)(i + 184) = v9 | 1;
                  rimOnPnpArrived(v5, i, -1LL);
                  if ( *(_QWORD *)(i + 224) )
                    *(_DWORD *)(i + 200) |= 0x20u;
                }
              }
              else if ( *(_QWORD *)(i + 224) )
              {
                v10 = *(_DWORD *)(i + 200);
                if ( (v10 & 0x80u) == 0 && (v10 & 0x100) == 0 && (v10 & 0x200) == 0 )
                  rimFakePnpRemoveComplete(v5, i);
              }
            }
          }
        }
      }
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    19,
    107,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v4);
  return (unsigned int)v4;
}
