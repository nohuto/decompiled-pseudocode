/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C0112988
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0112A74 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 768);
  v5 = *a3;
  if ( *(_DWORD *)(a2 + 768) == 1 )
  {
    *(_DWORD *)(a2 + 744) = *a4;
    *(_QWORD *)(a2 + 784) = v5;
  }
  else
  {
    *a4 = *(_DWORD *)(a2 + 744) + (unsigned __int64)(1000 * (v5 - *(_QWORD *)(a2 + 784))) / *(_QWORD *)(a1 + 648);
  }
  *(_DWORD *)(a2 + 752) = *(_DWORD *)(a2 + 748);
  result = (unsigned int)*a4;
  *(_DWORD *)(a2 + 748) = result;
  *(_QWORD *)(a2 + 776) = v5;
  return result;
}
