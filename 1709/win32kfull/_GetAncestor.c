/*
 * XREFs of _GetAncestor @ 0x1C0113990
 * Callers:
 *     HasMessageRootWindow @ 0x1C000BA90 (HasMessageRootWindow.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C008DE84 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0113800 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00DFF54 (_GetParent.c)
 */

__int64 __fastcall GetAncestor(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 DesktopWindow; // rax
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 Parent; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = a1;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 104);
  if ( a1 == v3 && a2 == 4 )
    return v4;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 != DesktopWindow )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 104);
    if ( v4 != v8 && *(_QWORD *)(v4 + 104) )
    {
      v9 = v6 - 1;
      if ( !v9 )
        return *(_QWORD *)(v4 + 104);
      v11 = v9 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            do
            {
              v13 = GetDesktopWindow(v4);
              if ( v14 == v13 )
                break;
              v15 = *(_QWORD *)(v4 + 24);
              v16 = 0LL;
              if ( v15 )
                v16 = *(_QWORD *)(v15 + 104);
              if ( v4 == v16 )
                break;
              v4 = v14;
            }
            while ( *(_QWORD *)(v14 + 104) );
          }
        }
        else
        {
          while ( 1 )
          {
            Parent = GetParent(v4);
            if ( !Parent )
              break;
            v4 = Parent;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = GetDesktopWindow(v4);
          if ( v18 == v17 )
            break;
          v20 = *(_QWORD *)(v4 + 24);
          v21 = 0LL;
          if ( v20 )
            v21 = *(_QWORD *)(v20 + 104);
          if ( v18 == v21 )
            break;
          v4 = v18;
        }
      }
      return v4;
    }
  }
  return 0LL;
}
