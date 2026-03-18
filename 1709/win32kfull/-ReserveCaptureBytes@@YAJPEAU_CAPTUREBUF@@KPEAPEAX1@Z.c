/*
 * XREFs of ?ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z @ 0x1C005D044
 * Callers:
 *     xxxClientCallDitThread @ 0x1C005B094 (xxxClientCallDitThread.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C011C694 (xxxClientCallDevCallbackCapture.c)
 *     xxxClientCallManipulationThread @ 0x1C0201440 (xxxClientCallManipulationThread.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C005D090 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall ReserveCaptureBytes(struct _CAPTUREBUF *a1, unsigned int a2, void **a3, void **a4)
{
  unsigned __int8 *v6; // r8
  __int64 result; // rax
  void *v8; // r11

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = &v6[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  FixupCaptureDataOffsets(a1, a3, v6);
  result = 0LL;
  *a4 = v8;
  return result;
}
