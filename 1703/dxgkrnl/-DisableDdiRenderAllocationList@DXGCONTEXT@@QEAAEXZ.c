/*
 * XREFs of ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C0004C30
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGCONTEXT::DisableDdiRenderAllocationList(DXGCONTEXT *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_DWORD *)this + 54) & 1) == 0
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2224LL) & 8) == 0 )
  {
    return 0;
  }
  return v1;
}
