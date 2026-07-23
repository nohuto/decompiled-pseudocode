/*
 * XREFs of sub_18003BB58 @ 0x18003BB58
 * Callers:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 * Callees:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_1800474C8 @ 0x1800474C8 (sub_1800474C8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18003BB58(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, PVOID *a6)
{
  int v10; // [rsp+40h] [rbp-2C8h] BYREF
  int v11; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v15; // [rsp+A0h] [rbp-268h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+A8h] [rbp-260h]
  _WORD v17[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v18; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v19[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v18.Buffer = v19;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v17;
  v15 = 0x1000000;
  v17[0] = 0;
  v10 = sub_1800474C8(&v15, a1);
  if ( v10 >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    memset(v14, 0, sizeof(v14));
    RtlActivateActivationContextUnsafeFast(&v12, *(_QWORD *)(a4 + 136));
    v11 = 0;
    v10 = sub_18003C6F4(&v15, &v18, a4, &v11);
    if ( v10 >= 0 )
      sub_18001DF1C(&v18, a2, v11, a5, a4, a3, a6, &v10);
    RtlDeactivateActivationContextUnsafeFast(&v12);
  }
  if ( v17 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v19 != v18.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v18.Buffer);
  return (unsigned int)v10;
}
