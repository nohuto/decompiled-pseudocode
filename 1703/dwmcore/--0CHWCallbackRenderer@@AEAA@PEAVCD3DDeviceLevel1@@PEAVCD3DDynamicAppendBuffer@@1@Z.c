/*
 * XREFs of ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1@Z @ 0x18008F148
 * Callers:
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1PEAPEAV1@@Z @ 0x1800C8850 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DDynamicAppendBuffer@@1PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::CHWCallbackRenderer(
        CHWCallbackRenderer *this,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DDynamicAppendBuffer *a3,
        struct CD3DDynamicAppendBuffer *a4)
{
  char *v5; // rcx
  _QWORD *v6; // rdi
  _OWORD *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = a3;
  *((_QWORD *)this + 14) = a4;
  v5 = (char *)this + 128;
  *((_QWORD *)v5 + 14) = 0LL;
  v5[120] = 0;
  memset_0(v5, 0, 0x70uLL);
  v6 = (_QWORD *)((char *)this + 256);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  v7 = operator new(0x10uLL);
  if ( !v7 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *v6 = v7;
  *v7 = 0LL;
  *(_QWORD *)*v6 = v6;
  (***((void (__fastcall ****)(_QWORD))this + 13))(*((_QWORD *)this + 13));
  (***((void (__fastcall ****)(_QWORD))this + 14))(*((_QWORD *)this + 14));
  return this;
}
