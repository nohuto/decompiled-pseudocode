/*
 * XREFs of ?ShutdownServices@CImmersiveShellComponent@@UEAAJPEAUIProfferService@@@Z @ 0x18001F330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellComponent::ShutdownServices(
        CImmersiveShellComponent *this,
        struct IProfferService *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = 32 * v2;
    do
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 3) + v6 - 16);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      ((void (__fastcall *)(struct IProfferService *, _QWORD))a2->lpVtbl->RevokeService)(
        a2,
        *(unsigned int *)(*((_QWORD *)this + 3) + v6 - 8));
      v8 = *((_QWORD *)this + 4);
      if ( v5 < v8 )
      {
        if ( v5 != v8 - 1 )
          memmove(
            (void *)(v6 + *((_QWORD *)this + 3) - 32LL),
            (const void *)(v6 + *((_QWORD *)this + 3)),
            32 * (v8 - v5) - 32);
        --*((_QWORD *)this + 4);
      }
      v6 -= 32LL;
      --v5;
      --v2;
    }
    while ( v2 );
  }
  return (*(__int64 (__fastcall **)(CImmersiveShellComponent *, struct IProfferService *))(*(_QWORD *)this + 88LL))(
           this,
           a2);
}
