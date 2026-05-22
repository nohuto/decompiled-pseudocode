/*
 * XREFs of ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180039E28
 * Callers:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18005FCF4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x18005FE60 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ?SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z @ 0x18005FF54 (-SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::deque<RayStabilizationResult>::_Tidy(_QWORD *a1)
{
  __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  while ( a1[4] )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4);
  }
  v5 = a1[1];
  if ( v5 )
  {
    v6 = a1[2];
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_16:
        operator delete((void *)v5);
        goto LABEL_17;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_16;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
    JUMPOUT(0x180039ED0LL);
  }
LABEL_17:
  a1[2] = 0LL;
  a1[1] = 0LL;
}
