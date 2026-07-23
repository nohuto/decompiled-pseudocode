/*
 * XREFs of sub_1800C9EEC @ 0x1800C9EEC
 * Callers:
 *     sub_1800C9E34 @ 0x1800C9E34 (sub_1800C9E34.c)
 *     sub_1800CA01C @ 0x1800CA01C (sub_1800CA01C.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 */

__int64 __fastcall sub_1800C9EEC(_QWORD *a1, const ANSI_STRING *a2)
{
  int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[8]; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+50h] [rbp-B0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+58h] [rbp-A8h]
  _WORD v9[128]; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+160h] [rbp+60h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR v11; // [rsp+168h] [rbp+68h]
  _WORD v12[128]; // [rsp+170h] [rbp+70h] BYREF

  v7 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v9;
  v10 = 0x1000000;
  v11 = (POBJECT_BOUNDARY_DESCRIPTOR)v12;
  v9[0] = 0;
  v12[0] = 0;
  v3 = sub_180041ACC((unsigned __int16 *)&v7, a2);
  if ( v3 >= 0 )
  {
    v5 = 0x800000;
    v3 = sub_18003B92C((unsigned __int16 *)&v7, (unsigned __int16 *)&v10, 0LL, (int *)&v5);
    if ( v3 >= 0 )
      v3 = sub_1800CA0F0(a1[21], &v10, a1[2], v5, a1[7], v6, a1[5]);
  }
  if ( v9 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v9;
  v7 = 0x1000000;
  v9[0] = 0;
  if ( v12 != (_WORD *)v11 )
    RtlDeleteBoundaryDescriptor(v11);
  return (unsigned int)v3;
}
