/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C0036950 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C00388D0 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D65E0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00D6658 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00E62E0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C011020C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     DxgkPinDirectFlipResources @ 0x1C0110740 (DxgkPinDirectFlipResources.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0110C34 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0147690 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C019F64C (-Initialize@DripsBlockerInfoList@@QEAAJXZ.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C01BD5B0 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C01D3F68 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     DxgkCheckDisplayState @ 0x1C01EB330 (DxgkCheckDisplayState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
