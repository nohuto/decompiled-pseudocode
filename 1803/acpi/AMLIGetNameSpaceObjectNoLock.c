/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C0043B68
 * Callers:
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004A2E0 (GetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(_BYTE *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 v9; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( !a1 || !*a1 )
    return 3221225486LL;
  if ( !a2 )
  {
    v9 = 0LL;
LABEL_10:
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(a1, v9, &v13, a4);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v11 = v13;
      if ( v13 )
      {
        dword_1C00677B8 = 0;
        v12 = v13 + 120;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 128));
          v11 = v13;
        }
        *a3 = v12;
        DereferenceObjectEx(v11);
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
    return (unsigned int)NameSpaceObjectNoLock;
  }
  v9 = *a2;
  if ( (*(_BYTE *)(*a2 + 64) & 4) == 0 )
    goto LABEL_10;
  return (unsigned int)-1073741738;
}
