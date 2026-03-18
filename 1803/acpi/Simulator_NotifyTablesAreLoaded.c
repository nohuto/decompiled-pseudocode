/*
 * XREFs of Simulator_NotifyTablesAreLoaded @ 0x1C009C064
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C009A488 (ACPIInitializeDDBs.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     Simulator_AllocAndInitTestData @ 0x1C004446C (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x1C0044E94 (Simulator_TestNotify.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 */

__int64 Simulator_NotifyTablesAreLoaded()
{
  __int64 v0; // rbx
  void *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *v4; // rax
  __int64 v5; // rcx
  _DWORD *inited; // rax
  void *v7; // rbx
  __int128 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF

  v10 = 0LL;
  *(_QWORD *)&v9 = 0x544D49530D1F5BA4LL;
  *((_QWORD *)&v9 + 1) = 0x68005446534D0D00LL;
  if ( !(unsigned int)CreateNameSpaceObject(gpheapGlobal, "MSLT", 0LL, 0LL, &v10, 0) )
  {
    v0 = v10;
    if ( v10 )
    {
      *(_WORD *)(v10 + 66) = 8;
      *(_DWORD *)(v0 + 88) = 222;
      v1 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xDEu);
      *(_QWORD *)(v0 + 96) = v1;
      if ( v1 )
      {
        memset(v1, 0, *(unsigned int *)(v0 + 88));
        *(_BYTE *)(*(_QWORD *)(v0 + 96) + 193LL) |= 1u;
        v2 = *(_QWORD *)(v0 + 96);
        *(_OWORD *)(v2 + 194) = v9;
        *(_DWORD *)(v2 + 210) = 218127373;
        *(_WORD *)(v2 + 214) = 2560;
        *(_BYTE *)(v2 + 216) = 0;
      }
    }
  }
  v10 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject(gpheapGlobal, "MSUT", 0LL, 0LL, &v10, 0) )
  {
    v3 = v10;
    if ( v10 )
    {
      *(_WORD *)(v10 + 66) = 8;
      *(_DWORD *)(v3 + 88) = 202;
      v4 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
      *(_QWORD *)(v3 + 96) = v4;
      if ( v4 )
      {
        memset(v4, 0, *(unsigned int *)(v3 + 88));
        *(_BYTE *)(*(_QWORD *)(v3 + 96) + 193LL) |= 1u;
        v5 = *(_QWORD *)(v3 + 96);
        *(_WORD *)(v5 + 194) = 10843;
        *(_BYTE *)(v5 + 196) = 104;
      }
    }
  }
  inited = Simulator_AllocAndInitTestData();
  v7 = inited;
  if ( !inited )
    return 3221225626LL;
  *inited = 1;
  inited[1] = 5;
  inited[2] = 1;
  *((_QWORD *)inited + 2) = gpnsNameSpaceRoot;
  Simulator_TestNotify(inited);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
