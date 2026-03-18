/*
 * XREFs of PnpInvalidateRelationsInList @ 0x1405E42E4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x1406C1CC0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     IopAddRelationToList @ 0x14055C790 (IopAddRelationToList.c)
 *     IopEnumerateRelations @ 0x14055D5A0 (IopEnumerateRelations.c)
 *     IopAllocateRelationList @ 0x14055D6D8 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x14055D79C (IopFreeRelationList.c)
 *     IopSetRelationsTag @ 0x1405E4690 (IopSetRelationsTag.c)
 */

__int64 __fastcall PnpInvalidateRelationsInList(unsigned int **a1, unsigned int a2, char a3, char a4)
{
  unsigned int **RelationList; // r14
  unsigned int *v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rax
  unsigned int *v12; // rax
  _QWORD *j; // rbx
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  int v20; // edx
  int v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF

  RelationList = (unsigned int **)IopAllocateRelationList(a2);
  if ( !RelationList )
    return 3221225626LL;
  v9 = *a1;
  for ( i = 0; i < **a1; v9 = *a1 )
  {
    v11 = i++;
    v9[6 * v11 + 8] &= ~1u;
  }
  v12 = *a1;
  v23 = 0LL;
  v12[2] = 0;
LABEL_5:
  while ( IopEnumerateRelations(a1, (int *)&v23, Object, &v21, &v22) )
  {
    if ( (!a3 || !v21) && !v22 )
    {
      for ( j = Object[0]; ; j = *(_QWORD **)(v18 + 32) )
      {
        if ( (unsigned int)IopSetRelationsTag(a1, j) )
        {
LABEL_11:
          if ( j )
            IopAddRelationToList(RelationList, (__int64)j, 2LL, 0);
          goto LABEL_5;
        }
        v16 = j[39];
        v17 = *(_QWORD *)(v16 + 40);
        if ( a4 )
        {
          PipClearDevNodeFlags(*(_QWORD *)(v16 + 40), 0x80000);
          v19 = *(_DWORD *)(v17 + 396);
          if ( (v19 & 0x10) != 0 )
          {
            if ( (v19 & 0x2000) != 0 && *(_DWORD *)(v17 + 404) == 47 )
            {
              v20 = 3;
            }
            else
            {
              if ( a2 != 4 )
                goto LABEL_17;
              v20 = 12;
            }
            PnpRequestDeviceAction(j, v20, 1, 0LL, 0LL, 0LL, 0LL);
          }
        }
LABEL_17:
        v18 = *(_QWORD *)(v17 + 16);
        if ( !v18 )
        {
          j = 0LL;
          goto LABEL_11;
        }
      }
    }
  }
  v23 = 0LL;
  while ( IopEnumerateRelations(RelationList, (int *)&v23, Object, 0LL, 0LL) )
    PnpRequestDeviceAction(Object[0], 9, 0, v14, 0LL, 0LL, 0LL);
  IopFreeRelationList(RelationList);
  return 0LL;
}
