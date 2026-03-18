/*
 * XREFs of CreateBitField @ 0x1C0027910
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C00177E8 (CreateXField.c)
 */

__int64 __fastcall CreateBitField(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v4; // r9
  __int64 v5; // rdx
  _DWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  result = CreateXField(a1, a2, *(_QWORD *)(a2 + 80) + 80LL, &v6);
  if ( !(_DWORD)result )
  {
    v4 = v6;
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) >> 3;
    v6[3] = v5;
    v4[4] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL) - 8 * v5;
    v4[5] = 1;
    v4[6] = 1;
  }
  return result;
}
