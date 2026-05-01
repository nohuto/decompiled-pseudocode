/*
 * XREFs of ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802F5038
 * Callers:
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x1802DA4B8 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802EE3D0 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F2880 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutItemInternal@@UITaskbarLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_18020E460.c)
 *     ??0CTempAppVisualArray@@QEAA@XZ @ 0x1802F4BB0 (--0CTempAppVisualArray@@QEAA@XZ.c)
 */

__int64 __fastcall CTempAppVisualArray::CreateInstance(const struct _GUID *a1, CTempAppVisualArray **a2)
{
  CTempAppVisualArray *v3; // rdi
  CTempAppVisualArray *v4; // rax
  volatile int *v5; // rdx
  CTempAppVisualArray *v6; // rsi
  CTempAppVisualArray *v7; // rbx
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CTempAppVisualArray *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x30uLL);
    v3 = CTempAppVisualArray::CTempAppVisualArray(v7);
    v7 = 0LL;
    v6 = v3;
  }
  if ( v7 )
    operator delete(v7);
  v8 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v6;
      (*(void (__fastcall **)(CTempAppVisualArray *))(*(_QWORD *)v6 + 8LL))(v6);
      v8 = 0;
    }
    else if ( InlineIsEqualGUID(v9, v9) || InlineIsEqualGUID(v10, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    {
      *a2 = v6;
      v8 = 0;
      (*(void (__fastcall **)(CTempAppVisualArray *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v8 = -2147467262;
    }
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      (__int64)v3,
      v5);
  return v8;
}
