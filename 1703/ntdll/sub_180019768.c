/*
 * XREFs of sub_180019768 @ 0x180019768
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180019768(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  int v4; // r14d
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+50h] [rbp-B8h]
  _WORD v12[128]; // [rsp+58h] [rbp-B0h] BYREF

  LODWORD(v10) = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v12;
  v1 = *(_QWORD *)(a1 + 48);
  v9[0] = 0LL;
  v12[0] = 0;
  v3 = v1 + 72;
  v4 = v1 + 88;
  v5 = sub_18004A930(a1, &v10, v1 + 88, v1 + 72, v9, *(_DWORD *)(a1 + 24));
  v6 = v5;
  if ( v9[0] || (v7 = sub_18004C564(a1, v3, v4, (unsigned int)&v10, (__int64)v9, v5), v6 = v7, v9[0]) )
  {
    sub_180050570(a1);
  }
  else if ( v7 >= 0 )
  {
    v6 = sub_18004C7E0(a1, &v10);
    if ( v6 == 1073741838 )
      v6 = -1073741701;
  }
  if ( v12 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return v6;
}
