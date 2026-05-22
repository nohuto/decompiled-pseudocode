/*
 * XREFs of ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1800B6560
 * Callers:
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1800BF420 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::TrimDurableStaticNodes(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        unsigned int a2,
        const struct SPATIAL_NODE_ID *a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  DWORD v7; // esi
  int v8; // eax
  void *v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rbx
  int v13; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  void *Block; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) < 7u )
  {
    v6 = -2147024846;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x354,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
    return v6;
  }
  v15[1] = 4LL;
  v15[0] = 0LL;
  v7 = 16 * a2 + 4;
  Block = 0LL;
  v8 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v15,
         v7);
  v9 = Block;
  v6 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 856LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v10);
    goto LABEL_13;
  }
  v12 = Block;
  if ( Block )
    v12 = (char *)Block + v15[0];
  memset(v12, 0, (unsigned int)(16 * v4 + 4));
  *v12 = v4;
  memmove(v12 + 1, a3, 16 * v4);
  v13 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 10),
          0x5B8454u,
          v12,
          v7,
          0LL,
          0,
          &v18);
  v6 = v13;
  if ( v13 < 0 )
  {
    v10 = (unsigned int)v13;
    v11 = 870LL;
    goto LABEL_9;
  }
  if ( v18 )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
    v6 = 0;
  }
LABEL_13:
  if ( v9 )
    operator delete(v9);
  return v6;
}
