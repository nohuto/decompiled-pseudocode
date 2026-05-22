/*
 * XREFs of ?DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z @ 0x18007F75C
 * Callers:
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x18007EA50 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z.c)
 *     ?Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z @ 0x18007F660 (-Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputDeliveryServer::DeliverEventToInputService(
        InputDeliveryServer *this,
        const struct KeyboardEvent *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // xmm0_8
  __int64 v8; // rcx
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v5 = *((_QWORD *)this + 49);
      *(_OWORD *)v10 = *(_OWORD *)((char *)a2 + 8);
      v6 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, v10, a3);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x2B2,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2C3,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
          (const char *)a3);
        __debugbreak();
      }
      v3 = *((_QWORD *)this + 49);
      *(_QWORD *)v10 = *((_QWORD *)a2 + 1);
      v4 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, v10, a3);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x2BD,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
          (const char *)(unsigned int)v4);
        __debugbreak();
      }
    }
  }
  else
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = *((_QWORD *)this + 49);
    v10[2] = *((_DWORD *)a2 + 4);
    *(_QWORD *)v10 = v7;
    v9 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v10, a3);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2A7,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x18007F88CLL);
    }
  }
}
