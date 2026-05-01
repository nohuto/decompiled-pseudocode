/*
 * XREFs of CheckCachedCapability @ 0x1800012C4
 * Callers:
 *     HasExpandedResources @ 0x180001340 (HasExpandedResources.c)
 *     GetExpandedResourceExclusiveCpuCount @ 0x1800013C0 (GetExpandedResourceExclusiveCpuCount.c)
 *     ReleaseExclusiveCpuSets @ 0x180001480 (ReleaseExclusiveCpuSets.c)
 * Callees:
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x18000226C (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800024B0 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

__int64 CheckCachedCapability()
{
  int IsCurrentProcessStronglyNamed; // ebx
  bool *v1; // rdx
  CallerIdentity *v2; // rcx
  bool *v3; // r8
  char v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  IsCurrentProcessStronglyNamed = 0;
  EnterCriticalSection(&GmApiCriticalSection);
  if ( !dword_180006620 )
  {
    IsCurrentProcessStronglyNamed = CallerIdentity::IsCurrentProcessStronglyNamed((CallerIdentity *)&v5, v1);
    if ( IsCurrentProcessStronglyNamed >= 0 )
    {
      IsCurrentProcessStronglyNamed = CallerIdentity::CheckCallerCapability(v2, &v6, v3);
      if ( IsCurrentProcessStronglyNamed >= 0 )
      {
        if ( v5 && (_BYTE)v6 )
          dword_180006620 = 1;
        else
          IsCurrentProcessStronglyNamed = -2147024891;
      }
    }
  }
  LeaveCriticalSection(&GmApiCriticalSection);
  return (unsigned int)IsCurrentProcessStronglyNamed;
}
