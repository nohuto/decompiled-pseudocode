/*
 * XREFs of ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x1800CCBC0
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C56F4 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800CAEB0 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *lpInBuffer,
        DWORD a4,
        void *Destination,
        rsize_t DestinationSize)
{
  rsize_t v6; // r15
  rsize_t v11; // r12
  _DWORD *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // r9
  unsigned __int64 v19; // rcx
  void *Block; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = DestinationSize;
  v11 = DestinationSize + 4;
  std::vector<unsigned char>::vector<unsigned char>((unsigned __int64 *)&Block, DestinationSize + 4);
  v12 = Block;
  LODWORD(DestinationSize) = 0;
  v13 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          this,
          a2,
          lpInBuffer,
          a4,
          Block,
          v22 - (int)Block,
          (LPDWORD)&DestinationSize);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 298LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)v15);
    goto LABEL_11;
  }
  if ( (unsigned int)DestinationSize != v11 )
  {
    v16 = 300LL;
LABEL_7:
    v14 = -2147418113;
    v15 = 2147549183LL;
    goto LABEL_8;
  }
  if ( *v12 != v6 )
  {
    v16 = 303LL;
    goto LABEL_7;
  }
  if ( memcpy_s(Destination, v6, v12 + 1, v6) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v18);
    __debugbreak();
  }
  v14 = 0;
LABEL_11:
  if ( v12 )
  {
    v19 = (unsigned __int64)v12;
    if ( (unsigned __int64)(v23 - (_QWORD)v12) >= 0x1000 )
    {
      if ( ((unsigned __int8)v12 & 0x1F) != 0
        || (v12 = (_DWORD *)*((_QWORD *)v12 - 1), (unsigned __int64)v12 >= v19)
        || (v19 = v19 - (_QWORD)v12 - 8, v19 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v19, v17);
        __debugbreak();
      }
    }
    operator delete(v12);
  }
  return v14;
}
