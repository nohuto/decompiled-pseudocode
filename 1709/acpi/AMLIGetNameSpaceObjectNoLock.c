/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64
 * Callers:
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(const char *Src, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v8; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v15, v14, v16);
  }
  if ( Src && *Src )
  {
    if ( a2 )
    {
      v8 = *a2;
      if ( (*(_BYTE *)(*a2 + 64) & 4) != 0 )
        return (unsigned int)-1073741738;
    }
    else
    {
      v8 = 0LL;
    }
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src, v8, (__int64)v18, a4);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v11 = v18[0];
      if ( v18[0] )
      {
        dword_1C00797B8 = 0;
        v12 = v18[0] + 120LL;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18[0] + 128LL));
          v11 = v18[0];
        }
        v13 = gdwfAMLI;
        *a3 = v12;
        if ( (v13 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 112), 0xFFFFFFFF) == 1 )
        {
          v17 = v18[0];
          *(_WORD *)(v18[0] + 64LL) |= 4u;
          if ( (*(_WORD *)(v17 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v17);
        }
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
    return (unsigned int)NameSpaceObjectNoLock;
  }
  return 3221225486LL;
}
