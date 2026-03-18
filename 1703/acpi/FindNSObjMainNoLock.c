/*
 * XREFs of FindNSObjMainNoLock @ 0x1C001E46C
 * Callers:
 *     AMLIFindNameSpaceObject @ 0x1C001E344 (AMLIFindNameSpaceObject.c)
 * Callees:
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FindNSObj @ 0x1C0015FE0 (FindNSObj.c)
 *     _strupr_0 @ 0x1C002BFBE (_strupr_0.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall FindNSObjMainNoLock(char *Src, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int NSObj; // eax
  unsigned int v12; // ebx
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF

  if ( Src )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( Src[v8] );
    strupr_0(Src);
    if ( (unsigned int)v8 > 4 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      v15 = 1600085855;
      memmove(&v15, Src, (unsigned int)v8);
      if ( (a4 & 1) != 0 )
      {
        v9 = a2;
        v10 = a2;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 16);
        v9 = 0LL;
      }
      NSObj = FindNSObj(v15, a2, v10, v9, a3, a4);
      v12 = NSObj;
      if ( NSObj == -1073741772 )
      {
        if ( *(_DWORD *)(a3 + 24) )
          return 0;
      }
      else if ( NSObj == -1073741675 || NSObj == -1073741670 )
      {
        v14 = *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)(v14 + 16) )
        {
          HeapFree(*(_QWORD *)(v14 + 32));
          *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(a3 + 8) + 24LL) = 0;
        }
        if ( *(_QWORD *)(a3 + 16) )
        {
          HeapFree(*(_QWORD *)(a3 + 32));
          *(_QWORD *)(a3 + 16) = 0LL;
          *(_DWORD *)(a3 + 24) = 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1072431095;
  }
  return v12;
}
