/*
 * XREFs of ValidateNewParent @ 0x1C0069E64
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsTopLevelParent @ 0x1C0069F1C (IsTopLevelParent.c)
 *     ProtectedContentAccessCheck @ 0x1C0069F44 (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C0069FE4 (ValidateParentDepth.c)
 */

__int64 __fastcall ValidateNewParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 i; // rax
  __int64 v7; // rcx

  if ( *(char *)(a1 + 59) >= 0 && *(char *)(a2 + 59) >= 0 && (unsigned int)ValidateParentDepth() )
  {
    if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v7 = 5LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(a2 + 24) == *(_QWORD *)(a1 + 24)
      && ((unsigned int)IsTopLevelParent(a2)
       || *(_DWORD *)(a2 + 320) == *(_DWORD *)(a1 + 320) && ((*(_BYTE *)(a2 + 306) ^ *(_BYTE *)(a1 + 306)) & 0x40) == 0) )
    {
      v4 = a2;
      while ( a1 != v4 )
      {
        v4 = *(_QWORD *)(v4 + 104);
        if ( !v4 )
        {
          for ( i = *(_QWORD *)(a2 + 120); i; i = *(_QWORD *)(i + 120) )
          {
            if ( a1 == i )
              goto LABEL_15;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_15:
  v7 = 87LL;
LABEL_16:
  UserSetLastError(v7);
  return 0LL;
}
