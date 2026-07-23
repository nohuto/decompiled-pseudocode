/*
 * XREFs of sub_18003C6F4 @ 0x18003C6F4
 * Callers:
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 * Callees:
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18003C6F4(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, _BYTE *a4)
{
  bool v5; // zf
  int v8; // ebx
  char v9; // r14
  int v10; // eax
  unsigned __int16 *v11; // r15
  unsigned __int64 v12; // rdx
  _WORD *i; // rcx
  unsigned __int64 v14; // rdx
  _WORD *j; // rcx
  unsigned __int64 v16; // rdx
  _WORD *k; // rcx
  const char *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-38h]
  char v21; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 8) == 0;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v10 = sub_18003C89C(a3, a1, a3, a2, &v21);
    v9 = v21;
    v8 = v10;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  v11 = a1;
  if ( *a2 )
  {
    if ( (dword_180155A10 & 5) != 0 )
    {
      v19 = "SxS";
      if ( !v9 )
        v19 = "API set";
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2567,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        a1,
        a2,
        v19);
    }
    *(_DWORD *)a4 |= 0x200u;
    if ( v9 )
      *(_DWORD *)a4 |= 4u;
    v11 = a2;
    goto LABEL_12;
  }
  v12 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v12 - 2); ; --i )
  {
    if ( (unsigned __int64)i < v12 )
    {
      *(_DWORD *)a4 |= 0x20u;
LABEL_11:
      v8 = sub_18003CC2C(a2, a1);
      goto LABEL_12;
    }
    if ( *i == 92 || *i == 47 )
      break;
  }
  if ( (unsigned int)sub_18003F2C4(a1) == 5 )
    goto LABEL_11;
  v8 = sub_18004BC44(a1, a2);
  if ( v8 >= 0 )
    *(_DWORD *)a4 |= 0x600u;
LABEL_12:
  if ( v8 >= 0 )
  {
    v14 = *((_QWORD *)v11 + 1);
    for ( j = (_WORD *)(*v11 + v14 - 2); ; --j )
    {
      if ( (unsigned __int64)j < v14 )
      {
LABEL_29:
        v8 = sub_18003CC2C(a2, &Extension);
        goto LABEL_23;
      }
      if ( *j == 46 )
        break;
      if ( *j == 92 || *j == 47 )
        goto LABEL_29;
    }
    v16 = *((_QWORD *)a2 + 1);
    for ( k = (_WORD *)(*a2 + v16 - 2); (unsigned __int64)k >= v16 && *k == 46; --k )
      *a2 -= 2;
    k[1] = 0;
  }
LABEL_23:
  if ( v8 < 0 )
  {
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(v20) = v8;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2623,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        a1,
        v20);
    }
    if ( (dword_180155A10 & 0x10) != 0 )
      __debugbreak();
  }
  return (unsigned int)v8;
}
