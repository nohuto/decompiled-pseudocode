/*
 * XREFs of vAlphaConstOnly16_565 @ 0x1C02A0120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vAlphaConstOnly16_565(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  _WORD *v6; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r10
  int v9; // esi
  unsigned __int64 v10; // r11
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // ecx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = a1;
  result = a2 + 2LL * a3;
  v8 = (unsigned __int64)(2LL * a3 + 1) >> 1;
  if ( a2 > result )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = (unsigned __int8)v5;
    v10 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      v11 = *(unsigned __int16 *)((char *)v6 + v10);
      v12 = v9 * ((v11 & 0xF81F) - (*v6 & 0xF81F)) + 32784 + 31 * (*v6 & 0xF81F);
      v13 = 63 * (((unsigned __int16)*v6 >> 5) & 0x3F)
          + 2 * (v9 * (((v11 >> 5) & 0x3F) - (((unsigned __int16)*v6 >> 5) & 0x3F)) + 16);
      result = (v12 + ((v12 >> 5) & 0xF81F)) >> 5;
      *v6++ = result ^ (((v13 + ((v13 >> 6) & 0x3F)) >> 1) ^ ((v12 + ((v12 >> 5) & 0xF81F)) >> 5)) & 0x7E0;
    }
    while ( v4 != v8 );
  }
  return result;
}
