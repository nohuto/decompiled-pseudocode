/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01854F4
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C0175968 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall DXGDEVICE::CallCheckMultiPlaneOverlaySupport1DDI(
        unsigned __int64 this,
        unsigned __int64 a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **p_SrcRect,
        DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *PoolWithTag,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v6; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v7; // r14
  DXGDEVICE *v8; // r15
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  signed __int64 v13; // r14
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v20; // [rsp+20h] [rbp-E0h] BYREF
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+180h] [rbp+80h]

  v6 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PoolWithTag;
  v7 = p_SrcRect;
  v21 = 0LL;
  v8 = (DXGDEVICE *)this;
  v23 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 3 )
  {
    PoolWithTag = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v22;
    v21 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v22;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a2;
    this = (unsigned int)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x68 )
    {
LABEL_7:
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, p_SrcRect, PoolWithTag);
      v10[3] = v9;
      v11 = -1073741801;
      v10[4] = -1073741801LL;
      v10[5] = PsGetCurrentProcess(v12);
      WdLogEvent5_WdWarning(v10);
      goto LABEL_23;
    }
    PoolWithTag = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)ExAllocatePoolWithTag(
                                                                   PagedPool,
                                                                   104LL * (unsigned int)v9,
                                                                   0x4B677844u);
    v21 = PoolWithTag;
  }
  v23 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 104 * v9);
  PoolWithTag = v21;
  if ( !v21 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_SrcRect = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)&v21->PlaneAttributes.SrcRect;
    v13 = (char *)v7 - (char *)v6;
    v14 = v9;
    do
    {
      v15 = *(__int64 *)((char *)v6 + v13);
      *(p_SrcRect - 2) = *v6;
      *((_DWORD *)p_SrcRect - 2) = *(_DWORD *)(v15 + 16);
      *(_OWORD *)p_SrcRect = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 4LL);
      *((_OWORD *)p_SrcRect + 1) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 20LL);
      *((_OWORD *)p_SrcRect + 2) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 36LL);
      *((_DWORD *)p_SrcRect + 12) = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 52LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL);
      if ( v16 == 6 || v16 == 8 )
        *((_DWORD *)p_SrcRect + 15) |= 1u;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL) - 8) <= 1 )
        *((_DWORD *)p_SrcRect + 15) |= 2u;
      *((_DWORD *)p_SrcRect - 1) ^= (*((_DWORD *)p_SrcRect - 1) ^ **(_DWORD **)(v15 + 24)) & 1;
      *((_DWORD *)p_SrcRect - 1) ^= (*((_DWORD *)p_SrcRect - 1) ^ **(_DWORD **)(v15 + 24)) & 2;
      *((_DWORD *)p_SrcRect + 13) ^= (*((_DWORD *)p_SrcRect + 13) ^ *(_DWORD *)(*(_QWORD *)(v15 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)p_SrcRect + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)p_SrcRect + 20) = 2;
      }
      ++v6;
      p_SrcRect += 13;
      --v14;
    }
    while ( v14 );
  }
  v20.PlaneCount = v9;
  *(_QWORD *)&v20.Supported = 0LL;
  v17 = *((_QWORD *)v8 + 225);
  v20.pPlanes = PoolWithTag;
  v18 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(*(ADAPTER_DISPLAY **)(v17 + 2280), &v20, (__int64)p_SrcRect);
  if ( v18 >= 0 )
    *a5 = v20.Supported;
  v11 = v18;
LABEL_23:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v21);
  return v11;
}
