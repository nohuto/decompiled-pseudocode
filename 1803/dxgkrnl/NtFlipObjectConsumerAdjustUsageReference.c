/*
 * XREFs of NtFlipObjectConsumerAdjustUsageReference @ 0x1C004E730
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C004DD90 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerAdjustUsageReference(FlipManagerObject *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r14
  FlipManagerObject *v6; // rdi
  int v7; // ebx
  FlipManagerObject *v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h]
  __int64 v11; // [rsp+88h] [rbp+20h]

  v10 = a3;
  v9 = a1;
  if ( a1 && a2 )
  {
    v11 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    KeEnterCriticalRegion();
    v9 = 0LL;
    v6 = 0LL;
    v7 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v9);
    if ( v7 >= 0 )
    {
      v6 = v9;
      v7 = FlipManagerObject::ConsumerAdjustUsageReference((struct _LIST_ENTRY *)v9, v5, a3 != 0);
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
