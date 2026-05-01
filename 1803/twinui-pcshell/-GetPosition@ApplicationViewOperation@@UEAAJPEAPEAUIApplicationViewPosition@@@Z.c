/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x180089530
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x18014C55C (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  void **v2; // rdi
  struct IApplicationViewPosition *v4; // rcx
  char v6; // al
  __int64 v7; // rdx
  int v8; // ebx
  char *v9; // r14
  int v10; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v2 = (void **)((char *)this + 72);
  if ( !*((_QWORD *)this + 9) )
  {
    v6 = *((_BYTE *)this + 92);
    if ( !v6 && !*((_DWORD *)this + 20) )
      return 2147943568LL;
    if ( *((_DWORD *)this + 21) && *((_DWORD *)this + 20) != 4 )
    {
      v7 = 63LL;
LABEL_12:
      v8 = -2147024809;
      goto LABEL_13;
    }
    v9 = (char *)this + 88;
    if ( *((_DWORD *)this + 22) && !*((_DWORD *)this + 20) )
    {
      v7 = 67LL;
      goto LABEL_12;
    }
    v10 = *((_DWORD *)this + 20);
    if ( v10 )
    {
      if ( v6 && (unsigned int)(v10 - 3) > 1 )
      {
        v7 = 75LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(v2);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
             v2,
             (__int64)v9);
      if ( v8 >= 0 )
        goto LABEL_2;
      v7 = 78LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(v2);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(v2);
      if ( v8 >= 0 )
        goto LABEL_2;
      v7 = 83LL;
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\ApplicationViewOperationHelpers.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
LABEL_2:
  v4 = (struct IApplicationViewPosition *)*v2;
  if ( *v2 )
  {
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationViewPosition *)*v2;
  }
  *a2 = v4;
  return 0LL;
}
