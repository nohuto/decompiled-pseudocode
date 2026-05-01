/*
 * XREFs of ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180105BA8
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z @ 0x180105C90 (-Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z.c)
 *     ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z @ 0x180105CB0 (-Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x1801082C8 (-InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Clone(
        CEnumerableObjectCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  int v6; // edi
  _QWORD *v7; // rbx
  int v8; // r8d
  int v9; // eax

  *a3 = 0LL;
  v6 = -2147024882;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 8);
    v9 = *((_DWORD *)this + 7);
    *v7 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v7[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v7[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v7 + 6) = 1;
    *((_DWORD *)v7 + 7) = v9;
    *((_DWORD *)v7 + 8) = v8;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[8] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v6 = CEnumerableObjectCollection::InitializeClone(this, (struct CEnumerableObjectCollection *)v7);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(_QWORD *, const struct _GUID *, void **))*v7)(v7, a2, a3);
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
