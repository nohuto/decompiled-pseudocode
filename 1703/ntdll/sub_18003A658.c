/*
 * XREFs of sub_18003A658 @ 0x18003A658
 * Callers:
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18002FC40 (RtlImageRvaToSection.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 */

unsigned __int64 __fastcall sub_18003A658(unsigned __int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 *a5)
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
  v8 = sub_18003A72C(a1);
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
