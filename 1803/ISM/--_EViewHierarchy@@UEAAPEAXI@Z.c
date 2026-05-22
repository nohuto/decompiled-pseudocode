/*
 * XREFs of ??_EViewHierarchy@@UEAAPEAXI@Z @ 0x18002B770
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18002B8D4 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewHierarchy *__fastcall ViewHierarchy::`vector deleting destructor'(ViewHierarchy *this, char a2)
{
  ViewHierarchy::~ViewHierarchy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
