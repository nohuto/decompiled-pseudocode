/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x18001622C
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x18001632C (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        bool a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v8; // edi
  char *v9; // rax
  CHwLightCollectionBuffer *v10; // rbx
  CHwLightCollectionBuffer *v12; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x208uLL);
  v10 = (CHwLightCollectionBuffer *)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CHwLightCollectionBuffer::`vftable';
    *((_DWORD *)v9 + 4) = -1;
    memset_0(v9 + 20, 0, 0x1F4uLL);
  }
  else
  {
    v10 = 0LL;
  }
  v12 = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v10)(v10);
    CHwLightCollectionBuffer::UpdateLightInfo(v10, a1, a2, a3);
    *a4 = v10;
    v12 = 0LL;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u);
  }
  ReleaseInterface<CDisplay>(&v12);
  return v8;
}
