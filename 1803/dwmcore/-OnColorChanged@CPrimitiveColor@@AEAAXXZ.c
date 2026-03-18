/*
 * XREFs of ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18019E2EC
 * Callers:
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x18019E380 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019E440 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveColor::OnColorChanged(CPrimitiveColor *this)
{
  __int64 i; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdi
  CD2DContext *v5; // rbx

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
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8, 0LL, 0LL);
}
