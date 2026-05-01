/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x1801070A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18006499C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x180106F40 (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  _QWORD *v2; // rbx
  char v4; // al
  __int64 v6; // rdx
  int v7; // edx
  int v8; // edi
  __int64 v9; // rdx
  unsigned __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v4 = *((_BYTE *)this + 76);
    if ( !v4 && !*((_DWORD *)this + 16) )
      return 2147943568LL;
    if ( *((_DWORD *)this + 17) && *((_DWORD *)this + 16) != 4 )
    {
      v6 = 59LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\ApplicationViewOperationHelpers.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( *((_DWORD *)this + 18) && !*((_DWORD *)this + 16) )
    {
      v6 = 63LL;
      goto LABEL_8;
    }
    v7 = *((_DWORD *)this + 16);
    if ( v7 )
    {
      v10 = 0uLL;
      if ( v4 )
      {
        if ( (unsigned int)(v7 - 3) > 1 )
        {
          v6 = 71LL;
          goto LABEL_8;
        }
        v10 = *((_OWORD *)this + 5);
      }
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
             (__int64 *)this + 7,
             (struct tagRECT *)&v10,
             (LONG *)this + 16,
             (LONG *)this + 17,
             (LONG *)this + 18);
      if ( v8 < 0 )
      {
        v9 = 74LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v9,
          (__int64)"internal\\onecoreuapshell\\private\\inc\\ApplicationViewOperationHelpers.h",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
             (void **)this + 7,
             (struct tagRECT *)this + 5);
      if ( v8 < 0 )
      {
        v9 = 79LL;
        goto LABEL_19;
      }
    }
  }
  if ( *v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
  *a2 = (struct IApplicationViewPosition *)*v2;
  return 0LL;
}
