/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0126D10
 * Callers:
 *     CHidInput_Destroy @ 0x1C0127EA0 (CHidInput_Destroy.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C0121960 (--1CBaseInput@@UEAA@XZ.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  struct _LIST_ENTRY *v3; // rdx

  v3 = (struct _LIST_ENTRY *)*((_QWORD *)this + 130);
  *(_QWORD *)this = &CHidInput::`vftable';
  if ( v3 != WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)this + 130) = 0LL;
  }
  CBaseInput::~CBaseInput(this, (__int64)v3);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
