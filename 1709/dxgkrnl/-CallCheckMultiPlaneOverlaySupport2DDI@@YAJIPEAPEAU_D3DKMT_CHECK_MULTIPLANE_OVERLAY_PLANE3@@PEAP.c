/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B020
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C0178D5C (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r15
  __int64 v9; // rdi
  char *PoolWithTag; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v11; // r9
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // r10
  signed __int64 v17; // r15
  __int64 v18; // r11
  int v19; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v21; // [rsp+20h] [rbp-E0h] BYREF
  char *v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+198h] [rbp+98h]

  v7 = a3;
  v22 = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v24 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v23;
    v22 = v23;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    a1 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      v12 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v12[3] = v9;
      v13 = -1073741801;
      v12[4] = -1073741801LL;
      v12[5] = PsGetCurrentProcess(v15, v14);
      WdLogEvent5_WdWarning(v12);
      goto LABEL_18;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 112LL * (unsigned int)a1, 0x4B677844u);
    v22 = PoolWithTag;
  }
  v24 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 112 * v9);
  v11 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v22;
  if ( !v22 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    v16 = v22 + 12;
    v17 = (char *)v8 - (char *)v7;
    v18 = v9;
    do
    {
      a3 = *(void ***)((char *)v7 + v17);
      *(_QWORD *)(v16 - 12) = *v7;
      *((_DWORD *)v16 - 1) = *((_DWORD *)a3 + 4);
      *(_DWORD *)v16 = *(_DWORD *)a3;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(v16 + 24) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(v16 + 40) = *(_OWORD *)((char *)a3[3] + 36);
      *((_DWORD *)v16 + 14) = *((_DWORD *)a3[3] + 13);
      *((_DWORD *)v16 + 17) = *((_DWORD *)a3[3] + 18);
      *((_DWORD *)v16 + 1) ^= (*((_DWORD *)v16 + 1) ^ *(_DWORD *)a3[3]) & 1;
      *((_DWORD *)v16 + 1) ^= ((unsigned __int8)*((_DWORD *)v16 + 1) ^ (unsigned __int8)*(_DWORD *)a3[3]) & 2;
      *((_DWORD *)v16 + 15) ^= (*((_DWORD *)v16 + 15) ^ *((_DWORD *)a3[3] + 14)) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        *((_DWORD *)v16 + 22) = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        *((_DWORD *)v16 + 22) = 2;
      }
      ++v7;
      v16 += 112;
      --v18;
    }
    while ( v18 );
  }
  v21.PlaneCount = v9;
  *(_QWORD *)&v21.Supported = 0LL;
  v21.pPlanes = v11;
  v19 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v21, (__int64)a3);
  if ( v19 >= 0 )
  {
    *a5 = v21.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v21.ReturnInfo.0;
  }
  v13 = v19;
LABEL_18:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v22);
  return v13;
}
