/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0145C94
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  DXGADAPTER *v17; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax

  v5 = a4;
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
         *((const struct DXGDEVICE **)this + 2),
         a4) )
  {
    v17 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1688LL);
    if ( v17 )
      IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v17, v5);
    else
      IsVSyncAvailable = 1;
    if ( IsVSyncAvailable )
      goto LABEL_18;
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v8);
      v19[3] = -1071775738LL;
      v19[4] = this;
      v19[5] = v5;
      WdLogEvent5_WdEvent(v19);
      return 3223191558LL;
    }
    if ( !a2 )
    {
LABEL_18:
      if ( a3 )
        return 0LL;
      v21 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v21 + 328) != 1 || (*(_DWORD *)(v21 + 4 * v5 + 1048) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v8);
        v22[3] = -1071775739LL;
        v22[4] = this;
        v22[5] = v5;
        WdLogEvent5_WdEvent(v22);
        return 3223191557LL;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v8);
      v20[3] = 0LL;
      v20[4] = this;
      v20[5] = v5;
      WdLogEvent5_WdEvent(v20);
      return 3223192376LL;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v11[3] = -1071775744LL;
    v11[4] = this;
    v11[5] = v5;
    WdLogEvent5_WdWarning(v11);
    v12 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v12 + 40) + 322LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v12 + 1688) + 2456LL),
                           v5) == 1 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL) + 112LL)
                        + 3760LL * (unsigned int)v5
                        + 712);
        if ( *(_BYTE *)(v13 + 322) )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v14[3] = *((_QWORD *)this + 2);
          v14[4] = v5;
          v14[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                     v5);
          WdLogEvent5_WdError(v14);
          LOBYTE(v15) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1746LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v15) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
        }
      }
    }
    return 3223191552LL;
  }
}
