/*
 * XREFs of ??_GInputSystem@@UEAAPEAXI@Z @ 0x1800212C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180021304 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputSystem *__fastcall InputSystem::`scalar deleting destructor'(InputSystem *this, char a2)
{
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl((InputSystem *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
