/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18005F4F8
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x18002E15C (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  int updated; // eax
  int v6; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 76LL) )
    {
      updated = CHwndRenderTarget::UpdateMPOCaps(*(CHwndRenderTarget **)(*((_QWORD *)this + 3) + 8 * i), 0);
      v6 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3AEu);
      if ( !v1 || v1 >= 0 && v6 < 0 )
        v1 = v6;
    }
  }
  return (unsigned int)v1;
}
