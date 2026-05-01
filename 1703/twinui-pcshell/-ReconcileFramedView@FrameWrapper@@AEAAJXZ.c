/*
 * XREFs of ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180062494
 * Callers:
 *     ?PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ @ 0x1800617C0 (-PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ.c)
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1800620A0 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x180062250 (-PresentFramedView@FrameWrapper@@UEAAJXZ.c)
 *     ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180062420 (-SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::ReconcileFramedView(FrameWrapper *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( *((_QWORD *)this + 8)
    && (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8))(
         *((_QWORD *)this + 8),
         &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20,
         &v7) >= 0
    && (v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *((_QWORD *)this + 7)),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    v3 = 0;
  }
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
