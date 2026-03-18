/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188084
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C015D4C8 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r15
  UINT v9; // ebx
  __int64 v10; // rdi
  char *PoolWithTag; // r9
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v12; // r9
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // r15
  __int64 v18; // r10
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v24; // [rsp+20h] [rbp-E0h] BYREF
  char *v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[312]; // [rsp+48h] [rbp-B8h] BYREF
  UINT v27; // [rsp+180h] [rbp+80h]

  v7 = a3;
  v25 = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v27 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = a1;
  v10 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v26;
    v25 = v26;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
    {
LABEL_7:
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v13[3] = v10;
      v14 = -1073741801;
      v13[4] = -1073741801LL;
      v13[5] = PsGetCurrentProcess(v16, v15);
      WdLogEvent5_WdWarning(v13);
      goto LABEL_24;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 104LL * (unsigned int)a1, 0x4B677844u);
    v25 = PoolWithTag;
  }
  v27 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 104 * v10);
  v12 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v25;
  if ( !v25 )
    goto LABEL_7;
  if ( v9 )
  {
    a3 = (void **)(v25 + 16);
    v17 = (char *)v8 - (char *)v7;
    do
    {
      v18 = *(__int64 *)((char *)v7 + v17);
      *(a3 - 2) = *v7;
      *((_DWORD *)a3 - 2) = *(_DWORD *)(v18 + 16);
      *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 4LL);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 20LL);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 36LL);
      *((_DWORD *)a3 + 12) = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 52LL);
      v19 = *(_DWORD **)(v18 + 24);
      v20 = v19[18];
      if ( v20 == 6 || v20 == 8 )
      {
        *((_DWORD *)a3 + 15) |= 1u;
        v19 = *(_DWORD **)(v18 + 24);
      }
      v21 = v19[18];
      if ( v21 >= 8 && v21 <= 9 )
      {
        *((_DWORD *)a3 + 15) |= 2u;
        v19 = *(_DWORD **)(v18 + 24);
      }
      *((_DWORD *)a3 - 1) ^= (*((_DWORD *)a3 - 1) ^ *v19) & 1;
      *((_DWORD *)a3 - 1) ^= ((unsigned __int8)*((_DWORD *)a3 - 1) ^ (unsigned __int8)**(_DWORD **)(v18 + 24)) & 2;
      *((_DWORD *)a3 + 13) ^= (*((_DWORD *)a3 + 13) ^ *(_DWORD *)(*(_QWORD *)(v18 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)a3 + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)a3 + 20) = 2;
      }
      ++v7;
      a3 += 13;
      --v10;
    }
    while ( v10 );
  }
  v24.pPlanes = v12;
  *(&v24.PlaneCount + 1) = 0;
  v24.PlaneCount = v9;
  *(_QWORD *)&v24.Supported = 0LL;
  v22 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a4, &v24, (__int64)a3);
  if ( v22 >= 0 )
    *a5 = v24.Supported;
  v14 = v22;
LABEL_24:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v25);
  return v14;
}
