/*
 * XREFs of NtUserGetAncestor @ 0x1C00D88F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00D8A00 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edi
  int v14; // edi
  __int64 DesktopWindow; // rax
  __int64 *v16; // rax

  EnterSharedCrit(0LL, 1LL);
  v5 = (__int64 *)ValidateHwnd(a1);
  if ( !v5 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87LL);
LABEL_28:
    v9 = 0LL;
    goto LABEL_27;
  }
  v8 = v5[3];
  v9 = 0LL;
  v4 = 0LL;
  if ( v8 )
    v4 = *(__int64 **)(v8 + 104);
  if ( v5 == v4 && a2 == 4 )
    goto LABEL_25;
  v4 = 0LL;
  if ( v8 )
  {
    v6 = *(__int64 **)(v8 + 8);
    if ( v6 )
      v4 = (__int64 *)v6[2];
  }
  if ( v5 != v4 )
  {
    v4 = 0LL;
    if ( v8 )
      v4 = *(__int64 **)(v8 + 104);
    if ( v5 != v4 )
    {
      v4 = (__int64 *)v5[13];
      if ( v4 )
      {
        if ( a2 == 2 )
        {
          while ( 1 )
          {
            v10 = v5[3];
            v4 = 0LL;
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 8);
              if ( v11 )
                v4 = *(__int64 **)(v11 + 16);
            }
            v6 = (__int64 *)v5[13];
            if ( v6 == v4 )
              break;
            v4 = 0LL;
            if ( v10 )
              v4 = *(__int64 **)(v10 + 104);
            if ( v6 == v4 )
              break;
            v5 = (__int64 *)v5[13];
          }
        }
        else
        {
          v12 = a2 - 1;
          if ( v12 )
          {
            v14 = v12 - 2;
            if ( v14 )
            {
              if ( v14 == 1 )
              {
                do
                {
                  DesktopWindow = GetDesktopWindow((__int64)v5);
                  if ( v4 == (__int64 *)DesktopWindow )
                    break;
                  v6 = (__int64 *)v5[3];
                  v16 = 0LL;
                  if ( v6 )
                    v16 = (__int64 *)v6[13];
                  if ( v5 == v16 )
                    break;
                  v5 = v4;
                  v4 = (__int64 *)v4[13];
                }
                while ( v4 );
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
            v5 = (__int64 *)v5[13];
          }
        }
LABEL_25:
        if ( v5 )
          v9 = *v5;
      }
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
