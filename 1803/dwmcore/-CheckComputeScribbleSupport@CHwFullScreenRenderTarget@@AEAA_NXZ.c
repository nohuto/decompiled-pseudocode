/*
 * XREFs of ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ @ 0x1801F19A0
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801F1B40 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800DD20C (-IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0tttttttttt @ 0x1801F2514 (McTemplateU0tttttttttt.c)
 */

char __fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupport(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // r15
  int v2; // ebp
  _DWORD *v3; // r14
  unsigned __int8 v5; // r12
  char v6; // di
  char v7; // r13
  char v8; // si
  unsigned __int8 v9; // al
  char v10; // r8
  unsigned __int8 v11; // r9
  char v13; // [rsp+90h] [rbp+8h]

  v1 = *((_QWORD *)this + 30);
  v2 = 0;
  v3 = (_DWORD *)*((_QWORD *)this + 31);
  v5 = 0;
  if ( v1 )
    v5 = *(_BYTE *)(v1 + 232);
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 27) + 496LL))((char *)this + 216);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( v3 )
  {
    v6 = v3[40] < 2u;
    v7 = (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 224LL))(v3) == 0;
    v8 = (v3[39] & 0x2000480) != 33555584;
  }
  (*(void (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 112LL))(this);
  v9 = CComputeScribbleRenderer::IsGPUWhitelisted(*((const struct CD3DDeviceLevel1 **)this + 28)) ^ 1;
  if ( v1 && !v5 && !v13 && v3 && !v6 && !v7 && !v8 && !v10 && !v11 && !v9 )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v2) = v1 == 0;
    McTemplateU0tttttttttt(v9, v11, v2, v5, v13, v3 == 0LL, v6, v7, v8, v10, v11, v9);
  }
  return 0;
}
