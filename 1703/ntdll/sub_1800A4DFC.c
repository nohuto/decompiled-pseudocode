/*
 * XREFs of sub_1800A4DFC @ 0x1800A4DFC
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_18000AE60 @ 0x18000AE60 (sub_18000AE60.c)
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18000E730 @ 0x18000E730 (sub_18000E730.c)
 *     sub_18000E97C @ 0x18000E97C (sub_18000E97C.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     sub_18001C6C4 @ 0x18001C6C4 (sub_18001C6C4.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 *     sub_1800FF3B0 @ 0x1800FF3B0 (sub_1800FF3B0.c)
 */

__int64 __fastcall sub_1800A4DFC(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801586C0 != a2 )
  {
    dword_1801586B8 = a1;
    qword_1801586C0 = a2;
    qword_1801586C8 = a3;
    qword_1801586D0 = a4;
    qword_1801586D8 = a5;
    qword_1801586E0 = a6;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_1801586B8 == 3 )
      sub_1800FF3B0(a2, a3);
    return sub_1800FDDA8(2LL);
  }
  return result;
}
