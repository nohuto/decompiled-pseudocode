/*
 * XREFs of ??_ECConstraintModel@@UEAAPEAXI@Z @ 0x180113580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180113464 (--1CConstraintModel@@UEAA@XZ.c)
 */

void **__fastcall CConstraintModel::`vector deleting destructor'(void **this, char a2)
{
  CConstraintModel::~CConstraintModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
