/*
 * XREFs of sub_180041F10 @ 0x180041F10
 * Callers:
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_180041F10(UNICODE_STRING *a1, __int64 a2, _QWORD *a3, _DWORD *a4, __int16 a5)
{
  unsigned int v7; // ebx
  int v9; // eax
  _UNICODE_STRING v10; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING v12; // [rsp+70h] [rbp-90h] BYREF
  _WORD v13[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    v7 = sub_1800385D0(a1, 0LL, a5, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)&v12.Length = 0x1000000;
    v12.Buffer = v13;
    v13[0] = 0;
    *(_QWORD *)&v10.Length = 0LL;
    v10.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v9 = sub_18003FCF8(&a1->Length, &v12, &String1, &v10, a5);
    else
      v9 = sub_1800410D4(a1, a2, 0, 0LL, &v12, &String1, &v10, 0LL, 0LL);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = sub_1800385D0(&String1, &v10, a5, (__int64)a3, a4);
      if ( v7 == -1073741515 )
        v7 = sub_18007AFDC(&v12, a3, a4);
    }
    sub_180042420(&v10);
    if ( v13 != v12.Buffer )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v12.Buffer);
    *(_DWORD *)&v12.Length = 0x1000000;
    v12.Buffer = v13;
    v13[0] = 0;
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      456,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      v7);
  return v7;
}
