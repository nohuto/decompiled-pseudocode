/*
 * XREFs of ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801C2B70
 * Callers:
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801C28A0 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsCreateHolographicCompositorPresent @ 0x1800C47C0 (IsCreateHolographicCompositorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011F878 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicClient::EnsureHolographicCompositor(CHolographicClient *this)
{
  __int64 *v1; // rbx
  int HolographicCompositor; // eax
  unsigned int v4; // edi
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && IsCreateHolographicCompositorPresent() )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    HolographicCompositor = CreateHolographicCompositor(&GUID_2f2db261_03ae_44e7_8c1c_0cc9cef8ba09, v1);
    v4 = HolographicCompositor;
    if ( HolographicCompositor < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)HolographicCompositor);
      return v4;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))*v1)(
           *v1,
           &GUID_97234441_f8b8_4244_bbb3_f977d0eb60a5,
           (char *)this + 32);
    if ( v6 < 0 )
    {
      v7 = 316LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 32LL))(
           *((_QWORD *)this + 4),
           (char *)this + 16);
    if ( v6 < 0 )
    {
      v7 = 317LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
