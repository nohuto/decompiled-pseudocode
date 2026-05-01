/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180069F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180067A08 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7501b2786f907cffab375e4c2c89740a___ @ 0x18006D1E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_7501b2786f907cffab375e4c2c89740a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  bool v6; // si
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+28h] [rbp-48h]
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v5 = 0;
  if ( (a2 & 0x40) != 0 )
  {
    v6 = (a2 & 0x4000000000LL) != 0;
    if ( *(_DWORD *)(a1 + 220) == 1 && (a2 & 0x4000000000LL) == 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 3u, a3);
      v5 = *(_BYTE *)(a1 + 60);
    }
    *(_BYTE *)(a1 + 548) = v6;
  }
  *(_QWORD *)&v11 = a2;
  BYTE8(v11) = v5;
  if ( *(_DWORD *)(a1 + 64) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12[0] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12[1] = a1;
    v13 = v11;
    v14 = a1;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_7501b2786f907cffab375e4c2c89740a___(
           v9,
           v8,
           *(unsigned int *)(a1 + 56),
           v12,
           -2LL);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
    if ( v7 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v7;
}
