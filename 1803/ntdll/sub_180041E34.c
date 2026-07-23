/*
 * XREFs of sub_180041E34 @ 0x180041E34
 * Callers:
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180041E34(unsigned __int16 *a1, __int64 a2, char **a3)
{
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+48h] [rbp-B8h]
  _WORD v15[128]; // [rsp+50h] [rbp-B0h] BYREF

  v13 = 0x1000000;
  *a3 = 0LL;
  v11 = 0;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v15;
  v15[0] = 0;
  v5 = sub_18003B92C(a1, (unsigned __int16 *)&v13, 0LL, &v11);
  if ( v5 >= 0 )
  {
    v5 = sub_180041F10(&v13, a2, a3, v12, v11);
    if ( v5 >= 0 && v12[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      sub_18001F5FC(*a3);
      *a3 = 0LL;
      sub_1800435B4(0LL);
      v5 = sub_180041F10(&v13, a2, a3, v12, v11);
      sub_180047B2C(v8, v7, v9, v10);
      if ( v5 >= 0 && v12[0] != 9 )
      {
        sub_18001F5FC(*a3);
        *a3 = 0LL;
        v5 = -1073741515;
      }
    }
  }
  if ( v15 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return (unsigned int)v5;
}
