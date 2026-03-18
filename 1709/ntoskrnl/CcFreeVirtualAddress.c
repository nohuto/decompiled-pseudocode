/*
 * XREFs of CcFreeVirtualAddress @ 0x14007AE40
 * Callers:
 *     CcPinMappedData @ 0x1404A6710 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

int __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rax
  struct _KEVENT *v2; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(a1 + 16)) )
  {
    v2 = *(struct _KEVENT **)(v1 + 184);
    if ( v2 )
      LODWORD(v1) = KeSetEvent(v2, 0, 0);
  }
  return v1;
}
