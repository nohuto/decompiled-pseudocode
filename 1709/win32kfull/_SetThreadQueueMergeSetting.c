/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1C01EF670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B5290 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = 87LL;
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    v6 = v4;
    if ( !v4 || (*(_DWORD *)(v4 + 1184) & 0x40000) != 0 )
    {
      v3 = 1444LL;
      goto LABEL_17;
    }
    v7 = *(_QWORD *)(v4 + 400);
    if ( v7 == PsGetCurrentProcessWin32Process(v5) )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v7) )
      {
        if ( (v2 & 1) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v6 + 408) + 384LL) != 1
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v6) )
          {
            v3 = 170LL;
            goto LABEL_17;
          }
          *(_DWORD *)(v6 + 464) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v6 + 464) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v3 = 50LL;
    }
    else
    {
      v3 = 5LL;
    }
  }
LABEL_17:
  UserSetLastError(v3, a2);
  return 0LL;
}
