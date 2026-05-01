/*
 * XREFs of ??0SmartCookie@@QEAA@XZ @ 0x18013A3D4
 * Callers:
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1802C26A4 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1802D2A88 (--0ScreenManager@@QEAA@XZ.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x1802D9F10 (--0WindowArrangementView@@QEAA@XZ.c)
 *     ??0JointResize@@QEAA@XZ @ 0x1802E85FC (--0JointResize@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SmartCookie *__fastcall SmartCookie::SmartCookie(SmartCookie *this)
{
  SmartCookie *result; // rax

  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_DWORD *)this + 28) = 0;
  return result;
}
