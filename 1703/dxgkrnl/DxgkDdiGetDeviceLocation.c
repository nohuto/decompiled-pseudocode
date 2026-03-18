/*
 * XREFs of DxgkDdiGetDeviceLocation @ 0x1C0033A18
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0041860 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C0027648 (-DdiGetDeviceLocation@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_GETDEVICELOCATION@@@Z.c)
 */

char __fastcall DxgkDdiGetDeviceLocation(__int64 a1, __int64 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v6; // r8
  __int64 v8; // rax
  char result; // al
  _DXGKARG_GETDEVICELOCATION v10; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v10.VirtualFunctionIndex = 0LL;
  v6 = *(_QWORD *)(a1 + 2288);
  *(_QWORD *)&v10.BusNumber = 0LL;
  *(_QWORD *)&v10.VirtualFunctionIndex = (unsigned __int16)a2;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v6 + 1128) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 1136) + 8LL * (unsigned __int16)a2) + 121LL) )
    {
      *(_QWORD *)&v10.BusNumber = 0LL;
      v10.SegmentNumber = 0;
    }
    else
    {
      ADAPTER_RENDER::DdiGetDeviceLocation((ADAPTER_RENDER *)v6, &v10);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v8 + 24) = v10.VirtualFunctionIndex;
    WdLogEvent5_WdError(v8);
  }
  *a3 = v10.SegmentNumber;
  *a4 = v10.BusNumber;
  result = v10.FunctionNumber;
  *a5 = v10.FunctionNumber;
  return result;
}
