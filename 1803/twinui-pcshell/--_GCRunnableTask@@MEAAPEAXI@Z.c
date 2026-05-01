/*
 * XREFs of ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x180267170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x180266E90 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall CRunnableTask::`scalar deleting destructor'(CRunnableTask *this, char a2)
{
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
