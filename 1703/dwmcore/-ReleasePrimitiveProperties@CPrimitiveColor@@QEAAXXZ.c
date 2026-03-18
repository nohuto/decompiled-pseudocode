/*
 * XREFs of ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x180024534
 * Callers:
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x180024730 (--1CPrimitiveColor@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801637B0 (-NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveColor::ReleasePrimitiveProperties(CPrimitiveColor *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v3 + 16), this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 8LL);
}
