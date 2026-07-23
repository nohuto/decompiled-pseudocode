/*
 * XREFs of sub_180071914 @ 0x180071914
 * Callers:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_1800717CC @ 0x1800717CC (sub_1800717CC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180071914(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = (_QWORD *)a1[2];
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(HeapHandle, 0, v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(HeapHandle, 0, a1);
}
