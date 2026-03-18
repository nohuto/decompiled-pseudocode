/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C016F2F0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  ADAPTER_DISPLAY **v18; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax

  v5 = a4;
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL),
         *((const struct DXGDEVICE **)this + 2),
         a4) )
  {
    v18 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)this + 2) + 1672LL);
    if ( v18 )
      IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v18, v5);
    else
      IsVSyncAvailable = 1;
    if ( IsVSyncAvailable )
      goto LABEL_18;
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v8, v10, v11);
      v20[3] = -1071775738LL;
      v20[4] = this;
      v20[5] = v5;
      WdLogEvent5_WdEvent(v20);
      return 3223191558LL;
    }
    if ( !a2 )
    {
LABEL_18:
      if ( a3 )
        return 0LL;
      v22 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v22 + 328) != 1 || (*(_DWORD *)(v22 + 4 * v5 + 1032) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v8, v10, v11);
        v23[3] = -1071775739LL;
        v23[4] = this;
        v23[5] = v5;
        WdLogEvent5_WdEvent(v23);
        return 3223191557LL;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v8, v10, v11);
      v21[3] = 0LL;
      v21[4] = this;
      v21[5] = v5;
      WdLogEvent5_WdEvent(v21);
      return 3223192376LL;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v12[3] = -1071775744LL;
    v12[4] = this;
    v12[5] = v5;
    WdLogEvent5_WdWarning(v12);
    v13 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v13 + 40) + 306LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v13 + 1672) + 2304LL),
                           v5) == 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL) + 112LL)
                        + 3760LL * (unsigned int)v5
                        + 712);
        if ( *(_BYTE *)(v14 + 306) )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v15[3] = *((_QWORD *)this + 2);
          v15[4] = v5;
          v15[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1672LL) + 2304LL),
                     v5);
          WdLogEvent5_WdError(v15);
          LOBYTE(v16) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1730LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v16) )
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
