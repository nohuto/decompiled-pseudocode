/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C022070C
 * Callers:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C0220780 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02216E4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::`scalar deleting destructor'(
        InteractiveControlInput *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx

  v4 = a2;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    Win32FreePool(v5, a2, a3);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
  if ( (v4 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
