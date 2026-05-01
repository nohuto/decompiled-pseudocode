/*
 * XREFs of ?Flash@CApplicationViewBase@@UEAAJXZ @ 0x180142860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::Flash(CApplicationViewBase *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  BOOL v4; // eax
  UINT uCount; // ecx
  $C811A85A3CBAF233E045382DA27E29BF pfwi; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(CApplicationViewBase *, HWND *))(*(_QWORD *)this + 432LL))(this, &v8);
  v2 = v1;
  if ( v1 >= 0 )
  {
    memset_0(&pfwi, 0, sizeof(pfwi));
    pfwi.hwnd = v8;
    pfwi.cbSize = 32;
    pfwi.dwFlags = 14;
    v4 = SystemParametersInfoW(0x2004u, 0, &pfwi.uCount, 0);
    uCount = pfwi.uCount;
    if ( !v4 )
      uCount = 1;
    pfwi.uCount = uCount;
    FlashWindowEx(&pfwi);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v1);
    return v2;
  }
}
