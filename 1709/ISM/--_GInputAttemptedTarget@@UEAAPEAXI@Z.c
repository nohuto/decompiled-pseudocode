/*
 * XREFs of ??_GInputAttemptedTarget@@UEAAPEAXI@Z @ 0x180081E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputAttemptedTarget@@UEAA@XZ @ 0x180081E54 (--1InputAttemptedTarget@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputAttemptedTarget *__fastcall InputAttemptedTarget::`scalar deleting destructor'(
        InputAttemptedTarget *this,
        char a2)
{
  InputAttemptedTarget::~InputAttemptedTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
