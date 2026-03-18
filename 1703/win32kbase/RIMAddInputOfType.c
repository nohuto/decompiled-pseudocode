/*
 * XREFs of RIMAddInputOfType @ 0x1C01004A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  char *v5; // rbx
  int v6; // edx
  int v7; // eax
  int v8; // r9d
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    25,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v5[73] || v5[75] )
    {
      v4 = -1073741637;
      v8 = 28;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      v7 = *((_DWORD *)v5 + 19);
      if ( (v7 & v2) == 0 )
      {
        *((_DWORD *)v5 + 19) = v2 | v7;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        *((_QWORD *)v5 + 13) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v8 = 26;
    }
    else
    {
      v4 = -1073741811;
      v8 = 27;
    }
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      v8,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Du,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v10);
  return (unsigned int)v4;
}
