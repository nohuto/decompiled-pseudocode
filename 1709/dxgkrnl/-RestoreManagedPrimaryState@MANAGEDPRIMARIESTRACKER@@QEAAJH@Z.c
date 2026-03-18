/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0093648 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbp
  const struct DXGDEVICE *v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD *v19; // rax
  int updated; // eax
  __int64 v21; // rcx
  __int64 v22; // r14

  if ( !*(_QWORD *)this )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 107LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v4 & 0xFFFFFFFD;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v14 + 24) = 125LL;
        WdLogEvent5_WdAssertion(v14);
      }
      v6 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v7 = (const struct DXGDEVICE *)*((_QWORD *)this + v6 + 3);
          if ( !v7 )
            goto LABEL_9;
          v9 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v7 + 209) != v9
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v7 + 2) + 16LL)) )
          {
            v15 = WdLogNewEntry5_WdAssertion(v9);
            *(_QWORD *)(v15 + 24) = 134LL;
            WdLogEvent5_WdAssertion(v15);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v7, v6) )
            goto LABEL_9;
          if ( !*((_BYTE *)this + v6 + 408) )
            goto LABEL_9;
          v10 = *((_QWORD *)this + v6 + 19);
          if ( !v10 )
            goto LABEL_9;
          v11 = *(unsigned int *)(*(_QWORD *)(v10 + 48) + 4LL);
          if ( (v11 & 1) == 0 )
            goto LABEL_9;
          if ( (*((_DWORD *)this + v6 + 86) & 0x300) != 0x300 )
          {
            v12 = WdLogNewEntry5_WdAssertion(v11);
            *(_QWORD *)(v12 + 24) = 156LL;
            WdLogEvent5_WdAssertion(v12);
          }
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v6)
            && (*((_DWORD *)v7 + v6 + 258) & 0x300) == 0x300 )
          {
            goto LABEL_9;
          }
          v16 = DXGDEVICE::PinPrimaryAllocations(v7, v6);
          v18 = v16;
          if ( v16 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(PERESOURCE ***)this,
                        (PERESOURCE **)v7,
                        v6,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v6 + 19) + 48LL));
            v22 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                (struct _KTHREAD **)v7,
                v6,
                *((const struct DXGALLOCATION **)this + v6 + 19),
                *((_DWORD *)this + v6 + 70),
                1u);
              *((_DWORD *)v7 + v6 + 258) |= 0x200u;
              goto LABEL_9;
            }
            v19 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v19[3] = v22;
            v19[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v19[5] = (unsigned int)v6;
            v19[6] = *((_QWORD *)this + v6 + 19);
          }
          else
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v19[3] = v18;
            v19[4] = v7;
            v19[5] = (unsigned int)v6;
          }
          WdLogEvent5_WdError(v19);
LABEL_9:
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
