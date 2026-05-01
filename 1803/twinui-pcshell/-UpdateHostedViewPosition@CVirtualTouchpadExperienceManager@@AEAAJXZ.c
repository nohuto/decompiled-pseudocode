/*
 * XREFs of ?UpdateHostedViewPosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180183920
 * Callers:
 *     ?OnChromeOffsetsChanged@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180181EE0 (-OnChromeOffsetsChanged@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180181FC0 (-OnPositionChanged@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::UpdateHostedViewPosition(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 10) && *((_DWORD *)this + 24) == 2 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 96LL))(*((_QWORD *)this + 43));
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    *((_BYTE *)this + 284) = 1;
  }
  return 0LL;
}
