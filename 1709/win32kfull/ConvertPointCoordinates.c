/*
 * XREFs of ConvertPointCoordinates @ 0x1C01AA3A8
 * Callers:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01A789C (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     TransformForInputMagnification @ 0x1C01AA650 (TransformForInputMagnification.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01A9A64 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  unsigned int v7; // ecx
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  v7 = ConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (int *)&v10);
  if ( v7 )
  {
    v7 = ConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (int *)&v10 + 1);
    if ( v7 )
      *a4 = v10;
  }
  return v7;
}
