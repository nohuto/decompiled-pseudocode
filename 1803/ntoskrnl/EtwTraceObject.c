/*
 * XREFs of EtwTraceObject @ 0x1407A7F9C
 * Callers:
 *     ObpDeregisterObject @ 0x14075A4D0 (ObpDeregisterObject.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1401A70B0 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402B07A8 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceObject(unsigned __int16 a1, __int64 a2)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // edi
  int v6; // r8d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  _WORD *v12; // rbp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int16 v16; // [rsp+40h] [rbp-58h]
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = ObHeaderCookie ^ *(_BYTE *)(a2 + 24) ^ BYTE1(a2);
  v5 = 0;
  v6 = *(_DWORD *)(ObTypeIndexTable[v4] + 192);
  v14 = v6;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4188);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v10 = EtwpHostSiloState + 32 * (v9 + 132);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x80u) != 0 )
        {
          v11 = 0;
          v12 = (_WORD *)(0x140000000LL + 20 * v9 + 3808896);
          if ( *v12 )
          {
            while ( 1 )
            {
              v13 = ExCheckSingleFilter(v6, *(_DWORD *)&v12[2 * v11 + 2]);
              v6 = v14;
              if ( v13 )
                break;
              if ( ++v11 >= (unsigned int)(unsigned __int16)*v12 )
                goto LABEL_9;
            }
            v5 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v5 )
    {
      v17[1] = 16LL;
      v15 = a2 + 48;
      v16 = v4;
      v17[0] = &v15;
      EtwpTraceKernelEventWithFilter((__int64)v17, 1u, v5, a1, 0x10501902u);
    }
  }
}
