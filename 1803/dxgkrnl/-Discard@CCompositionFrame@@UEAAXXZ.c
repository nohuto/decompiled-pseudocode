/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0011390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0010654 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  CLegacyTokenBuffer *v2; // rdx
  CCompositionFrame **v3; // rsi
  CCompositionFrame **v4; // rax
  CCompositionFrame *v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  __int64 v8; // rcx
  CCompositionFrame **v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  char *v14; // rbx

  if ( *((_QWORD *)this + 12) )
  {
    do
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD))this + 12))(*((_QWORD *)this + 12));
      v11 = (__int64 *)*((_QWORD *)this + 12);
      v12 = v10;
      v13 = *v11;
      LOBYTE(v13) = 1;
      (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 8))(v11, v13);
      *((_QWORD *)this + 12) = v12;
    }
    while ( v12 );
  }
  v2 = (CLegacyTokenBuffer *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 22) = 3;
  if ( v2 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 22), v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
  v3 = (CCompositionFrame **)((char *)this + 144);
  v4 = (CCompositionFrame **)*((_QWORD *)this + 18);
  if ( v4[1] != (CCompositionFrame *)((char *)this + 144) || (v5 = *v4, *((CCompositionFrame ***)*v4 + 1) != v4) )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == v3 )
      break;
    v9 = v4 - 1;
    (*((void (__fastcall **)(CCompositionFrame **))*(v4 - 1) + 7))(v4 - 1);
    (*(void (__fastcall **)(CCompositionFrame **, __int64))*v9)(v9, 1LL);
    v4 = (CCompositionFrame **)*v3;
    if ( *((CCompositionFrame ***)*v3 + 1) == v3 )
    {
      v5 = *v4;
      if ( *((CCompositionFrame ***)*v4 + 1) == v4 )
        continue;
    }
    __fastfail(3u);
  }
  v6 = (char *)this + 160;
  v7 = *(char **)v6;
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
    __fastfail(3u);
  while ( 1 )
  {
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    v14 = v7 - 40;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v7 - 1) + 56LL))(v7 - 8);
    ObfDereferenceObject(v14);
    v7 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) == v6 )
    {
      v8 = *(_QWORD *)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
        continue;
    }
    __fastfail(3u);
  }
}
