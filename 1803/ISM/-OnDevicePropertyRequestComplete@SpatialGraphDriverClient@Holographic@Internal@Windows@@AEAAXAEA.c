/*
 * XREFs of ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x1800C2C50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1J@Z @ 0x1800BD9A8 (-DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct _GUID *a2,
        int a3,
        const char *a4)
{
  char v4; // si
  unsigned int *v7; // r8
  unsigned __int64 v8; // rcx
  rsize_t v9; // r9
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3;
  if ( a3 < 0 )
  {
    v10 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v10 && *v10 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DevicePropertyRequestFailed_(v11, 1, (__int64)this + 80, (__int64)&a2[8], v4);
    }
  }
  else
  {
    if ( *(_DWORD *)a2[6].Data4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xEB,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        a4);
      __debugbreak();
    }
    v7 = *(unsigned int **)&a2[5].Data1;
    v8 = *(_QWORD *)a2[5].Data4 - (_QWORD)v7;
    if ( v8 < 0xC )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        a4);
      __debugbreak();
    }
    v9 = *v7;
    if ( v8 != v9 + 12 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xEF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        (const char *)v9);
      JUMPOUT(0x1800C2D44LL);
    }
    if ( Windows::Internal::Holographic::PropertyCache::SetValue(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 208),
           a2 + 8,
           v7 + 3,
           v9) )
    {
      *((_DWORD *)this + 90) |= *(_DWORD *)&a2[3].Data2;
    }
  }
}
