/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKAEBU_GUID@@PEAPEAXPEAK@Z @ 0x180024090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // edi
  void **v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // rcx
  int v13; // esi
  unsigned int v14; // eax

  v5 = *((_DWORD *)this + 10);
  v6 = *((_DWORD *)this + 6);
  v11 = a4;
  if ( v6 + a2 < v5 )
    v5 = v6 + a2;
  while ( v6 < v5 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 4) + 8LL * v6);
    v13 = (**v12)(v12, a3, v11);
    if ( v13 < 0 )
    {
      while ( v11 > a4 )
      {
        --v11;
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v11 + 16LL))(*v11);
      }
      if ( a5 )
        *a5 = 0;
      return (unsigned int)v13;
    }
    ++v6;
    ++v11;
  }
  v14 = v6 - *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = v6;
  if ( a5 )
    *a5 = v14;
  return v14 < a2;
}
