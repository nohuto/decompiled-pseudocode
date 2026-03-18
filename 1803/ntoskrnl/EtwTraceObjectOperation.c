/*
 * XREFs of EtwTraceObjectOperation @ 0x1402AED98
 * Callers:
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1401A70B0 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402B07A8 (EtwpTraceKernelEventWithFilter.c)
 */

__int64 __fastcall EtwTraceObjectOperation(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v7; // edi
  int v8; // r8d
  __int64 result; // rax
  unsigned int v10; // esi
  bool v11; // zf
  __int64 v12; // r14
  int v13; // ebx
  _WORD *v14; // rbp
  int v15; // eax
  int v17; // [rsp+34h] [rbp-64h]
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+40h] [rbp-58h]
  int v20; // [rsp+44h] [rbp-54h]
  _QWORD v21[2]; // [rsp+48h] [rbp-50h] BYREF

  v7 = 0;
  v8 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)]
                 + 192);
  result = EtwpHostSiloState;
  v17 = v8;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4188);
  v11 = !_BitScanForward((unsigned int *)&v12, v10);
  if ( !v11 )
  {
    do
    {
      v10 &= v10 - 1;
      result = EtwpHostSiloState + 32 * (v12 + 132);
      if ( result )
      {
        result = *(unsigned int *)(result + 16);
        if ( (result & 0x80u) != 0LL )
        {
          result = 5 * v12;
          v13 = 0;
          v14 = (_WORD *)(0x140000000LL + 20 * v12 + 3808896);
          if ( *v14 )
          {
            while ( 1 )
            {
              v15 = ExCheckSingleFilter(v8, *(_DWORD *)&v14[2 * v13 + 2]);
              v8 = v17;
              if ( v15 )
                break;
              result = (unsigned __int16)*v14;
              if ( ++v13 >= (unsigned int)result )
                goto LABEL_9;
            }
            result = (unsigned int)(1 << v12);
            v7 |= result;
          }
        }
      }
LABEL_9:
      v11 = !_BitScanForward((unsigned int *)&v12, v10);
    }
    while ( !v11 );
    if ( v7 )
    {
      v18 = a2 + 48;
      v19 = a4;
      v21[0] = &v18;
      v20 = a3;
      v21[1] = 16LL;
      return EtwpTraceKernelEventWithFilter((unsigned int)v21, 1, v7, a1, 290463490);
    }
  }
  return result;
}
