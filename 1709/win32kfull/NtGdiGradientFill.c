/*
 * XREFs of NtGdiGradientFill @ 0x1C00B52E0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  __int64 v6; // rbx
  int v7; // r12d
  unsigned int v8; // r12d
  size_t v9; // rcx
  char *v10; // rax
  char *v11; // r15
  ULONG64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG v17; // ecx
  char *v18; // [rsp+30h] [rbp-48h]

  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_30;
  }
  v6 = 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= (unsigned int)(40960000 - v6) >> 3 )
    {
      v7 = 8;
      goto LABEL_13;
    }
LABEL_30:
    v17 = 87;
    goto LABEL_31;
  }
  if ( a5 > (unsigned int)(40960000 - v6) / 0xCuLL )
    goto LABEL_30;
  v7 = 12;
LABEL_13:
  v8 = a5 * v7;
  v9 = v8 + (unsigned int)v6;
  if ( (unsigned int)v9 >= 0x2710000 )
  {
    v17 = 8;
LABEL_31:
    EngSetLastError(v17);
    return 0LL;
  }
  v10 = (char *)PALLOCMEM2(v9, 1886221383LL, 0);
  v11 = v10;
  if ( v10 )
  {
    v18 = &v10[v6];
    if ( (_DWORD)v6 && ((unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] < a2) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, a2, (unsigned int)v6);
    if ( v8 )
    {
      v12 = (ULONG64)a4 + v8;
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v18, a4, v8);
    v13 = GreGradientFill(a1, a5, a6);
    Win32FreePool(v11, v14, v15);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v13;
}
