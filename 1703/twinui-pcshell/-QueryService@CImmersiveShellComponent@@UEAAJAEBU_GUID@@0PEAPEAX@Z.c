/*
 * XREFs of ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18001E780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponent::QueryService(
        CImmersiveShellComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rdi
  int v9; // esi
  __int64 v10; // rbx
  _QWORD *i; // rcx
  char *v12; // rbx

  v8 = (char *)this - 8;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( v9 < 0 )
  {
    v10 = 0LL;
    if ( *((_QWORD *)this + 2) )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 1); *(_QWORD *)&a2->Data1 != *i || *(_QWORD *)a2->Data4 != i[1]; i += 4 )
      {
        if ( (unsigned __int64)++v10 >= *((_QWORD *)this + 2) )
          return (unsigned int)(*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                                 v8,
                                 a2,
                                 a3,
                                 a4);
      }
      v12 = *(char **)(32 * v10 + *((_QWORD *)this + 1) + 16);
      if ( v12 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      else if ( v8 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
        v12 = v8;
      }
      v9 = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v12)(v12, a3, a4);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else
    {
      return (unsigned int)(*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                             v8,
                             a2,
                             a3,
                             a4);
    }
  }
  return (unsigned int)v9;
}
