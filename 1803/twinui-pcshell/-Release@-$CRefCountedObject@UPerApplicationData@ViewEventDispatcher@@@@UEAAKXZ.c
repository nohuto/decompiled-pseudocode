/*
 * XREFs of ?Release@?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@UEAAKXZ @ 0x180091310
 * Callers:
 *     ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180031F34 (-_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCoun.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800912CC (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@M.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<ViewEventDispatcher::PerApplicationData>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v4 = (HSTRING)*((_QWORD *)a1 + 1);
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
