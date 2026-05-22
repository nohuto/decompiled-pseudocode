/*
 * XREFs of ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800C43F0
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800D2BB0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800BCDD0 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800BFEF0 (-AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEB.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        HSTRING a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  wchar_t *StringRawBuffer; // r14
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v6; // rcx
  int v7; // esi
  __int64 v8; // rdx
  char *v10; // rsi
  _DWORD *v11; // rcx
  __int64 v12; // r8
  const struct _GUID *v13; // rbx
  HolographicDriverClientTrace *v14; // rcx
  unsigned __int64 *v15; // rax
  UINT32 length; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v18[5]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE InBuffer[400]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  length = 0;
  *(_OWORD *)a3 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
  *((_DWORD *)a3 + 4) = 0;
  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(a2, &length);
  memset_0(InBuffer, 0, sizeof(InBuffer));
  _o_wcsncpy_s(InBuffer, 200LL, StringRawBuffer, length);
  v6 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 12);
  v17 = 0;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v6,
         0x5B841Cu,
         InBuffer,
         0x190u,
         a3,
         0x10u,
         &v17);
  if ( v7 < 0 )
  {
    v8 = 827LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v17 == 16 )
  {
    v7 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 128LL))(
           this,
           a3,
           (char *)a3 + 16);
    if ( v7 < 0 )
    {
      v8 = 831LL;
      goto LABEL_3;
    }
    v10 = (char *)this - 8;
    v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v11 && *v11 )
    {
      HolographicDriverClientTrace::Instance();
      v13 = (const struct _GUID *)((char *)this + 72);
      HolographicDriverClientTrace::GetDynamicNodeForDevice_(v14, v10, v13, StringRawBuffer, a3);
    }
    else
    {
      v13 = (const struct _GUID *)((char *)this + 72);
    }
    v15 = std::wstring::wstring(v18, StringRawBuffer, v12);
    Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping(
      (__int64)v13,
      (__int64)a3,
      (__int64)v15);
    std::wstring::_Tidy_deallocate(v18);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
