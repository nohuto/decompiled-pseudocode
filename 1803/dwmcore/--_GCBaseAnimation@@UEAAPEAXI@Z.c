/*
 * XREFs of ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18016E430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x1800C1F50 (--1CBaseAnimation@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CBaseAnimation *__fastcall CBaseAnimation::`scalar deleting destructor'(CBaseAnimation *this, char a2)
{
  CBaseAnimation::~CBaseAnimation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
