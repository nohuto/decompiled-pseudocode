/*
 * XREFs of RIMResetPointerDevices @ 0x1C0093AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(char *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 i; // rdi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x93u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 75) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x94u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 87));
      for ( i = v3[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts((__int64)v3, *(_QWORD *)(i + 472), 0LL);
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
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x95u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v2);
  return (unsigned int)v2;
}
