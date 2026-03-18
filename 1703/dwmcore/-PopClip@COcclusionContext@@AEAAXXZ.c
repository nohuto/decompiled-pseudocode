/*
 * XREFs of ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180134788
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18009B5B0 (-Pop@COcclusionContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x18004D7A4 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 */

void __fastcall COcclusionContext::PopClip(COcclusionContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((int *)this + 238, &v3);
  v2 = *(_DWORD *)(v1 + 120);
  if ( v2 )
    *(_DWORD *)(v1 + 120) = v2 - 1;
}
