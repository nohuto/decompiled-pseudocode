/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x140007D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400014A0 (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
