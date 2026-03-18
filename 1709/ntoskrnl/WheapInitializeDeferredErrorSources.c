/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x140150C8C
 * Callers:
 *     WheaConfigureErrorSource @ 0x140428BF0 (WheaConfigureErrorSource.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     WheapInitializeErrorSource @ 0x1405D6C14 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_14038D838; v1 < dword_14038D834; ++v1 )
  {
    if ( *(_DWORD *)(i + 97) == a1
      && *(_BYTE *)(i + 88)
      && (int)WheapInitializeErrorSource(i) >= 0
      && (*((int (__fastcall **)(__int64, __int64, _QWORD))&unk_1403A2D88 + 6 * *(int *)(i + 40)))(
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
