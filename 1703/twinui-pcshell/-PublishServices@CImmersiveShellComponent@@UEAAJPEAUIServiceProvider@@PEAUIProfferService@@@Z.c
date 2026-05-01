/*
 * XREFs of ?PublishServices@CImmersiveShellComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18001E4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponent::PublishServices(
        CImmersiveShellComponent *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v5; // rdx
  int v6; // edi
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  char *v9; // r8
  void (__fastcall ***v10)(_QWORD, GUID *, char **); // rcx
  char *v11; // rcx
  char *v12; // rcx
  char *v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(CImmersiveShellComponent *, struct IServiceProvider *))(*(_QWORD *)this + 80LL))(
         this,
         a2);
  if ( v6 >= 0 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v7 >= *((_QWORD *)this + 3) )
        break;
      v9 = 0LL;
      v14 = 0LL;
      v10 = *(void (__fastcall ****)(_QWORD, GUID *, char **))(v8 + *((_QWORD *)this + 2) + 16);
      if ( v10 )
      {
        (**v10)(v10, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v14);
        v9 = v14;
        if ( v14 )
          continue;
      }
      if ( this != (CImmersiveShellComponent *)-8LL )
      {
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
        v9 = v14;
      }
      v11 = v9;
      v9 = (char *)this + 8;
      v14 = (char *)this + 8;
      if ( v11 )
      {
        (*(void (__fastcall **)(char *, __int64, char *))(*(_QWORD *)v11 + 16LL))(v11, v5, v9);
        v9 = v14;
      }
      v6 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, char *, __int64))a3->lpVtbl->ProfferService)(
             a3,
             v8 + *((_QWORD *)this + 2),
             v9,
             v8 + *((_QWORD *)this + 2) + 24);
      v12 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ++v7;
      v8 += 32LL;
    }
    while ( v6 >= 0 );
  }
  return (unsigned int)v6;
}
