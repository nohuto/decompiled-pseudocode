/*
 * XREFs of EtwEventRegister @ 0x180029F50
 * Callers:
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     sub_1800726B8 @ 0x1800726B8 (sub_1800726B8.c)
 *     sub_18007EDB4 @ 0x18007EDB4 (sub_18007EDB4.c)
 *     sub_1800C8548 @ 0x1800C8548 (sub_1800C8548.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 */

__int64 __fastcall EtwEventRegister(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3u, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
