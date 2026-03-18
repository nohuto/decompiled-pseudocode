/*
 * XREFs of RIMResetPointerDevices @ 0x1C0103490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 i; // rdi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    142,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 75) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        18,
        143,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 87));
      for ( i = v3[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(v3, *(_QWORD *)(i + 472), 0LL);
      }
      v3[88] = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 87, 0LL);
      KeLeaveCriticalRegion();
    }
    v3[13] = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x90u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v2);
  return (unsigned int)v2;
}
