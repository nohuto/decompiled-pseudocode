/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180013EA0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2___ @ 0x180011EE8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2___.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1800F9780 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, __int64 a2)
{
  char v4; // bp
  bool v5; // si
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10[2]; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+38h] [rbp-30h]
  char v12; // [rsp+39h] [rbp-2Fh]
  char v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]

  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v5 = (*(_DWORD *)(a2 + 4) & 0x40) != 0;
    if ( *(_DWORD *)(a1 + 212) == 1 && (*(_DWORD *)(a2 + 4) & 0x40) == 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 208, 3LL);
      v4 = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 540) = v5;
  }
  v10[0] = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v10[1] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v11 = *(_BYTE *)(a2 + 16);
  v12 = *(_BYTE *)(a2 + 17);
  v13 = v4;
  v14 = a1;
  v7 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_106658d7b1abecbfffbcfcfb3c0f20f2___((_DWORD *)a1, v10);
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
