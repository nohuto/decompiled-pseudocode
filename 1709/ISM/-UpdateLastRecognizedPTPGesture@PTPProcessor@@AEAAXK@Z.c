/*
 * XREFs of ?UpdateLastRecognizedPTPGesture@PTPProcessor@@AEAAXK@Z @ 0x18006EBD8
 * Callers:
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EC88 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPProcessor::UpdateLastRecognizedPTPGesture(PTPProcessor *this, __int16 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ecx
  _DWORD v7[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a2 & 0x2000) != 0 )
  {
    v3 = *((_QWORD *)this + 81);
    v7[0] = 28;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v3 + 88LL))(v3, 11LL, v7);
    if ( v4 >= 0 )
    {
      v6 = 32;
      if ( (int)abs32(v7[3] - v7[1]) > (int)abs32(v7[4] - v7[2]) )
        v6 = 16;
      *((_DWORD *)this + 151) = v6;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 11, 428, v4);
    }
  }
  else if ( (a2 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 151) = 128;
  }
}
