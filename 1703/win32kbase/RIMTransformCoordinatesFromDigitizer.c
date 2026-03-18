/*
 * XREFs of RIMTransformCoordinatesFromDigitizer @ 0x1C0108360
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMTransformCoordinates @ 0x1C01080DC (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0108634 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C01087CC (RIMTransformPointerDevicePointToPhysical.c)
 */

void __fastcall RIMTransformCoordinatesFromDigitizer(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-10h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 264) & 0x80u) != 0 && *(_QWORD *)(a1 + 536) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v9,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 408) + 96LL));
    if ( a2 )
    {
      RIMTransformCoordinates(*(_QWORD *)(a1 + 536), 0, a2, &v8, &v10);
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 536), *(_QWORD *)a2, a3);
    }
    RIMTransformPhysicalPointToScreen(*(_QWORD *)(a1 + 536), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v9);
  }
}
