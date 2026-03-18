/*
 * XREFs of vAlphaConstOnly @ 0x1C00DFB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vAlphaConstOnly(_DWORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r9d
  _DWORD *v6; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // edx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = a1;
  result = a2 + 4LL * a3;
  v8 = (unsigned __int64)(4LL * a3 + 3) >> 2;
  if ( a2 > result )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      v10 = (unsigned __int8)v5 * ((*(_DWORD *)((char *)v6 + v9) & 0xFF00FF) - (*v6 & 0xFF00FF))
          + 8388736
          + 255 * (*v6 & 0xFF00FF);
      v11 = 255 * ((*v6 >> 8) & 0xFF00FF)
          + (unsigned __int8)v5 * (((*(_DWORD *)((char *)v6 + v9) >> 8) & 0xFF00FF) - ((*v6 >> 8) & 0xFF00FF))
          + 8388736;
      result = v11 + ((v11 >> 8) & 0xFFFF00FF);
      *v6++ = (v11 + ((v11 >> 8) & 0xFF00FF)) ^ (result ^ ((v10 + ((v10 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
    }
    while ( v4 != v8 );
  }
  return result;
}
