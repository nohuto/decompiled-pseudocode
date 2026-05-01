/*
 * XREFs of ??$_Resetp@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@@Z @ 0x1800E778C
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr<DDAScreenCapture>::_Resetp<DDAScreenCapture>(
        DDAScreenCapture **a1,
        DDAScreenCapture *a2)
{
  _DWORD *v4; // rbx
  unsigned __int64 result; // rax
  volatile signed __int32 *v6; // rdi
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  v7[4] = -2LL;
  try
  {
    v4 = operator new(0x18uLL);
    v4[2] = 1;
    v4[3] = 1;
    result = (unsigned __int64)&std::_Ref_count<DDAScreenCapture>::`vftable';
    *(_QWORD *)v4 = &std::_Ref_count<DDAScreenCapture>::`vftable';
    *((_QWORD *)v4 + 2) = a2;
    v6 = (volatile signed __int32 *)a1[1];
    if ( v6 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    a1[1] = (DDAScreenCapture *)v4;
    *a1 = a2;
  }
  catch ( ... )
  {
    if ( a2 )
      DDAScreenCapture::`scalar deleting destructor'(a2, (unsigned int)v7);
    throw;
  }
  return result;
}
