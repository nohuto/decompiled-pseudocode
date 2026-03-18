/*
 * XREFs of ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800BB820
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005D7C0 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x18011D688 (-PopClip@COcclusionContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(int *a1, _DWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0;
  v4 = (unsigned int)(v3 - 1);
  *a1 = v4;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v4);
  return 1;
}
