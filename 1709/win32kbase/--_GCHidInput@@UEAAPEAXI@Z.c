/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00196A0
 * Callers:
 *     CHidInput_Destroy @ 0x1C0004F20 (CHidInput_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C001AAD0 (--1CRIMBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = *((_QWORD *)this + 114);
  *(_QWORD *)this = &CHidInput::`vftable';
  if ( v3 != gBaseLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v3);
    *((_QWORD *)this + 114) = 0LL;
  }
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, v5, v6);
  return this;
}
