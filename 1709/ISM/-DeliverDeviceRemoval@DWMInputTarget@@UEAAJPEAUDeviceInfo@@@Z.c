/*
 * XREFs of ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180021980
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::DeliverDeviceRemoval(DWMInputTarget *this, struct DeviceInfo *a2)
{
  char *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  struct IInputDeliveryServer *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  int v18; // [rsp+30h] [rbp-B38h] BYREF
  char v19; // [rsp+38h] [rbp-B30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B68h] [rbp+0h]

  v18 = 3;
  v3 = &v19;
  v4 = 20LL;
  do
  {
    v5 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v3 = *(_OWORD *)a2;
    v6 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v3 + 1) = v5;
    v7 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v3 + 2) = v6;
    v8 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v3 + 3) = v7;
    v9 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v3 + 4) = v8;
    v10 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v3 + 5) = v9;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (struct DeviceInfo *)((char *)a2 + 128);
    *((_OWORD *)v3 + 6) = v10;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = InputDeliveryServer::s_pInputDeliveryServer;
  v13 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v3 + 1) = v13;
  v15 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v3 + 2) = v14;
  *((_OWORD *)v3 + 3) = v15;
  v16 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *, __int64))(*(_QWORD *)v12 + 48LL))(
          v12,
          (char *)this + 80,
          &v18,
          2856LL);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x16A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x180021A77LL);
  }
  return 0LL;
}
