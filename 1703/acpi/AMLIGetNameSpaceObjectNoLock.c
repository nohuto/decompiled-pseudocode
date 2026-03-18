/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C0017370
 * Callers:
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(_BYTE *Src, __int64 a2, _QWORD *a3)
{
  int NameSpaceObjectNoLock; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h]

  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v9, v8, v10, v11);
  }
  if ( !Src || !*Src )
    return 3221225486LL;
  if ( a2 && (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 4) != 0 )
  {
    return (unsigned int)-1073741738;
  }
  else
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v12 = (_QWORD *)v13;
      if ( v13 )
      {
        dword_1C00776F8 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 128));
          v12 = (_QWORD *)v13;
        }
        *a3 = v13 + 120;
        DereferenceObjectEx(v12);
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
  }
  return (unsigned int)NameSpaceObjectNoLock;
}
