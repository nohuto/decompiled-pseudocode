/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801661D0
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ @ 0x18000C334 (-EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  __int64 v3; // rax
  struct ID2D1PrivateCompositorBuffer *v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  struct CPrimitiveGroupDrawListGenerator *v8; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v4 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 69);
  v8 = 0LL;
  v5 = CPrimitiveGroupDrawListGenerator::Create(
         *(_QWORD *)(v3 + 400),
         *((struct ID2D1PrivateCompositorBuffer **)this + 68),
         v4,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x31Bu);
    if ( v8 )
      (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    *a2 = v8;
  }
  return v6;
}
