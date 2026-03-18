/*
 * XREFs of PerfInfoLogInterrupt @ 0x140010A80
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140182D50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  __int16 v4; // si
  int v5; // r9d
  unsigned int v6; // ebx
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  int v14; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v15[3]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+58h] [rbp-30h]
  int i; // [rsp+5Ch] [rbp-2Ch]

  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v4 = 3890;
      v5 = 16;
      v14 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v4 = 3907;
      v12 = *(_QWORD *)(a1 + 24);
      v5 = 12;
    }
  }
  else
  {
    v4 = 3935;
    v12 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  v6 = EtwpActiveSystemLoggers;
  result = (__int64)&v12;
  v13 = a2;
  v8 = !_BitScanForward((unsigned int *)&v9, EtwpActiveSystemLoggers);
  v15[2] = &v12;
  v16 = v5;
  for ( i = 0; !v8; v8 = !_BitScanForward((unsigned int *)&v9, v6) )
  {
    v6 &= v6 - 1;
    result = (__int64)&EtwpGroupMasks + 32 * (unsigned int)v9;
    if ( result )
    {
      result = *(unsigned int *)(result + 4);
      if ( (result & 0x4000) != 0 )
      {
        v10 = (unsigned __int8)EtwpSystemLogger[2 * (unsigned int)v9];
        v11 = (unsigned __int8)EtwpSystemLogger[2 * v9 + 1] - 1;
        v15[1] = 8LL;
        v15[0] = a3 + 8LL * v11;
        result = EtwpLogKernelEvent((unsigned int)v15, EtwpHostSiloState, v10, 2, v4, 4196866);
      }
    }
  }
  return result;
}
