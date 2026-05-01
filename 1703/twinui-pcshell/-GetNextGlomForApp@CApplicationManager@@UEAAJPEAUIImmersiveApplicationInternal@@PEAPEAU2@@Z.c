/*
 * XREFs of ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x18000E140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::GetNextGlomForApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v8; // edi
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct IImmersiveApplicationInternal *v11; // rax

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 47);
  v8 = -2147023728;
  if ( v4 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD))(*(_QWORD *)a2 + 168LL))(
               a2,
               *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v3)) )
    {
      if ( ++v3 >= v4 )
        return v8;
    }
    v9 = *((_QWORD *)this + 46);
    v10 = *(_QWORD *)(v9 + 8 * v3);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(struct IImmersiveApplicationInternal **)(v9 + 8 * v3);
    v8 = 0;
    *a3 = v11;
  }
  return v8;
}
