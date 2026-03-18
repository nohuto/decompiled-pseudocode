/*
 * XREFs of SepSetTokenSessionById @ 0x1404A19EC
 * Callers:
 *     SepGetAnonymousToken @ 0x14003D7D8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SeSetSessionIdToken @ 0x14046E808 (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
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
