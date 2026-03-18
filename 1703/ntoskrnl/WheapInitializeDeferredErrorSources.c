/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x140152714
 * Callers:
 *     WheaConfigureErrorSource @ 0x140412950 (WheaConfigureErrorSource.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     WheapInitializeErrorSource @ 0x1405C47D4 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  __int64 v1; // rbx
  int i; // edi

  v1 = qword_14036F120;
  for ( i = 0; i < dword_14036F11C; ++i )
  {
    if ( *(_DWORD *)(v1 + 97) == a1
      && *(_BYTE *)(v1 + 88)
      && (int)WheapInitializeErrorSource(v1) >= 0
      && (*((int (__fastcall **)(__int64, __int64, _QWORD))&unk_1403877F8 + 6 * *(int *)(v1 + 40)))(
           1LL,
           v1 + 89,
           *(_QWORD *)(v1 + 56)) >= 0 )
    {
      *(_DWORD *)(v1 + 101) = 2;
      *(_BYTE *)(v1 + 88) = 0;
    }
    v1 = *(_QWORD *)v1;
  }
  return 0LL;
}
