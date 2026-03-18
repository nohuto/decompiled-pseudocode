/*
 * XREFs of ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000D060
 * Callers:
 *     ?ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0001240 (-ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000C830 (-ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0010490 (-ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CCursorVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014C030 (-ReleaseAllReferences@CCursorVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0153E80 (-ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01574F0 (-ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0157540 (-ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicatio.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 15) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 17) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 26);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 26) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 18) = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 25);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 25) = 0LL;
  }
  v11 = *(_QWORD *)this;
  v12 = 0;
  (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, char *))(v11 + 264))(
    this,
    a2,
    &v12);
}
