/*
 * XREFs of ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1800CA730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRefThread@@MEAA@XZ @ 0x1800CA4F8 (--1CRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

CDuiRefThread *__fastcall CDuiRefThread::`scalar deleting destructor'(CDuiRefThread *this, char a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &CDuiRefThread::`vftable'{for `CRefThread'};
  *((_QWORD *)this + 4) = &CDuiRefThread::`vftable'{for `IDuiThreadRef'};
  if ( !v2 )
  {
    UnInitThread();
    UnInitProcessPriv(&_ImageBase);
    *((_BYTE *)this + 40) = 0;
  }
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
