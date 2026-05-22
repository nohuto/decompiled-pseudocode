/*
 * XREFs of ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C
 * Callers:
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x1800C2C50 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800C620C (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x1800C6320 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x1800BDEEC (-PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_.c)
 *     ??A?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAAAEAV?$vector@EV?$allocator@E@std@@@1@AEBU_GUID@@@Z @ 0x1800C98F4 (--A-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Intern.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800CD3E0 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::Holographic::PropertyCache::SetValue(
        Windows::Internal::Holographic::PropertyCache *this,
        const struct _GUID *a2,
        const void *a3,
        rsize_t a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // bl
  const char *v12; // r9
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  v9 = std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>::operator[](
         (char *)this + 40,
         a2);
  v10 = v9;
  if ( *(_QWORD *)(v9 + 8) - *(_QWORD *)v9 == a4 && !memcmp_0(*(const void **)v9, a3, a4) )
  {
    v11 = 0;
  }
  else
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(v10);
    if ( memcpy_s(*(void *const *)v10, *(_QWORD *)(v10 + 8) - *(_QWORD *)v10, a3, a4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x81,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        v12);
      JUMPOUT(0x1800C1015LL);
    }
    v13 = *(_QWORD *)(v10 + 8) - *(_QWORD *)v10;
    v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v14 && *v14 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::PropertyCache_SetValue_(
        v15,
        *((_DWORD *)this + 2),
        (__int64)this + 12,
        (__int64)a2,
        v17,
        v13);
    }
    v11 = 1;
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v11;
}
