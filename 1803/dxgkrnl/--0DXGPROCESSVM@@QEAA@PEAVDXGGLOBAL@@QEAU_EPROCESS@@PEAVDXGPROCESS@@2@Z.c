/*
 * XREFs of ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0034284
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 * Callees:
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00F7B64 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C01B7E40 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::DXGPROCESSVM(
        DXGPROCESSVM *this,
        struct DXGGLOBAL *a2,
        struct _EPROCESS *const a3,
        struct DXGPROCESS *a4,
        struct DXGPROCESS *a5)
{
  char v7; // dl

  DXGPROCESS::DXGPROCESS(this, a2, a3);
  *((_BYTE *)this + 323) |= 8u;
  v7 = *((_BYTE *)this + 323);
  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 57) = a4;
  *((_BYTE *)this + 323) = v7 & 0xEF | (*(_QWORD *)(*((_QWORD *)a4 + 57) + 176LL) != 0LL ? 0x10 : 0);
  *((_QWORD *)this + 58) = a5;
  DXGPROCESS::SetWin32kInterface(this, *((const struct _DXGKWIN32KENG_INTERFACE *const *)a4 + 13));
  return this;
}
