/*
 * XREFs of ??1DXGRESOURCE@@QEAA@XZ @ 0x1C009EFE8
 * Callers:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C002021C (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C74C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGRESOURCE::~DXGRESOURCE(DXGRESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx

  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGRESOURCE *)((char *)this + 80), a2, a3, a4);
}
