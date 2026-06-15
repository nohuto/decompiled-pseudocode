/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1800D52F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1800D4DC4 (--1CThreadRefTaker@@UEAA@XZ.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
