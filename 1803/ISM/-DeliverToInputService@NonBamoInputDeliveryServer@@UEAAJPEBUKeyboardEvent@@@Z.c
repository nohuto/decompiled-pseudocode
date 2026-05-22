/*
 * XREFs of ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x180024450
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverToInputService(
        NonBamoInputDeliveryServer *this,
        const struct KeyboardEvent *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  int v10; // eax
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v6 = *((_QWORD *)this + 33);
      *(_OWORD *)v12 = *(_OWORD *)((char *)a2 + 8);
      v7 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v12, 0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xF1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          a4);
        __debugbreak();
      }
      v4 = *((_QWORD *)this + 33);
      *(_QWORD *)v12 = *((_QWORD *)a2 + 1);
      v5 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, v12, 0LL);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
  }
  else
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = *((_QWORD *)this + 33);
    v12[2] = *((_DWORD *)a2 + 4);
    *(_QWORD *)v12 = v8;
    v10 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, v12, 0LL);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180024580LL);
    }
  }
  return 0LL;
}
