/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E8314
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F818 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v10; // rbx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( !*(_QWORD *)this )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 61LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 64LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = 0LL;
  v8 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v8;
  if ( (v8 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v7 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v7) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v7);
        v10 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v7) )
        {
          *((_QWORD *)this + v7 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v7 + 86) ^= (*((_DWORD *)this + v7 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                + v7
                                                                                                + 258)) << 8)) & 0x100;
          *((_DWORD *)this + v7 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v7 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v7 + 258) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v7 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v7);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, v10 + 29);
          v11 = *((_DWORD *)v10 + v7 + 242);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
          *((_DWORD *)this + v7 + 70) = v11;
          *((_BYTE *)this + v7 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v7);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)this + 4) >> 2 );
  }
}
