/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7CA0
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C01E8AD0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0024530 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01E6D64 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 55);
  if ( v4 )
  {
    DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
    DxgkCompositionObject::Release(*((DxgkCompositionObject **)this + 55));
    *((_QWORD *)this + 55) = 0LL;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 55) = a2;
    DxgkCompositionObject::AddRef(a2);
    DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 55), *((struct _EPROCESS **)this + 7));
  }
}
