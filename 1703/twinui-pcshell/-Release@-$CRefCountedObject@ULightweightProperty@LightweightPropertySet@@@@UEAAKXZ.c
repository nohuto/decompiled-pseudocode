/*
 * XREFs of ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x1800FD040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release(
        volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  HSTRING v3; // rcx

  v2 = _InterlockedDecrement(Block + 6);
  if ( !v2 && Block )
  {
    v3 = (HSTRING)*((_QWORD *)Block + 1);
    if ( v3 )
      WindowsDeleteString(v3);
    operator delete((void *)Block);
  }
  return v2;
}
