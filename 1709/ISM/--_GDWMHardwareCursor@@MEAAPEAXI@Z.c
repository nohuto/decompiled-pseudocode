/*
 * XREFs of ??_GDWMHardwareCursor@@MEAAPEAXI@Z @ 0x1800274F0
 * Callers:
 *     ??_EDWMHardwareCursor@@OBI@EAAPEAXI@Z @ 0x180029D50 (--_EDWMHardwareCursor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1800266A0 (--1DWMCursor@@MEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180028B04 (--1-$_Tree@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGl.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

DWMHardwareCursor *__fastcall DWMHardwareCursor::`scalar deleting destructor'(DWMHardwareCursor *this, char a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &DWMHardwareCursor::`vftable';
  *((_QWORD *)this + 1) = &DWMHardwareCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 2) = &DWMHardwareCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 3) = &DWMHardwareCursor::`vftable'{for `RefCountedObject'};
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *((_QWORD *)this + 56);
  if ( v5 )
  {
    *((_QWORD *)this + 56) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 55);
  if ( v6 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 54);
  if ( v7 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 53);
  if ( v8 )
  {
    *((_QWORD *)this + 53) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::~_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>((char *)this + 400);
  DWMCursor::~DWMCursor((DWMHardwareCursor *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
