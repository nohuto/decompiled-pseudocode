/*
 * XREFs of SepSetTokenSessionById @ 0x1404F0508
 * Callers:
 *     SepGetAnonymousToken @ 0x14009F040 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v6; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v6 = *(void **)(a1 + 1160);
        if ( v6 )
          ObfDereferenceObject(v6);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById();
      }
    }
  }
}
