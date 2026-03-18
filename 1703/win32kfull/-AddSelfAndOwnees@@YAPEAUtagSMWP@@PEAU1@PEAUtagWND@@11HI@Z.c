/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C001F82C
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C001F4A0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C001F82C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C001F82C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     NextOwnedWindow @ 0x1C001FD34 (NextOwnedWindow.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020058 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagWND *v6; // r9
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rsi
  __int64 OwnedWindow; // rax
  struct tagSMWP *v10; // r10
  struct tagWND *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  struct tagWND *RealOwner; // rax
  struct tagSMWP *v17; // rax
  int v18; // [rsp+50h] [rbp-28h]

  v6 = a2;
  v7 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v7);
      if ( v6 == RealOwner )
        break;
      v7 = RealOwner;
    }
    while ( RealOwner );
  }
  v8 = 0LL;
  v18 = 0;
  while ( 1 )
  {
    OwnedWindow = NextOwnedWindow(v8, v6, *((_QWORD *)v6 + 13));
    v8 = (struct tagWND *)OwnedWindow;
    if ( !OwnedWindow )
      break;
    if ( !v7 )
      goto LABEL_10;
    if ( !v18 )
    {
      if ( v11 )
      {
        if ( v11 != (struct tagWND *)1 )
        {
          while ( (struct tagWND *)OwnedWindow != v11 )
          {
            OwnedWindow = *(_QWORD *)(OwnedWindow + 88);
            if ( !OwnedWindow )
              goto LABEL_21;
          }
        }
      }
      else
      {
LABEL_21:
        v10 = AddSelfAndOwnees(v10, v7, a3, v11, a5, a6);
        if ( !v10 )
          return 0LL;
        v18 = 1;
      }
    }
    if ( v8 != v7 )
LABEL_10:
      v10 = AddSelfAndOwnees(v10, v8, 0LL, 0LL, a5, a6);
    if ( !v10 )
      return 0LL;
    v6 = a2;
  }
  if ( v7 )
  {
    if ( !v18 )
    {
      v17 = AddSelfAndOwnees(v10, v7, a3, v11, a5, a6);
      LODWORD(v10) = (_DWORD)v17;
      if ( !v17 )
        return 0LL;
    }
  }
  v12 = DeferWindowPos((_DWORD)v10, (_DWORD)a2, 0, 0, 0, 0, 0, a6 | 0x13, 0);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = *(_DWORD *)(v12 + 28) - 1;
  if ( a5 != v14 )
    *(_QWORD *)(*(_QWORD *)(v13 + 40) + 168LL * v14 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 168LL * v14 - 168);
  return (struct tagSMWP *)v13;
}
