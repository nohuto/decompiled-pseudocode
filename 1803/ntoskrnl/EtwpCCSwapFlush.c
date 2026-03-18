/*
 * XREFs of EtwpCCSwapFlush @ 0x140172E84
 * Callers:
 *     EtwpCCSwapTrace @ 0x140172B10 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140062124 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCCSwapFlush(_DWORD *a1, int a2)
{
  int v3; // eax
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v12 = a1 + 4;
  v3 = *a1 - 16;
  v14 = 0;
  v13 = v3;
  result = EtwpHostSiloState;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4188);
  while ( _BitScanForward((unsigned int *)&v7, v5) )
  {
    result = v5 - 1;
    v8 = (unsigned int)v7;
    v5 &= result;
    v9 = EtwpHostSiloState + 32 * (v7 + 132);
    if ( v9 )
    {
      result = *(unsigned int *)(v9 + 4);
      if ( (result & 4) != 0 && (result & 0x100) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4172);
        result = EtwpOpenLogger(v10, EtwpHostSiloState, 0LL, v11);
        if ( result )
        {
          if ( *(_DWORD *)(result + 216) == a2 )
            EtwpLogKernelEvent((__int64)&v12, EtwpHostSiloState, v10, 1u, 0x525u, 0x202u);
          result = EtwpCloseLogger(v10, EtwpHostSiloState, v11[0]);
        }
      }
    }
  }
  return result;
}
