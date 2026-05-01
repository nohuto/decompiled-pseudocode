/*
 * XREFs of ??_ECSwitchItemElement@@UEAAPEAXI@Z @ 0x18027D920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x18027D7F0 (--1CSwitchItemElement@@UEAA@XZ.c)
 */

CSwitchItemElement *__fastcall CSwitchItemElement::`vector deleting destructor'(CSwitchItemElement *this, char a2)
{
  CSwitchItemElement::~CSwitchItemElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
