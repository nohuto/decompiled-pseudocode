/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C004EE30
 * Callers:
 *     CHidInput_Destroy @ 0x1C00693F0 (CHidInput_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 74);
  *(_QWORD *)this = &CHidInput::`vftable';
  if ( v3 != gBaseLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)this + 74) = 0LL;
  }
  *(_QWORD *)this = &CRIMBase::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
