/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC
 * Callers:
 *     NtUserSetWindowBand @ 0x1C010F1D0 (NtUserSetWindowBand.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0057C4C (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 *     _lambda_83d541044935d6b78d321269d1803f89_::operator() @ 0x1C010F404 (_lambda_83d541044935d6b78d321269d1803f89_--operator().c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z @ 0x1C020BF98 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___(
        struct tagWND *a1,
        __int128 *a2)
{
  struct tagWND *i; // rdx
  __int64 v5; // r8
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v7 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v7 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      v5 = 0LL;
      if ( **((_DWORD **)a2 + 1) == 1 )
        v5 = -2LL;
      lambda_83d541044935d6b78d321269d1803f89_::operator()(*(_QWORD *)a2, NextComponentWindow, v5);
      v8 = *a2;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___(v7, &v8);
    }
  }
}
