/*
 * XREFs of NtFlipObjectConsumerBeginProcessPresent @ 0x1C004E830
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C004DE24 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerBeginProcessPresent(void *a1, unsigned int *a2, unsigned int *a3)
{
  FlipManagerObject *v6; // r15
  int v7; // eax
  int v8; // edi
  unsigned int v10; // [rsp+30h] [rbp-48h] BYREF
  FlipManagerObject *v11; // [rsp+38h] [rbp-40h]
  FlipManagerObject *v12; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    v11 = 0LL;
    v13 = 0;
    v10 = 0;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = 0;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0;
    KeEnterCriticalRegion();
    v12 = 0LL;
    v6 = 0LL;
    v7 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v12);
    v8 = v7;
    if ( v7 >= 0 )
      v6 = v12;
    v11 = v6;
    if ( v7 >= 0 )
    {
      v8 = FlipManagerObject::ConsumerBeginProcessPresent(v6, &v13, &v10);
      if ( v8 >= 0 )
      {
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = v13;
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = v10;
      }
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
