/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x180156158
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x18014D5FC (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z @ 0x1801560E4 (-FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CLightStack::Push(CLightStack *this, struct CCompositionLight *a2)
{
  char Light; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // si
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h]
  struct CCompositionLight *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  Light = CLightStack::FindLight(this, a2);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = Light;
  v7 = v12;
  v8 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v7 = v5 + 1;
  v9 = v8 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 5) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v13);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v5) = v13;
    *((_DWORD *)this + 6) = v7;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x23u);
  }
  else
  {
    (*(void (__fastcall **)(struct CCompositionLight *))(*(_QWORD *)v13 + 8LL))(v13);
    if ( !v6 )
      ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 9);
  }
  return (unsigned int)v9;
}
