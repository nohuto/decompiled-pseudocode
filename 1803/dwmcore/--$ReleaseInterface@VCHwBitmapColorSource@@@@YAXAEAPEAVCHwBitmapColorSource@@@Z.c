/*
 * XREFs of ??$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1800CE214
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x1800CC1F0 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CHwBitmapColorSource>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
