/*
 * XREFs of ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18011CA5C
 * Callers:
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18011B794 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall std::unique_ptr<CDrawListPrimitive>::operator=(
        void (__fastcall ****a1)(_QWORD, __int64),
        _QWORD *a2))(_QWORD, __int64)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  if ( a1 != a2 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        (**v4)(v4, 1LL);
      *a1 = v3;
    }
  }
  return a1;
}
