/*
 * XREFs of ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x180176338
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?OnChannelAttached@CCompositionCapabilities@@MEAAJXZ @ 0x1801763B0 (-OnChannelAttached@CCompositionCapabilities@@MEAAJXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CCompositionCapabilities::OnCapabilitiesChanged(CCompositionCapabilities *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // edx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
  {
    v2 = *(_QWORD *)(v1 + 48);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 1352LL) + 56LL);
    if ( v2 )
      v4 = *(_DWORD *)(v2 + 60);
    else
      v4 = 0;
    v5[0] = v4;
    v5[1] = *(unsigned int *)(v1 + 56);
    CoreUICallSend(v3, v5, 2LL, 2LL, 0, &unk_1801D53D9);
  }
}
