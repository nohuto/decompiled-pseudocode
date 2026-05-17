/*
 * XREFs of sub_18002B318 @ 0x18002B318
 * Callers:
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToSection @ 0x180010F00 (RtlImageRvaToSection.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 */

unsigned __int64 __fastcall sub_18002B318(unsigned __int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v5 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, &v14);
  v8 = sub_18002B3EC(a1);
  if ( a4 )
    *a4 = 0;
  if ( v8 && *(_DWORD *)v8 >= 0x70u && (v10 = *(_QWORD *)(v8 + 88)) != 0 && v10 > a1 && v10 < v5 + a1 - 8 )
  {
    v11 = RtlImageRvaToSection(v14, v9, (int)v10 - (int)a1);
    if ( v11 && *(int *)(v11 + 36) >= 0 && a4 )
      *a4 = 1;
    if ( a5 )
      *a5 = v12;
    return v10;
  }
  else
  {
    if ( a5 )
    {
      if ( v8 && *(_DWORD *)v8 >= 4u )
        *a5 = v8;
      else
        *a5 = 0LL;
    }
    return 0LL;
  }
}
