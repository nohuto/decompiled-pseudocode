/*
 * XREFs of ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C0172F4C
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0178990 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0179770 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 * Callees:
 *     <none>
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(
        DXGK_VIRTUAL_GPU *this,
        struct ADAPTER_RENDER *a2,
        char a3)
{
  __int64 v3; // rax
  DXGK_VIRTUAL_GPU *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 18) = -1;
  if ( a3 )
    v3 = *((_QWORD *)a2 + 188);
  else
    v3 = *((_QWORD *)a2 + 187);
  *((_QWORD *)this + 11) = v3;
  result = this;
  *((_BYTE *)this + 112) = a3;
  return result;
}
