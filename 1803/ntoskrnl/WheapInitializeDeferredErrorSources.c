/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x1402BE334
 * Callers:
 *     WheaConfigureErrorSource @ 0x14047CB90 (WheaConfigureErrorSource.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     WheapInitializeErrorSource @ 0x1406477E0 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_1403D17D0; v1 < dword_1403D17CC; ++v1 )
  {
    if ( *(_DWORD *)(i + 97) == a1
      && *(_BYTE *)(i + 88)
      && (int)WheapInitializeErrorSource(i) >= 0
      && (*((int (__fastcall **)(__int64, __int64, _QWORD))&unk_1403E9348 + 6 * *(int *)(i + 40)))(
           1LL,
           i + 89,
           *(_QWORD *)(i + 56)) >= 0 )
    {
      *(_DWORD *)(i + 101) = 2;
      *(_BYTE *)(i + 88) = 0;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
