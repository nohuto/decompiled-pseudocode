/*
 * XREFs of ?GetDeviceInfo@CHwSurfaceRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18013D800
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceInfo(
        CHwSurfaceRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct _LUID *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, struct _LUID **))(*(_QWORD *)this + 256LL))(this, &v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2E7u);
  }
  else
  {
    *a2 = v9[91];
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)this + 29);
  }
  return v7;
}
