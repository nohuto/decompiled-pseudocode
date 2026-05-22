/*
 * XREFs of ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800C49B0
 * Callers:
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800D2C80 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJW4SPATIAL_GRAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800BD22C (-DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STA.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::DeleteStaticNodes(
        __int64 a1,
        int a2,
        unsigned int a3,
        const void *a4)
{
  __int64 v4; // rsi
  DWORD v9; // edi
  int *v10; // rax
  int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r9
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = a3;
  if ( a3 && !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v9 = 16 * a3 + 8;
  v10 = (int *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = 974LL;
LABEL_12:
    v16 = v12;
    goto LABEL_13;
  }
  memset_0(v10, 0, (unsigned int)(16 * v4 + 8));
  v11[1] = v4;
  *v11 = a2;
  if ( (_DWORD)v4 )
    memmove(v11 + 2, a4, 16 * v4);
  v14 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v20 = 0;
  v15 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          v14,
          0x5B842Cu,
          v11,
          v9,
          0LL,
          0,
          &v20);
  v12 = v15;
  if ( v15 >= 0 )
  {
    if ( !v20 )
    {
      v17 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v17 && *v17 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::DeleteStaticNodes_(v18, a1 - 8, a1 + 72, a2, v4, (__int64)a4);
      }
      v12 = 0;
      goto LABEL_18;
    }
    v12 = -2147418113;
    v13 = 991LL;
    goto LABEL_12;
  }
  v16 = (unsigned int)v15;
  v13 = 989LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v16);
LABEL_18:
  if ( v11 )
    operator delete(v11);
  return v12;
}
