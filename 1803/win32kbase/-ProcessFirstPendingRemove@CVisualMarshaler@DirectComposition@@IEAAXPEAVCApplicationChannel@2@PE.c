/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C00187A8
 * Callers:
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000D1A4 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018FA0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = *(_QWORD *)(v4 + 192);
  *(_QWORD *)(v4 + 192) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    *(_QWORD *)(a3 + 4) = 0LL;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 1) = 387;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 24);
  }
  *(_DWORD *)(v4 + 16) &= ~8u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
