/*
 * XREFs of ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x180015434
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x1800153B0 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180014180 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180030A60 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawGeometryInstruction::~CDrawGeometryInstruction(CDrawGeometryInstruction *this)
{
  volatile signed __int32 *v2; // rcx
  CResource *(__fastcall *v3)(CResource *, char); // rax
  volatile signed __int32 *v4; // rcx
  CResource *(__fastcall *v5)(CResource *, char); // rax

  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    v3 = **(CResource *(__fastcall ***)(CResource *, char))v2;
    if ( v3 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v2, 1);
    else
      v3((CResource *)v2, 1);
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v5 = **(CResource *(__fastcall ***)(CResource *, char))v4;
    if ( v5 == CResource::`scalar deleting destructor' )
    {
      CResource::`scalar deleting destructor'((CResource *)v4, 1);
    }
    else if ( (char *)v5 == (char *)CCachedVisualImageBrushResource::`vector deleting destructor' )
    {
      CCachedVisualImageBrushResource::`vector deleting destructor'((CCachedVisualImageBrushResource *)v4, 1u);
    }
    else
    {
      v5((CResource *)v4, 1);
    }
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
