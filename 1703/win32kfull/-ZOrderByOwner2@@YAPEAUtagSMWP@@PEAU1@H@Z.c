/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C001F4A0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C001F7EC (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C001F82C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C001FD34 (NextOwnedWindow.c)
 *     PWInsertAfter @ 0x1C001FF60 (PWInsertAfter.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020058 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // rbp
  struct tagSMWP *v3; // rdi
  __int64 v4; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 OwnedWindow; // rax
  struct tagWND *v9; // r12
  __int64 v10; // rbx
  struct tagWND *RealOwner; // rax
  struct tagWND *v12; // r10
  struct tagWND *v13; // r11
  struct tagWND *v14; // rsi
  __int64 v15; // r9
  struct tagSMWP *v16; // rax
  struct tagWND *v17; // rcx
  __int64 v18; // rcx
  __int64 i; // rcx
  struct tagWND *v20; // rcx
  struct tagWND *v21; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = 168LL * a2;
  if ( (*(_DWORD *)(v4 + v2 + 32) & 0x204) != 0 )
    return v3;
  v6 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)(v4 + v2));
  PWInsertAfter(*(_QWORD *)(v4 + v2 + 8));
  v7 = *(_QWORD *)(v6 + 104);
  OwnedWindow = NextOwnedWindow(0LL, v6, v7);
  v9 = *(struct tagWND **)(v6 + 120);
  v10 = 0LL;
  if ( !v9 && !OwnedWindow )
    return v3;
  RealOwner = (struct tagWND *)v6;
  do
    RealOwner = GetRealOwner(RealOwner);
  while ( RealOwner );
  v14 = v12;
  if ( !v12 )
    goto LABEL_10;
  if ( v12 == (struct tagWND *)1 )
  {
    for ( i = *(_QWORD *)(v7 + 112); i && (*(_BYTE *)(i + 60) & 0x20) == 0; i = *((_QWORD *)v20 + 11) )
    {
      if ( !(unsigned int)IsOwnee((struct tagWND *)i, v13) )
        v14 = v20;
    }
    if ( v14 == (struct tagWND *)1 )
      *(_DWORD *)(v4 + v2 + 32) |= 4u;
    goto LABEL_10;
  }
  if ( !(unsigned int)IsOwnee(v12, v13) )
  {
LABEL_10:
    if ( (*(_DWORD *)(v4 + v2 + 32) & 4) == 0 )
    {
      --*((_DWORD *)v3 + 7);
      v16 = AddSelfAndOwnees(
              v3,
              v13,
              (struct tagWND *)v6,
              v12,
              a2,
              *(_DWORD *)(v4 + v2 + 32) & 0x40000 | (*(_DWORD *)(v4 + v2 + 32) >> 7) & 0x400u);
      v3 = v16;
      if ( v16 )
      {
        if ( v14 )
          v10 = *(_QWORD *)v14;
        *(_QWORD *)(*((_QWORD *)v16 + 5) + v4 + 8) = v10;
      }
    }
    return v3;
  }
  if ( v15 )
  {
LABEL_17:
    v17 = *(struct tagWND **)(v7 + 112);
    v14 = 0LL;
    while ( v17 && !(unsigned int)IsOwnee(v17, v13) )
    {
      v14 = (struct tagWND *)v18;
      v17 = *(struct tagWND **)(v18 + 88);
    }
    goto LABEL_10;
  }
  v21 = v12;
  while ( v21 != v9 )
  {
    v21 = (struct tagWND *)*((_QWORD *)v21 + 11);
    if ( !v21 )
      goto LABEL_17;
  }
  return v3;
}
