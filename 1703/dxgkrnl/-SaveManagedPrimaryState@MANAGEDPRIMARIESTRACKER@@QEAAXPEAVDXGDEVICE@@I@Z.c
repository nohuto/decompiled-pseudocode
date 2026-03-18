/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F5E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct DXGDEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  DXGDEVICE *VidPnSourceOwner; // rax
  bool v14; // r8
  DXGDEVICE *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  if ( !*(_QWORD *)this )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 62LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v22 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v11 = 0LL;
  v12 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v12;
  if ( (v12 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v11 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v11) - 1 <= 1 )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v11);
        v15 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&v4, v11) )
        {
          *((_QWORD *)this + v11 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v11 + 86) ^= (*((_DWORD *)this + v11 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                  + v11
                                                                                                  + 258)) << 8)) & 0x100;
          *((_DWORD *)this + v11 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v11 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v11 + 258) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v11 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v11, v14);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
            (struct _KTHREAD **)v15 + 29,
            v16,
            v17);
          v18 = *((_DWORD *)v15 + v11 + 242);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
          *((_DWORD *)this + v11 + 70) = v18;
          *((_BYTE *)this + v11 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                           *(ADAPTER_DISPLAY **)this,
                                           (unsigned int)v11,
                                           v19,
                                           v20);
        }
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < *((_DWORD *)this + 4) >> 2 );
  }
}
