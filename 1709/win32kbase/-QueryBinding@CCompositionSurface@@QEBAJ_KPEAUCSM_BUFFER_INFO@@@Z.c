/*
 * XREFs of ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0039018
 * Callers:
 *     NtQueryCompositionSurfaceBinding @ 0x1C0085370 (NtQueryCompositionSurfaceBinding.c)
 *     NtUnBindCompositionSurface @ 0x1C008A230 (NtUnBindCompositionSurface.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::QueryBinding(CCompositionSurface *this, __int64 a2, struct CSM_BUFFER_INFO *a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  struct CCompositionBuffer *v5; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( !a2 )
    a2 = *((_QWORD *)this + 6);
  result = CCompositionSurface::FindBuffer(this, a2, &v5);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v5 + 40LL))(v5, v4);
  return result;
}
