/*
 * XREFs of ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x1801E5F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1801E5EFC (--1CD2DCommandList@@MEAA@XZ.c)
 */

CD2DCommandList *__fastcall CD2DCommandList::`scalar deleting destructor'(CD2DCommandList *this, char a2)
{
  CD2DCommandList::~CD2DCommandList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
