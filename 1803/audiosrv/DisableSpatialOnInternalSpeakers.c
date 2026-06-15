/*
 * XREFs of DisableSpatialOnInternalSpeakers @ 0x1800EF054
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800EF668 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x1800EF174 (EnableSpatialOnSpeakerEndpoint.c)
 *     IsInternalFormFactorOf @ 0x1800EF3EC (IsInternalFormFactorOf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisableSpatialOnInternalSpeakers(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v5, &v11);
        v7 = v6;
        if ( v6 < 0 )
          break;
        if ( (unsigned __int8)IsInternalFormFactorOf(v11, 1LL) )
        {
          v8 = EnableSpatialOnSpeakerEndpoint(v11, L"HP", 0LL);
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              344LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v8);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
        if ( ++v5 >= v10 )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x154,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
