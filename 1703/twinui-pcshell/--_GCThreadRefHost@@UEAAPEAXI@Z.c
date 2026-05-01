/*
 * XREFs of ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x1800CA610
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThreadRefHost@@UEAA@XZ @ 0x1800CA590 (--1CThreadRefHost@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

CThreadRefHost *__fastcall CThreadRefHost::`scalar deleting destructor'(CThreadRefHost *this, char a2)
{
  CThreadRefHost::~CThreadRefHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
