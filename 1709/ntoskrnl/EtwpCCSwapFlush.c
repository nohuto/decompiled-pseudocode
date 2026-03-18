/*
 * XREFs of EtwpCCSwapFlush @ 0x140280A40
 * Callers:
 *     EtwpCCSwapTrace @ 0x140280B4C (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCCSwapFlush(_DWORD *a1, int a2)
{
  int v3; // eax
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v10; // ecx
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v12 = a1 + 4;
  v3 = *a1 - 16;
  v14 = 0;
  v13 = v3;
  result = EtwpHostSiloState;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4172);
  while ( _BitScanForward(&v10, v5) )
  {
    v5 &= v5 - 1;
    v6 = v10;
    result = 32LL * v10;
    v7 = result + EtwpHostSiloState + 4208;
    if ( v7 )
    {
      result = *(unsigned int *)(v7 + 4);
      if ( (result & 4) != 0 && (result & 0x100) != 0 )
      {
        v8 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v6 + 4156);
        result = EtwpOpenLogger(v8, EtwpHostSiloState, 0, v11);
        if ( result )
        {
          if ( *(_DWORD *)(result + 216) == a2 )
            EtwpLogKernelEvent((__int64)&v12, EtwpHostSiloState, v8, 1u, 0x525u, 0x202u);
          result = (__int64)EtwpCloseLogger(v8, EtwpHostSiloState, v11[0]);
        }
      }
    }
  }
  return result;
}
