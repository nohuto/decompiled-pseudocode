/*
 * XREFs of sub_18003B92C @ 0x18003B92C
 * Callers:
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800C9EEC @ 0x1800C9EEC (sub_1800C9EEC.c)
 * Callees:
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18003B92C(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
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
  int v19; // eax
  const char *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-38h]
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v22 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v10 = sub_18003BAE0(a3, a1, a3, a2, &v22);
    v9 = v22;
    v8 = v10;
  }
  if ( v8 < 0 )
    goto LABEL_23;
  v11 = a1;
  if ( *a2 )
  {
    if ( (dword_180156A70 & 5) != 0 )
    {
      v20 = "SxS";
      if ( !v9 )
        v20 = "API set";
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2590,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        a1,
        a2,
        v20);
    }
    v19 = *a4 | 0x200;
    *a4 = v19;
    if ( v9 )
      *a4 = v19 | 4;
    v11 = a2;
    goto LABEL_12;
  }
  v12 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v12 - 2); ; --i )
  {
    if ( (unsigned __int64)i < v12 )
    {
      *a4 |= 0x20u;
LABEL_11:
      v8 = sub_18003BE6C(a2, a1);
      goto LABEL_12;
    }
    if ( *i == 92 || *i == 47 )
      break;
  }
  if ( (unsigned int)sub_18003E414(a1) == 5 )
    goto LABEL_11;
  v8 = sub_18003FB24(a1, a2);
  if ( v8 >= 0 )
    *a4 |= 0x600u;
LABEL_12:
  if ( v8 >= 0 )
  {
    v14 = *((_QWORD *)v11 + 1);
    for ( j = (_WORD *)(*v11 + v14 - 2); ; --j )
    {
      if ( (unsigned __int64)j < v14 )
      {
LABEL_29:
        v8 = sub_18003BE6C(a2, &Extension);
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
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(v21) = v8;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2648,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        a1,
        v21);
    }
    if ( (dword_180156A70 & 0x10) != 0 )
      __debugbreak();
  }
  return (unsigned int)v8;
}
