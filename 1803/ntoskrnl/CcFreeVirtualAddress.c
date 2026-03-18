/*
 * XREFs of CcFreeVirtualAddress @ 0x14011D860
 * Callers:
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     CcPinMappedData @ 0x1405B6940 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x1405B6B00 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
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
