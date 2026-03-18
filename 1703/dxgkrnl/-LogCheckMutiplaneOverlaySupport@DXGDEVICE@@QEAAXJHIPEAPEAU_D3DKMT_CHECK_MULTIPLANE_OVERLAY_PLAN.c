/*
 * XREFs of ?LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0188148
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     Template_qqddddddddq @ 0x1C0034FDC (Template_qqddddddddq.c)
 *     Template_qqqddddddddddddqqqqq @ 0x1C00350F8 (Template_qqqddddddddddddqqqqq.c)
 *     Template_qqqqqq @ 0x1C00352EC (Template_qqqqqq.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C01880E4 (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

void __fastcall DXGDEVICE::LogCheckMutiplaneOverlaySupport(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a5,
        void **a6,
        unsigned int a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a8)
{
  int v8; // r15d
  __int64 v9; // rdi
  char v10; // r12
  DXGDEVICE *v11; // r13
  float v12; // xmm2_4
  char v13; // bp
  char v14; // r14
  int v15; // r9d
  char v16; // r10
  float v17; // xmm3_4
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r11
  __int64 v19; // rbx
  float v20; // xmm1_4
  __int64 v22; // rbp
  int *v23; // rcx
  void **v24; // rbx
  __int64 IsYUVAllocation; // r8
  __int64 v26; // r14
  _DWORD *v27; // rdx
  int v28; // [rsp+28h] [rbp-C0h]

  v8 = a3;
  v9 = a4;
  v10 = a2;
  v11 = this;
  if ( bTracingEnabled )
  {
    v12 = FLOAT_1_0;
    v13 = 1;
    v14 = 1;
    v15 = 1;
    v16 = 1;
    v17 = FLOAT_1_0;
    if ( !(_DWORD)v9 )
      goto LABEL_10;
    v18 = a5;
    v19 = (unsigned int)v9;
    do
    {
      this = (DXGDEVICE *)(*v18)->pPlaneAttributes;
      a3 = (unsigned int)(*((_DWORD *)this + 7) - *((_DWORD *)this + 5));
      a2 = (unsigned int)(*((_DWORD *)this + 3) - *((_DWORD *)this + 1));
      v20 = (float)(*((_DWORD *)this + 7) - *((_DWORD *)this + 5))
          / (float)(*((_DWORD *)this + 3) - *((_DWORD *)this + 1));
      if ( v20 <= v12 )
      {
        if ( v17 > v20 )
        {
          v15 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
          v16 = *((_BYTE *)this + 28) - *((_BYTE *)this + 20);
          v17 = (float)(*((_DWORD *)this + 7) - *((_DWORD *)this + 5)) / (float)v15;
        }
      }
      else
      {
        v13 = *((_BYTE *)this + 12) - *((_BYTE *)this + 4);
        v14 = *((_BYTE *)this + 28) - *((_BYTE *)this + 20);
        v12 = (float)(*((_DWORD *)this + 7) - *((_DWORD *)this + 5))
            / (float)(*((_DWORD *)this + 3) - *((_DWORD *)this + 1));
      }
      ++v18;
      --v19;
    }
    while ( v19 );
    if ( v15 == 1 )
    {
LABEL_10:
      LOBYTE(v15) = v13;
      v16 = v14;
    }
    if ( v8 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqqqq(
          (__int64)this,
          &EventCheckMultiPlaneOverlaySuccess,
          a3,
          (*a5)->VidPnSourceId,
          v9,
          v28,
          v15,
          v16,
          0);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_qqqqqq((__int64)this, &EventCheckMultiPlaneOverlayFail, a3, (*a5)->VidPnSourceId, v9, v28, v15, v16, v10);
    }
    if ( a7 )
    {
      v22 = a7;
      do
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v23 = (int *)*a8;
          Template_qqddddddddq(
            (__int64)v23,
            a2,
            a3,
            *v23,
            v23[1],
            v23[2],
            v23[4],
            v23[3],
            v23[5],
            v23[6],
            v23[8],
            v23[7],
            v23[9],
            v23[10]);
        }
        ++a8;
        --v22;
      }
      while ( v22 );
    }
    if ( (_DWORD)v9 )
    {
      v24 = a6;
      do
      {
        IsYUVAllocation = 0LL;
        v26 = *(__int64 *)((char *)v24 + (char *)a5 - (char *)a6);
        if ( *v24 )
          IsYUVAllocation = (unsigned int)DXGDEVICE::IsYUVAllocation(v11, *v24);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v27 = *(_DWORD **)(v26 + 24);
          Template_qqqddddddddddddqqqqq(
            (unsigned int)v27[19],
            (__int64)v27,
            IsYUVAllocation,
            *(_DWORD *)(v26 + 16),
            IsYUVAllocation,
            *v27,
            v27[1],
            v27[3],
            v27[2],
            v27[4],
            v27[5],
            v27[7],
            v27[6],
            v27[8],
            v27[9],
            v27[11],
            v27[10],
            v27[12],
            v27[13],
            v27[14],
            v27[18],
            v27[19],
            *(_DWORD *)v26);
        }
        ++v24;
        --v9;
      }
      while ( v9 );
    }
  }
}
