/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180016F08 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180016F94 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002E030 (-count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002E3FC (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char *v4; // rbp
  __int64 v5; // rbx
  float **v6; // rbx
  float v7; // xmm6_4
  char v9[32]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = (char *)this + 56;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  std::wstring::wstring(v9, a2);
  v5 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count(
         v4,
         v9);
  std::wstring::~wstring((__int64)v9);
  if ( v5 )
  {
    std::wstring::wstring(v9, a2);
    v6 = (float **)std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v4, v9);
    std::wstring::~wstring((__int64)v9);
    if ( *((_BYTE *)*v6 + 4) )
      v7 = 0.0;
    else
      v7 = **v6;
  }
  else
  {
    v7 = FLOAT_1_0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
