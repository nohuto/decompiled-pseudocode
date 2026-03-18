/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01882D0
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C015CFA0 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r14
  UINT v9; // ebx
  __int64 v10; // rdi
  char *PoolWithTag; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v12; // r9
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // r10
  signed __int64 v18; // r14
  int v19; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v21; // [rsp+20h] [rbp-E0h] BYREF
  char *v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[336]; // [rsp+48h] [rbp-B8h] BYREF
  UINT v24; // [rsp+198h] [rbp+98h]

  v7 = a3;
  v22 = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v24 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = a1;
  v10 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v23;
    v22 = v23;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v13[3] = v10;
      v14 = -1073741801;
      v13[4] = -1073741801LL;
      v13[5] = PsGetCurrentProcess(v16, v15);
      WdLogEvent5_WdWarning(v13);
      goto LABEL_18;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 112LL * (unsigned int)a1, 0x4B677844u);
    v22 = PoolWithTag;
  }
  v24 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 112 * v10);
  v12 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v22;
  if ( !v22 )
    goto LABEL_7;
  if ( v9 )
  {
    v17 = v22 + 12;
    v18 = (char *)v8 - (char *)v7;
    do
    {
      a3 = *(void ***)((char *)v7 + v18);
      *(_QWORD *)(v17 - 12) = *v7;
      *((_DWORD *)v17 - 1) = *((_DWORD *)a3 + 4);
      *(_DWORD *)v17 = *(_DWORD *)a3;
      *(_OWORD *)(v17 + 8) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(v17 + 24) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(v17 + 40) = *(_OWORD *)((char *)a3[3] + 36);
      *((_DWORD *)v17 + 14) = *((_DWORD *)a3[3] + 13);
      *((_DWORD *)v17 + 17) = *((_DWORD *)a3[3] + 18);
      *((_DWORD *)v17 + 1) ^= (*((_DWORD *)v17 + 1) ^ *(_DWORD *)a3[3]) & 1;
      *((_DWORD *)v17 + 1) ^= ((unsigned __int8)*((_DWORD *)v17 + 1) ^ (unsigned __int8)*(_DWORD *)a3[3]) & 2;
      *((_DWORD *)v17 + 15) ^= (*((_DWORD *)v17 + 15) ^ *((_DWORD *)a3[3] + 14)) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        *((_DWORD *)v17 + 22) = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        *((_DWORD *)v17 + 22) = 2;
      }
      ++v7;
      v17 += 112;
      --v10;
    }
    while ( v10 );
  }
  v21.pPlanes = v12;
  *(&v21.PlaneCount + 1) = 0;
  v21.PlaneCount = v9;
  *(_QWORD *)&v21.Supported = 0LL;
  v19 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v21, (__int64)a3);
  if ( v19 >= 0 )
  {
    *a5 = v21.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v21.ReturnInfo.0;
  }
  v14 = v19;
LABEL_18:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v22);
  return v14;
}
