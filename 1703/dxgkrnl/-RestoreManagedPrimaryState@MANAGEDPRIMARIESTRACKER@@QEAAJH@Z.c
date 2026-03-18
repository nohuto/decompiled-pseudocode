/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C07C0 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  const struct DXGDEVICE *v12; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  _QWORD *v25; // rax
  int updated; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14

  v4 = a2;
  if ( !*(_QWORD *)this )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v6 & 0xFFFFFFFD;
    if ( v4 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        *(_QWORD *)(v16 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v16);
      }
      v11 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v12 = (const struct DXGDEVICE *)*((_QWORD *)this + v11 + 3);
          if ( !v12 )
            goto LABEL_9;
          v14 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v12 + 225) != v14
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v12 + 2) + 16LL)) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v14, v7, v9, v10);
            *(_QWORD *)(v17 + 24) = 135LL;
            WdLogEvent5_WdAssertion(v17);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v12, v11) )
            goto LABEL_9;
          if ( !*((_BYTE *)this + v11 + 408) )
            goto LABEL_9;
          v18 = *((_QWORD *)this + v11 + 19);
          if ( !v18 )
            goto LABEL_9;
          v19 = *(unsigned int *)(*(_QWORD *)(v18 + 48) + 4LL);
          if ( (v19 & 1) == 0 )
            goto LABEL_9;
          if ( (*((_DWORD *)this + v11 + 86) & 0x300) != 0x300 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19, v7, v9, v10);
            *(_QWORD *)(v20 + 24) = 157LL;
            WdLogEvent5_WdAssertion(v20);
          }
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, (unsigned int)v11, v9, v10)
            && (*((_DWORD *)v12 + v11 + 258) & 0x300) == 0x300 )
          {
            goto LABEL_9;
          }
          v21 = DXGDEVICE::PinPrimaryAllocations(v12, v11);
          v24 = v21;
          if ( v21 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)this,
                        v12,
                        v11,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v11 + 19) + 48LL));
            v29 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                v12,
                v11,
                *((const struct DXGALLOCATION **)this + v11 + 19),
                *((_DWORD *)this + v11 + 70),
                1u);
              *((_DWORD *)v12 + v11 + 258) |= 0x200u;
              goto LABEL_9;
            }
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
            v25[3] = v29;
            v25[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v25[5] = (unsigned int)v11;
            v25[6] = *((_QWORD *)this + v11 + 19);
          }
          else
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
            v25[3] = v24;
            v25[4] = v12;
            v25[5] = (unsigned int)v11;
          }
          WdLogEvent5_WdError(v25);
LABEL_9:
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
