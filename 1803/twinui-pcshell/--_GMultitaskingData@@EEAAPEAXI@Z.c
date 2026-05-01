/*
 * XREFs of ??_GMultitaskingData@@EEAAPEAXI@Z @ 0x180274490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1MultitaskingData@@EEAA@XZ @ 0x1802743D4 (--1MultitaskingData@@EEAA@XZ.c)
 */

MultitaskingData *__fastcall MultitaskingData::`scalar deleting destructor'(MultitaskingData *this, char a2)
{
  MultitaskingData::~MultitaskingData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
