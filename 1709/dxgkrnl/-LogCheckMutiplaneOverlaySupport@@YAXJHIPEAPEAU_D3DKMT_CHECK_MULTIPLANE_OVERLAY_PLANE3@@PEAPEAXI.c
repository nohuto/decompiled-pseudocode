/*
 * XREFs of ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C019D830
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BC54 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     McTemplateK0qqddddddddq @ 0x1C0026288 (McTemplateK0qqddddddddq.c)
 *     McTemplateK0qqqddddddddddddqqqqqq @ 0x1C00263A0 (McTemplateK0qqqddddddddddddqqqqqq.c)
 *     McTemplateK0qqqqqq @ 0x1C00265A4 (McTemplateK0qqqqqq.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C019D7CC (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall LogCheckMutiplaneOverlaySupport(
        D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        void **a5,
        unsigned int a6,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a7,
        struct ADAPTER_RENDER *a8)
{
  __int64 v9; // rdi
  int v10; // r15d
  char v11; // r12
  float v12; // xmm2_4
  int v13; // ebp
  char v14; // r14
  __int64 v15; // r8
  char v16; // r9
  float v17; // xmm3_4
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r11
  __int64 v19; // rbx
  int v20; // r10d
  float v21; // xmm1_4
  __int64 v23; // rbp
  int *v24; // rcx
  void **v25; // rbx
  signed __int64 v26; // rsi
  __int64 v27; // r8
  unsigned int *v28; // r14
  _DWORD *v29; // rdx
  int v30; // [rsp+28h] [rbp-B0h]

  v9 = a3;
  v10 = a2;
  v11 = (char)pPlaneAttributes;
  if ( bTracingEnabled )
  {
    v12 = FLOAT_1_0;
    v13 = 1;
    v14 = 1;
    v15 = 1LL;
    v16 = 1;
    v17 = FLOAT_1_0;
    if ( !(_DWORD)v9 )
      goto LABEL_10;
    v18 = a4;
    v19 = (unsigned int)v9;
    do
    {
      pPlaneAttributes = (*v18)->pPlaneAttributes;
      v20 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
      a2 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
      v21 = (float)v20 / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
      if ( v21 <= v12 )
      {
        if ( v17 > v21 )
        {
          v15 = (unsigned int)a2;
          v16 = v20;
          v17 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left)
              / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        }
      }
      else
      {
        v13 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
        v14 = v20;
        v12 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left) / (float)v13;
      }
      ++v18;
      --v19;
    }
    while ( v19 );
    if ( (_DWORD)v15 == 1 )
    {
LABEL_10:
      v15 = (unsigned int)v13;
      v16 = v14;
    }
    if ( v10 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqq(
          (__int64)pPlaneAttributes,
          &EventCheckMultiPlaneOverlaySuccess,
          v15,
          (*a4)->VidPnSourceId,
          v9,
          v30,
          v15,
          v16,
          0);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qqqqqq(
        (__int64)pPlaneAttributes,
        &EventCheckMultiPlaneOverlayFail,
        v15,
        (*a4)->VidPnSourceId,
        v9,
        v30,
        v15,
        v16,
        v11);
    }
    if ( a6 )
    {
      v23 = a6;
      do
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v24 = (int *)*a7;
          McTemplateK0qqddddddddq(
            (__int64)v24,
            a2,
            v15,
            *v24,
            v24[1],
            v24[2],
            v24[4],
            v24[3],
            v24[5],
            v24[6],
            v24[8],
            v24[7],
            v24[9],
            v24[10]);
        }
        ++a7;
        --v23;
      }
      while ( v23 );
    }
    if ( (_DWORD)v9 )
    {
      v25 = a5;
      v26 = (char *)a4 - (char *)a5;
      do
      {
        v27 = 0LL;
        v28 = *(unsigned int **)((char *)v25 + v26);
        if ( *v25 )
          v27 = (unsigned int)IsYUVAllocation(*v25, a8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v29 = (_DWORD *)*((_QWORD *)v28 + 3);
          McTemplateK0qqqddddddddddddqqqqqq(
            *v28,
            (__int64)v29,
            v27,
            v28[4],
            v27,
            *v29,
            v29[1],
            v29[3],
            v29[2],
            v29[4],
            v29[5],
            v29[7],
            v29[6],
            v29[8],
            v29[9],
            v29[11],
            v29[10],
            v29[12],
            v29[13],
            v29[14],
            v29[18],
            v29[19],
            *v28,
            v29[20]);
        }
        ++v25;
        --v9;
      }
      while ( v9 );
    }
  }
}
