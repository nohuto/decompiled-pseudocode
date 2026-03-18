/*
 * XREFs of SepSetTokenSessionById @ 0x14048C960
 * Callers:
 *     SepGetAnonymousToken @ 0x140101C60 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140563A28 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rcx

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
        v7 = *(void **)(a1 + 1160);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(a2);
      }
    }
  }
}
