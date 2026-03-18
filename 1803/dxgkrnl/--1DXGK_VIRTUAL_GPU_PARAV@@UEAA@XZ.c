/*
 * XREFs of ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C002D0B4
 * Callers:
 *     ??_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z @ 0x1C002D100 (--_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(DXGK_VIRTUAL_GPU_PARAV *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
}
