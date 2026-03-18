/*
 * XREFs of vAlphaConstOnly16_555 @ 0x1C02A0030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall vAlphaConstOnly16_555(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  _WORD *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = a1;
  v7 = a2 + 2LL * a3;
  v8 = (unsigned __int64)(2LL * a3 + 1) >> 1;
  if ( a2 > v7 )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      LODWORD(v7) = (unsigned __int16)*v6;
      v10 = *(unsigned __int16 *)((char *)v6 + v9);
      v11 = (unsigned __int8)v5 * ((v10 & 0x7C1F) - (v7 & 0x7C1F)) + 16400 + 31 * (v7 & 0x7C1F);
      v12 = (unsigned __int8)v5 * (((v10 >> 5) & 0x1F) - (((unsigned int)v7 >> 5) & 0x1F))
          + 16
          + 31 * (((unsigned int)v7 >> 5) & 0x1F);
      LOWORD(v7) = (v12 + ((v12 >> 5) & 0x1F)) & 0x3E0;
      *v6++ = v7 | ((v11 + ((v11 >> 5) & 0x7C1F)) >> 5) & 0x7C1F;
    }
    while ( v4 != v8 );
  }
  return v7;
}
