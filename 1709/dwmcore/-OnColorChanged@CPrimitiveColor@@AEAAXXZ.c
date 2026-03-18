/*
 * XREFs of ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1800B62CC
 * Callers:
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B6550 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180174A2C (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveColor::OnColorChanged(CPrimitiveColor *this)
{
  __int64 i; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdi
  CD2DContext *v5; // rbx
  CGradientBrush *v6; // rcx
  __int64 (__fastcall *v7)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    v4 = *(_QWORD *)(v3 + 104);
    v5 = *(CD2DContext **)(*(_QWORD *)(v3 + 24) + 24LL);
    CD2DContext::EnsureBeginDraw(v5);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(**((_QWORD **)v5 + 23) + 48LL))(
      *((_QWORD **)v5 + 23),
      v4,
      (char *)this + 112);
  }
  v6 = (CPrimitiveColor *)((char *)this + 8);
  v7 = *(__int64 (__fastcall **)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)))(*((_QWORD *)this + 1) + 64LL);
  if ( v7 == CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(v6, 0, 0LL);
  else
    v7(v6, 0, 0LL);
}
