/*
 * XREFs of IoGetOplockFullFoExt @ 0x140024CBC
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD **)(a1 + 208);
    if ( v2 )
    {
      if ( v2 != IopRevocationExtension )
        return v2[7];
    }
  }
  return result;
}
