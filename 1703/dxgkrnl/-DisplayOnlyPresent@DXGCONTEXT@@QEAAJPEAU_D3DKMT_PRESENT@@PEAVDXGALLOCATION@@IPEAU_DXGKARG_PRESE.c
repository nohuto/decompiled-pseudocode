/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B81A8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01724E0 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        DXGDEVICE **this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  unsigned int v11; // edx
  _QWORD *v12; // rax
  DXGDEVICE *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rax
  D3DDDIFORMAT Format; // eax
  __int64 v22; // r8
  int v23; // r15d
  DXGDEVICE *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r9
  _QWORD *v27; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v28; // [rsp+40h] [rbp-79h] BYREF
  __int128 v29; // [rsp+70h] [rbp-49h]
  struct tagRECT v30; // [rsp+A8h] [rbp-11h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  *(_QWORD *)&v30.left = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  if ( v6 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
      v12[3] = -1071775482LL;
      v12[4] = this;
      v12[5] = a3;
      WdLogEvent5_WdEvent(v12);
      return 3223191814LL;
    }
    v29 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(DXGADAPTER ***)(*((_QWORD *)this[2] + 225) + 2280LL),
                       (v11 >> 6) & 0xF);
    memset(&v28, 0, sizeof(v28));
    v28.Flags.Value |= 1u;
    v28.Rotation = -1;
    v14 = this[2];
    v28.hAllocation = *(HANDLE *)(*((_QWORD *)a3 + 6) + 16LL);
    v16 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2288LL),
            &v28,
            v15);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v20[3] = v19;
      v20[4] = this;
      v20[5] = *((unsigned int *)a3 + 4);
      v20[6] = a3;
      v20[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v20);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v28.Width != (_QWORD)v29 )
      goto LABEL_19;
    v18 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v28.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v28.Format;
    if ( DWORD2(v29) != 21 )
      v18 = DWORD2(v29);
    if ( Format != (_DWORD)v18 )
    {
LABEL_19:
      v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
      v27[3] = -1071775482LL;
      v27[4] = this;
      v27[5] = a3;
      WdLogEvent5_WdEvent(v27);
      return 3223191557LL;
    }
    v30.right = v28.Width;
    v30.bottom = v28.Height;
  }
  v23 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 225) + 2280LL),
          (struct DXGCONTEXT *)this,
          a4,
          a2,
          a5,
          a6,
          &v30);
  if ( v23 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v24 = this[2];
    v25 = *((_QWORD *)v24 + 225);
    v26 = *((_QWORD *)v24 + 2);
    if ( v25 == *(_QWORD *)(v26 + 16) )
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v25 + 2280), a4, v22, v26);
    DXGDEVICE::SetDisplayedPrimary(this[2], a4, a3, 0, 1u);
  }
  return (unsigned int)v23;
}
