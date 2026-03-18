/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01B7DCC
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00D3238 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  ADAPTER_DISPLAY **v11; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  bool v13; // zf
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax

  v4 = a3;
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL),
         *((const struct DXGDEVICE **)this + 2),
         a3) )
  {
    v11 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)this + 2) + 1800LL);
    if ( v11 )
      IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v11, (unsigned int)v4, v7, v8);
    else
      IsVSyncAvailable = 1;
    v13 = IsVSyncAvailable == 0;
    v14 = *((_QWORD *)this + 2);
    if ( v13 )
    {
      if ( *(_DWORD *)(v14 + 328) == 1 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
        v15[3] = -1071775738LL;
        v15[4] = this;
        v15[5] = v4;
        WdLogEvent5_WdEvent(v15);
        return 3223191558LL;
      }
      else
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
        v16[3] = 0LL;
        v16[4] = this;
        v16[5] = v4;
        WdLogEvent5_WdEvent(v16);
        return 3223192376LL;
      }
    }
    else if ( *(_DWORD *)(v14 + 328) != 1 || (*(_DWORD *)(v14 + 4 * v4 + 1032) & 0x100) != 0 )
    {
      return 0LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
      v17[3] = -1071775739LL;
      v17[4] = this;
      v17[5] = v4;
      WdLogEvent5_WdEvent(v17);
      return 3223191557LL;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    v9[3] = -1071775744LL;
    v9[4] = this;
    v9[5] = v4;
    WdLogEvent5_WdWarning(v9);
    return 3223191552LL;
  }
}
