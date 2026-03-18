/*
 * XREFs of ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1801E4CDC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x1801EC224 (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DResource::MarkInvalid(CD2DResource *this)
{
  int v2; // edi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  v2 = *((_DWORD *)this + 20);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 8LL))(this);
  while ( v2 > 0 )
  {
    v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 7) + 8LL * (unsigned int)(v2 - 1));
    (**v3)(v3, (char *)this + 16);
    --v2;
  }
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 40LL))(this);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 16LL))(this);
}
