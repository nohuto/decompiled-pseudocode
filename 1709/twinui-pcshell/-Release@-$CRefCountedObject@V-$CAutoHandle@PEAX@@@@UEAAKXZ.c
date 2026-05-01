/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x1800172F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoHandle<void *>>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  char *v3; // rcx

  v2 = _InterlockedDecrement(Block + 4);
  if ( !v2 && Block )
  {
    v3 = (char *)*((_QWORD *)Block + 1);
    *((_QWORD *)Block + 1) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
    operator delete((void *)Block);
  }
  return v2;
}
