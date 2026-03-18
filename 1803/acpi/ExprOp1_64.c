/*
 * XREFs of ExprOp1_64 @ 0x1C0050918
 * Callers:
 *     ExprOp1 @ 0x1C00507A0 (ExprOp1.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 */

__int64 __fastcall ExprOp1_64(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 i; // rdx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, a2[10] + 40LL, 135, (__int64)&v15);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) != 128 )
      {
        if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
        {
          v12 = !_BitScanReverse64((unsigned __int64 *)&v13, *(_QWORD *)(a2[10] + 16LL));
        }
        else
        {
          if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
          {
            if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
            {
              v10 = 1LL;
              for ( i = *(_QWORD *)(a2[10] + 16LL); i; i >>= 4 )
              {
                v4 += v10 * (i & 0xF);
                v10 *= 10LL;
              }
            }
            else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
            {
              v6 = 0;
              v7 = *(_QWORD *)(a2[10] + 16LL);
              do
              {
                if ( !v7 )
                  break;
                v8 = v7 / 0xA;
                v9 = (v7 % 0xA) << v6;
                v6 += 4;
                v4 |= v9;
                v7 = v8;
              }
              while ( v6 < 0x40 );
            }
            goto LABEL_21;
          }
          v12 = !_BitScanForward64((unsigned __int64 *)&v13, *(_QWORD *)(a2[10] + 16LL));
        }
        if ( !v12 )
          v4 = (unsigned int)(v13 + 1);
        goto LABEL_21;
      }
      v4 = ~*(_QWORD *)(a2[10] + 16LL);
LABEL_21:
      v14 = v15;
      *(_WORD *)(a2[11] + 2LL) = 1;
      *(_QWORD *)(a2[11] + 16LL) = v4;
      return WriteObject(a1, v14, a2[11]);
    }
  }
  return result;
}
