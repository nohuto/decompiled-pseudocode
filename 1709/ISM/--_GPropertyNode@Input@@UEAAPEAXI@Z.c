/*
 * XREFs of ??_GPropertyNode@Input@@UEAAPEAXI@Z @ 0x1800169E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Input::PropertyNode *__fastcall Input::PropertyNode::`scalar deleting destructor'(Input::PropertyNode *this, char a2)
{
  *(_QWORD *)this = &Input::PropertyNode::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
