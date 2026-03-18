/*
 * XREFs of RIMAddInputOfType @ 0x1C01008E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v4; // esi
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x19u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      v7 = 28;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      v6 = v5[19];
      if ( (v6 & a2) == 0 )
      {
        v5[19] = a2 | v6;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        *((_QWORD *)v5 + 13) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v7 = 26;
    }
    else
    {
      v4 = -1073741811;
      v7 = 27;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      v7,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v9 = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Du,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v9);
  return (unsigned int)v4;
}
