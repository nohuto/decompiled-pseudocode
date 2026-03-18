/*
 * XREFs of ApplyPTPTranslation @ 0x1C019BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C019BBE8 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 */

__int64 __fastcall ApplyPTPTranslation(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  struct tagPOINT v7; // [rsp+50h] [rbp+30h] BYREF

  EtwTracePointerDeviceTransformationStart(*a2);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 1), (struct tagPOINT *)a2 + 15);
  *((_QWORD *)a2 + 13) = *((_QWORD *)a2 + 15);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 3), (struct tagPOINT *)a2 + 4);
  v4 = a2[6];
  if ( v4 )
  {
    v5 = a2[7];
    if ( v5 )
    {
      v7 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v5, v4), &v7);
      *((struct tagPOINT *)a2 + 5) = v7;
    }
  }
  return EtwTracePointerDeviceTransformationStop(*a2);
}
