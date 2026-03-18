/*
 * XREFs of ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x1800BFB80
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?OnChannelAttached@CCompositionCapabilities@@MEAAJXZ @ 0x1800BFB70 (-OnChannelAttached@CCompositionCapabilities@@MEAAJXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180084C5C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CCompositionCapabilities::OnCapabilitiesChanged(CCompositionCapabilities *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // edx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( CNotificationResource::ShouldNotify(this) )
  {
    v2 = *(_QWORD *)(v1 + 48);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 1288LL) + 56LL);
    if ( v2 )
      v4 = *(_DWORD *)(v2 + 68);
    else
      v4 = 0;
    v5[0] = v4;
    v5[1] = *(unsigned int *)(v1 + 56);
    CoreUICallSend(v3, v5, 2LL, 2LL, 0, &unk_1801F0519);
  }
}
