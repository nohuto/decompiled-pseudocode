/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x1800045F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180003FB0 (--3@YAXPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180004D80 (--1CPortClient@@UEAA@XZ.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClientRefCounted::`vftable';
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
