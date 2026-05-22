/*
 * XREFs of ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x18003AB00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardModifierState *__fastcall KeyboardModifierState::`vector deleting destructor'(
        KeyboardModifierState *this,
        char a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // r8
  _DWORD *v5; // r9

  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  v3 = (_DWORD *)((char *)this + 16);
  v4 = 8LL;
  v5 = v3 + 16;
  do
  {
    *v3 = *v5;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
