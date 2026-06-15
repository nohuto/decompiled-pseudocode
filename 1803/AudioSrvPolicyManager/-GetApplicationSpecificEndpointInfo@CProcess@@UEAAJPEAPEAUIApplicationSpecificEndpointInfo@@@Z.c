/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180014A30
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009130 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010BBC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180016F08 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180016F94 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??R?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180017118 (--R-$less@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEBA_NAEBV-$basic_.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18002FBC0 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        unsigned __int64 this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  __int64 v2; // r15
  const unsigned __int16 *ApplicationName; // rax
  unsigned __int16 *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 *v9; // rdi
  __int64 *v10; // r14
  char v11; // al
  struct IApplicationSpecificEndpointInfo *v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-68h] BYREF
  char v15; // [rsp+28h] [rbp-60h]
  _BYTE v16[32]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  v2 = *(_QWORD *)(this + 264);
  ApplicationName = ApplicationSpecificEndpointInfo::GetApplicationName((struct IAudioProcess *)(this & -(__int64)(this != 16)));
  *a2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 32);
  v5 = (unsigned __int16 *)ApplicationName;
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  std::wstring::wstring(v16, v5);
  v7 = *(__int64 **)(v2 + 600);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    v10 = v9;
    v11 = std::less<std::wstring>::operator()(v6, v9 + 4, v16);
    if ( v11 )
      v9 = (__int64 *)v9[2];
    else
      v9 = (__int64 *)*v9;
    if ( !v11 )
      v7 = v10;
  }
  if ( v7 == v8 || (unsigned __int8)std::less<std::wstring>::operator()(v6, v16, v7 + 4) )
    v7 = v8;
  std::wstring::~wstring(v16);
  if ( v7 != *(__int64 **)(v2 + 600) )
  {
    v12 = (struct IApplicationSpecificEndpointInfo *)v7[8];
    if ( v12 )
    {
      *a2 = v12;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      *a2 = 0LL;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
