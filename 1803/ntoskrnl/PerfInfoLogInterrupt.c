/*
 * XREFs of PerfInfoLogInterrupt @ 0x1400AAE80
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  __int16 v4; // si
  int v5; // r9d
  __int64 result; // rax
  unsigned int v7; // ebx
  bool i; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v14[3]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v4 = 3890;
      v5 = 16;
      v13 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v4 = 3907;
      v11 = *(_QWORD *)(a1 + 24);
      v5 = 12;
    }
  }
  else
  {
    v4 = 3935;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  v12 = a2;
  v14[2] = &v11;
  result = EtwpHostSiloState;
  v15 = v5;
  v16 = 0;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4188);
  for ( i = !_BitScanForward((unsigned int *)&v9, v7); !i; i = !_BitScanForward((unsigned int *)&v9, v7) )
  {
    v7 &= v7 - 1;
    result = EtwpHostSiloState + 32 * (v9 + 132);
    if ( result )
    {
      result = *(unsigned int *)(result + 4);
      if ( (result & 0x4000) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4173) - 1LL;
        v14[1] = 8LL;
        v14[0] = a3 + 8 * v10;
        result = EtwpLogKernelEvent(
                   (unsigned int)v14,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v9 + 4172),
                   2,
                   v4,
                   4196866);
      }
    }
  }
  return result;
}
