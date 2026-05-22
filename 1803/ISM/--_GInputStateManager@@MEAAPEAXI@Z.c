/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x180006108
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x180007590 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1InputStateManager@@MEAA@XZ @ 0x18000614C (--1InputStateManager@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(InputStateManager *this, char a2)
{
  InputStateManager::~InputStateManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
