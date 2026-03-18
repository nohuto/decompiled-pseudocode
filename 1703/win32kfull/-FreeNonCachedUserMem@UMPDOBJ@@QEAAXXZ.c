/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0097CFC
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C0096E90 (FreeNonCachedUserMemWrap.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0097D40 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  if ( *((_DWORD *)this + 109) && *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    *((_QWORD *)this + 49) = 0LL;
  else
    UMPDOBJ::RemoveHeap(this);
}
