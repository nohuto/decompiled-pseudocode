/*
 * XREFs of ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x180031500
 * Callers:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800322F0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<ViewEventRegistration>::Release(void *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx
  HSTRING v5; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 12);
  if ( !v2 && a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)a1 + 4);
    v4 = (HSTRING)*((_QWORD *)a1 + 2);
    if ( v4 )
      WindowsDeleteString(v4);
    v5 = (HSTRING)*((_QWORD *)a1 + 1);
    if ( v5 )
      WindowsDeleteString(v5);
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
