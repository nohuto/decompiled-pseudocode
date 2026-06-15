/*
 * XREFs of ??_GCHybridPropertyStore@@UEAAPEAXI@Z @ 0x1800EE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D69C (-InternalRelease@-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CHybridPropertyStore *__fastcall CHybridPropertyStore::`scalar deleting destructor'(
        CHybridPropertyStore *this,
        char a2)
{
  _QWORD *v4; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate(v4, (*((_QWORD *)this + 6) - (_QWORD)v4) / 20LL, 0x14uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
