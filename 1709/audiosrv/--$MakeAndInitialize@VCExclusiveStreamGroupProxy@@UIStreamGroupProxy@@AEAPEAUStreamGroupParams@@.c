/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180091C60
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000CF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1800922EC (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180094BF4 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
        CExclusiveStreamGroupProxy **a1,
        const struct StreamGroupParams **a2,
        struct STREAM_GROUP_DESCRIPTOR **a3,
        unsigned int *a4)
{
  CExclusiveStreamGroupProxy *v8; // rax
  int v9; // ebx
  CExclusiveStreamGroupProxy *v10; // rdi
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  CExclusiveStreamGroupProxy *v13; // r8

  *a1 = 0LL;
  v8 = (CExclusiveStreamGroupProxy *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(v8);
    v9 = CExclusiveStreamGroupProxy::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_97c34d55_b958_4540_b775_ed5f52a6e7a1, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v10;
        (*(void (__fastcall **)(CExclusiveStreamGroupProxy *))(*(_QWORD *)v10 + 8LL))(v10);
        v9 = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v12, v12) )
        {
          *a1 = v13;
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
        }
        if ( v9 >= 0 )
          (*(void (__fastcall **)(CExclusiveStreamGroupProxy *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release((__int64)v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
