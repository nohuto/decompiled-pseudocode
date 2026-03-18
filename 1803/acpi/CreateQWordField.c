/*
 * XREFs of CreateQWordField @ 0x1C004AD10
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 */

__int64 __fastcall CreateQWordField(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  result = CreateXField(a1, a2, *(_QWORD *)(a2 + 80) + 80LL, &v5);
  if ( !(_DWORD)result )
  {
    v4 = v5;
    v5[3] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
    v4[4] = 0;
    v4[5] = 64;
    v4[6] = 4;
  }
  return result;
}
