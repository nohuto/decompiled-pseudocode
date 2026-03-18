/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x18006B768
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x18005C81C (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  int v1; // edi
  __int64 i; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD *v6; // r14
  COverlayContext *v7; // rcx
  int updated; // eax
  bool v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 38LL) )
    {
      v5 = 0;
      v6 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      v7 = (COverlayContext *)v6[97];
      if ( v7 )
      {
        v10 = 0;
        updated = COverlayContext::UpdateMPOCaps(v7, &v10);
        v5 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x245u);
        }
        else if ( v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v6 + 200LL))(v6);
        }
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A9u);
      }
      if ( !v1 || v1 >= 0 && v5 < 0 )
        v1 = v5;
    }
  }
  return (unsigned int)v1;
}
