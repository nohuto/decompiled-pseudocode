/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x180004D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180003FB0 (--3@YAXPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180004D80 (--1CPortClient@@UEAA@XZ.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
