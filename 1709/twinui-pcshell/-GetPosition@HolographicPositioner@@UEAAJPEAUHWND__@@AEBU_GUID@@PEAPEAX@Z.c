/*
 * XREFs of ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewArrangePosition@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@@Z @ 0x180102D80 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::GetPosition(
        HolographicPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, const struct _GUID *, void **); // [rsp+48h] [rbp+20h] BYREF

  v12 = a2;
  *a4 = 0LL;
  v13 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v13,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 510LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  v6 = (**v13)(v13, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 511LL;
    goto LABEL_5;
  }
  v7 = 0;
LABEL_7:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v9)[2])(v9);
  }
  return v7;
}
