/*
 * XREFs of sub_18004213C @ 0x18004213C
 * Callers:
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_180042934 @ 0x180042934 (sub_180042934.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 */

__int64 __fastcall sub_18004213C(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // eax
  int v8; // ebx
  _UNICODE_STRING v9; // xmm1
  bool v11; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  WCHAR *v16[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v17; // [rsp+90h] [rbp-70h] BYREF
  _WORD v18[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v20; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v16[0] = 0LL;
  v16[1] = 0LL;
  v4 = 0;
  v14 = 0LL;
  v17.Buffer = v18;
  v11 = 0;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  v12 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((dword_1801596D4 & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    sub_180042054(
      *(const WCHAR **)(v1 + 80),
      (const WCHAR *)(v5 & ((-(__int64)((dword_1801596D4 & 4) != 0) & 0x400) + 31488) | 1),
      (const WCHAR **)Path);
    v6 = Path;
  }
  else
  {
    sub_180042054(0LL, 0LL, (const WCHAR **)Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = sub_1800410D4(
           (const UNICODE_STRING *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v16,
           &v17,
           &String1,
           &v13,
           &v11,
           (__int64)&v12);
    v8 = v7;
    if ( v11 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      v8 = sub_180042934(a1, (unsigned int)&v13, (unsigned int)&String1, (unsigned int)&v17, v7);
      if ( v8 < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v12 |= 1u;
      *(_DWORD *)(v2 + 264) = sub_1800404E8(&String1);
      v8 = sub_180043094(&String1, &v13, (__int64)&v14);
      if ( v8 != -1073741515 )
        goto LABEL_14;
    }
    sub_180042420(v2 + 72);
    v9 = String1;
    *(_UNICODE_STRING *)(v2 + 72) = v13;
    *(_UNICODE_STRING *)(v2 + 88) = v9;
    *(_QWORD *)&v13.Length = 0LL;
    v13.Buffer = 0LL;
    v8 = sub_180043144(a1, &v17);
    if ( v8 != 1073741838 )
      goto LABEL_14;
    if ( v18 != v17.Buffer )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v17.Buffer);
    *(_DWORD *)&v17.Length = 0x1000000;
    v17.Buffer = v18;
    v18[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  v8 = -1073741701;
LABEL_14:
  if ( v14 )
  {
    sub_180070738(a1, v14);
  }
  else if ( (unsigned __int8)sub_180042604() )
  {
    sub_1800CB800(v12, a1);
  }
  if ( v18 != v17.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v17.Buffer);
  *(_DWORD *)&v17.Length = 0x1000000;
  v17.Buffer = v18;
  v18[0] = 0;
  sub_180042420(&v13);
  if ( v20 )
    RtlReleasePath(Path[0]);
  return (unsigned int)v8;
}
