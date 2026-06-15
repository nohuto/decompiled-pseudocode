/*
 * XREFs of ?Release@CMonitor@@UEAAKXZ @ 0x1800B7530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1800B532C (--1CMonitor@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitor::Release(CMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitor::~CMonitor(this);
    operator delete(this);
  }
  return v2;
}
