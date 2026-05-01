/*
 * XREFs of ??_ECRefThread@@MEAAPEAXI@Z @ 0x1800CA560
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRefThread@@MEAA@XZ @ 0x1800CA4F8 (--1CRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

CRefThread *__fastcall CRefThread::`vector deleting destructor'(CRefThread *this, char a2)
{
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
