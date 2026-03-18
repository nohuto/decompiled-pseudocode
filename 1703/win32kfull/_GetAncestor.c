/*
 * XREFs of _GetAncestor @ 0x1C00178E0
 * Callers:
 *     HasMessageRootWindow @ 0x1C0006410 (HasMessageRootWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0015BE0 (NtUserShutdownBlockReasonCreate.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C001AD5C (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00D8A00 (_GetParent.c)
 */

__int64 __fastcall GetAncestor(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 DesktopWindow; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 104);
  if ( a1 == v3 && a2 == 4 )
    return a1;
  v4 = ((__int64 (*)(void))GetDesktopWindow)();
  if ( a1 != v4 )
  {
    v7 = 0LL;
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 104);
    if ( a1 != v7 && *(_QWORD *)(a1 + 104) )
    {
      v8 = v5 - 1;
      if ( !v8 )
        return *(_QWORD *)(a1 + 104);
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 == 1 )
          {
            do
            {
              DesktopWindow = GetDesktopWindow(a1, v11);
              if ( v13 == DesktopWindow )
                break;
              v11 = *(_QWORD *)(a1 + 24);
              v14 = 0LL;
              if ( v11 )
                v14 = *(_QWORD *)(v11 + 104);
              if ( a1 == v14 )
                break;
              a1 = v13;
            }
            while ( *(_QWORD *)(v13 + 104) );
          }
        }
        else
        {
          while ( GetParent() )
            ;
        }
      }
      else
      {
        while ( 1 )
        {
          v15 = GetDesktopWindow(a1, *(_QWORD *)(a1 + 104));
          if ( v16 == v15 )
            break;
          v17 = *(_QWORD *)(a1 + 24);
          v18 = 0LL;
          if ( v17 )
            v18 = *(_QWORD *)(v17 + 104);
          if ( v16 == v18 )
            break;
          a1 = v16;
        }
      }
      return a1;
    }
  }
  return 0LL;
}
