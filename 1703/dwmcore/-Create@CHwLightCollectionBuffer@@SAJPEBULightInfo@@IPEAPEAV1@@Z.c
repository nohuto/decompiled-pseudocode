/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x1801999D4
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180156240 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z @ 0x180199F3C (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        struct CHwLightCollectionBuffer **a3)
{
  unsigned int v6; // edi
  char *v7; // rax
  CHwLightCollectionBuffer *v8; // rbx
  CHwLightCollectionBuffer *v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x210uLL);
  v8 = (CHwLightCollectionBuffer *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v7 + 4) = -1;
    memset_0(v7 + 32, 0, 0x1F0uLL);
  }
  else
  {
    v8 = 0LL;
  }
  v10 = v8;
  if ( v8 )
  {
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v8)(v8);
    CHwLightCollectionBuffer::UpdateLightInfo(v8, a1, a2);
    *a3 = v8;
    v10 = 0LL;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
  }
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)&v10);
  return v6;
}
