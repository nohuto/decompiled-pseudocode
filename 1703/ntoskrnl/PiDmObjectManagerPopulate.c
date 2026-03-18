/*
 * XREFs of PiDmObjectManagerPopulate @ 0x1405BD940
 * Callers:
 *     PiDmInit @ 0x14081929C (PiDmInit.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x14004C720 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     _PnpGetObjectList @ 0x1404E853C (_PnpGetObjectList.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmObjectManagerPopulate(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int ObjectList; // edi
  _WORD *i; // rsi
  __int64 v8; // rax
  unsigned int **v10; // rax
  unsigned int **v11; // rbx
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *Buffer; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0x40000;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x5A706E50u);
    if ( !PoolWithTag )
      break;
    ObjectList = PnpGetObjectList(v3, *(_DWORD *)(a1 + 208), v4, v5, (__int64)PoolWithTag, v12, (__int64)&v12, 0x10000);
    if ( ObjectList != -1073741789 )
      goto LABEL_6;
  }
  ObjectList = -1073741670;
LABEL_6:
  if ( ObjectList >= 0 )
  {
    if ( v12 )
    {
      for ( i = PoolWithTag; *i; i += v8 + 1 )
      {
        ObjectList = PiDmObjectCreate(*(unsigned int *)(a1 + 208), i, &Buffer);
        if ( ObjectList < 0 )
          break;
        Buffer[8] |= 1u;
        Buffer[3] = 1;
        if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer, 8u, 0LL) )
        {
          PiDmObjectRelease(Buffer);
          ObjectList = -1073741670;
          break;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( i[v8] );
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( ObjectList < 0 )
  {
    while ( 1 )
    {
      v10 = (unsigned int **)RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), 1u);
      v11 = v10;
      if ( !v10 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), v10);
      PiDmObjectRelease(*v11);
    }
  }
  return (unsigned int)ObjectList;
}
