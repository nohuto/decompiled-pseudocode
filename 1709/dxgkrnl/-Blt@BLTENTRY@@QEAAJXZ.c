/*
 * XREFs of ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C007E158
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall BLTENTRY::Blt(BLTENTRY *this)
{
  int v2; // ebx
  LARGE_INTEGER v3; // rcx
  __int64 v5; // rax

  *((LARGE_INTEGER *)this + 68) = KeQueryPerformanceCounter(0LL);
  if ( (*((_DWORD *)this + 16) & 8) != 0 )
    v2 = 0;
  else
    v2 = BLTQUEUE::PresentDisplayOnly(
           *((BLTQUEUE **)this + 3),
           (struct _DXGKARG_PRESENT_DISPLAYONLY *)((char *)this + 72));
  *((LARGE_INTEGER *)this + 69) = KeQueryPerformanceCounter(0LL);
  if ( v2 < 0 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((LARGE_INTEGER)v3.QuadPart);
    *(_QWORD *)(v5 + 24) = v2;
    *(_QWORD *)(v5 + 32) = this;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v2;
}
