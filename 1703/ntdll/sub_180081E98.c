/*
 * XREFs of sub_180081E98 @ 0x180081E98
 * Callers:
 *     sub_18001A44C @ 0x18001A44C (sub_18001A44C.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180081E98(_QWORD *a1)
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
