/*
 * XREFs of ExprOp2_32 @ 0x1C0050ABC
 * Callers:
 *     ExprOp2 @ 0x1C0050A80 (ExprOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 */

__int64 __fastcall ExprOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, a2[10], 0, "II");
  v5 = 0;
  if ( (int)result >= 0 )
  {
    result = ValidateTarget(a1, a2[10] + 80LL, 135, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      *(_WORD *)(a2[11] + 2LL) = 1;
      v6 = *(_DWORD *)(a2[7] + 8LL);
      if ( v6 > 0x7B )
      {
        v17 = v6 - 124;
        if ( !v17 )
        {
          v15 = ~(*(_DWORD *)(a2[10] + 16LL) & *(_DWORD *)(a2[10] + 56LL));
          goto LABEL_31;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 != 6 )
                return WriteObject(a1, v23, a2[11]);
              v21 = a2[10];
              v22 = *(_DWORD *)(v21 + 56);
              if ( !v22 )
                goto LABEL_14;
              v16 = *(_DWORD *)(v21 + 16) % v22;
            }
            else
            {
              v16 = *(_DWORD *)(a2[10] + 16LL) ^ *(_DWORD *)(a2[10] + 56LL);
            }
          }
          else
          {
            v16 = ~(*(_DWORD *)(a2[10] + 16LL) | *(_DWORD *)(a2[10] + 56LL));
          }
        }
        else
        {
          v16 = *(_DWORD *)(a2[10] + 16LL) | *(_DWORD *)(a2[10] + 56LL);
        }
      }
      else
      {
        if ( v6 == 123 )
        {
          v15 = *(_DWORD *)(a2[10] + 16LL) & *(_DWORD *)(a2[10] + 56LL);
          goto LABEL_31;
        }
        v7 = v6 - 114;
        if ( !v7 )
        {
          v15 = *(_DWORD *)(a2[10] + 16LL) + *(_DWORD *)(a2[10] + 56LL);
          goto LABEL_31;
        }
        v8 = v7 - 2;
        if ( v8 )
        {
          v9 = v8 - 3;
          if ( v9 )
          {
            v10 = v9 - 2;
            if ( v10 )
            {
              if ( v10 != 1 )
                return WriteObject(a1, v23, a2[11]);
              v11 = a2[10];
              v12 = *(_DWORD *)(v11 + 56);
              if ( v12 < 0x20 )
                v5 = *(_DWORD *)(v11 + 16) >> v12;
            }
            else
            {
              v13 = a2[10];
              v14 = *(_DWORD *)(v13 + 56);
              if ( v14 < 0x20 )
                v5 = *(_DWORD *)(v13 + 16) << v14;
            }
LABEL_14:
            *(_DWORD *)(a2[11] + 16LL) = v5;
            return WriteObject(a1, v23, a2[11]);
          }
          v15 = *(_DWORD *)(a2[10] + 16LL) * *(_DWORD *)(a2[10] + 56LL);
LABEL_31:
          *(_DWORD *)(a2[11] + 16LL) = v15;
          return WriteObject(a1, v23, a2[11]);
        }
        v16 = *(_DWORD *)(a2[10] + 16LL) - *(_DWORD *)(a2[10] + 56LL);
      }
      *(_DWORD *)(a2[11] + 16LL) = v16;
      return WriteObject(a1, v23, a2[11]);
    }
  }
  return result;
}
