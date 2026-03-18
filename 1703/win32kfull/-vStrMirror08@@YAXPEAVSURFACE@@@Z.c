/*
 * XREFs of ?vStrMirror08@@YAXPEAVSURFACE@@@Z @ 0x1C029F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror08(struct SURFACE *a1)
{
  char *v2; // r9
  int v3; // r11d
  __int64 i; // rdi
  char *v5; // rdx
  char *v6; // r10
  __int64 v7; // rbx
  char v8; // cl

  v2 = (char *)*((_QWORD *)a1 + 10);
  v3 = 0;
  for ( i = (unsigned int)(*((_DWORD *)a1 + 14) / 2); v3 < *((_DWORD *)a1 + 15); v2 += *((int *)a1 + 22) )
  {
    v5 = v2;
    v6 = &v2[*((int *)a1 + 14) - 1];
    if ( (int)i > 0 )
    {
      v7 = i;
      do
      {
        v8 = *v5;
        *v5++ = *v6;
        *v6-- = v8;
        --v7;
      }
      while ( v7 );
    }
    ++v3;
  }
}
