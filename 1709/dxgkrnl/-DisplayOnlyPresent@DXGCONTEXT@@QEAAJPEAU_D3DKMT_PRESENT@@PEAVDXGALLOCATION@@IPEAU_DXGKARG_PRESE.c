/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D019C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C00AC1A8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        struct _KTHREAD ***this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        __int64 a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  unsigned int v7; // esi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  struct _KTHREAD **v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 Height; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  _QWORD *v21; // rax
  D3DDDIFORMAT Format; // eax
  __int64 v23; // r8
  int v24; // r15d
  struct _KTHREAD **v25; // r9
  struct _KTHREAD *v26; // rcx
  _QWORD *v27; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v28; // [rsp+40h] [rbp-79h] BYREF
  __int128 v29; // [rsp+70h] [rbp-49h]
  struct tagRECT v30; // [rsp+A8h] [rbp-11h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  v7 = a4;
  *(_QWORD *)&v30.left = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  if ( v6 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v11, a3, a4);
      v12[3] = -1071775482LL;
      v12[4] = this;
      v12[5] = a3;
      WdLogEvent5_WdEvent(v12);
      return 3223191814LL;
    }
    v29 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *((DXGADAPTER ***)this[2][209] + 288),
                       ((unsigned int)v11 >> 6) & 0xF);
    memset(&v28, 0, sizeof(v28));
    v28.Flags.Value |= 1u;
    v28.Rotation = -1;
    v14 = this[2];
    v28.hAllocation = *(HANDLE *)(*((_QWORD *)a3 + 6) + 16LL);
    v16 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v14[2] + 2) + 2312LL), &v28, v15);
    v20 = v16;
    if ( v16 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v21[3] = v20;
      v21[4] = this;
      v21[5] = *((unsigned int *)a3 + 4);
      v21[6] = a3;
      v21[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v21);
      return 3221225485LL;
    }
    if ( v28.Width != (_DWORD)v29 )
      goto LABEL_20;
    Height = v28.Height;
    if ( v28.Height != DWORD1(v29) )
      goto LABEL_20;
    v17 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v28.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v28.Format;
    if ( DWORD2(v29) != 21 )
      v17 = DWORD2(v29);
    if ( Format != (_DWORD)v17 )
    {
LABEL_20:
      v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v28.Width, Height, v19);
      v27[3] = -1071775482LL;
      v27[4] = this;
      v27[5] = a3;
      WdLogEvent5_WdEvent(v27);
      return 3223191557LL;
    }
    v30.right = v28.Width;
    v30.bottom = v28.Height;
  }
  v24 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *((ADAPTER_DISPLAY **)this[2][209] + 288),
          (struct DXGCONTEXT *)this,
          v7,
          a2,
          a5,
          a6,
          &v30);
  if ( v24 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v25 = this[2];
    v26 = v25[209];
    if ( v26 == *((struct _KTHREAD **)v25[2] + 2) )
      ADAPTER_DISPLAY::DisableOverlayPlanes(*((ADAPTER_DISPLAY **)v26 + 288), v7, v23);
    DXGDEVICE::SetDisplayedPrimary(this[2], v7, a3, 0, 1u);
  }
  return (unsigned int)v24;
}
