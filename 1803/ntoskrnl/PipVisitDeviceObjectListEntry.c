/*
 * XREFs of PipVisitDeviceObjectListEntry @ 0x1405CA38C
 * Callers:
 *     PipSortDeviceObjectList @ 0x1405C9E0C (PipSortDeviceObjectList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1405CA38C (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1405CA290 (PipIsDeviceInDeviceObjectList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1405CA38C (PipVisitDeviceObjectListEntry.c)
 *     PiGetDependentList @ 0x1405CC0AC (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x1407237C8 (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PipVisitDeviceObjectListEntry(__int64 *a1, unsigned int *a2, int *a3)
{
  int v4; // eax
  __int64 *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int *v10; // rcx
  _QWORD *v11; // rax
  _QWORD **DependentList; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD *v16; // rbp
  unsigned int *v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = *((_DWORD *)a1 + 4);
  v6 = a1;
  if ( (v4 & 2) == 0 )
  {
    *((_DWORD *)a1 + 4) = v4 | 2;
    v7 = *a1;
    if ( v7 )
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
    else
      v8 = 0LL;
    v9 = 0LL;
    v20 = v8;
    if ( *a2 )
    {
      do
      {
        v10 = &a2[4 * v9 + 4 + 2 * v9];
        v11 = *(_QWORD **)v10;
        v17 = v10;
        if ( v11 )
          v11 = *(_QWORD **)(v11[39] + 40LL);
        if ( v11[2] == v8 || (v11[81] & 0xFFFFFFFFFFFFFFFEuLL) == v8 )
        {
          PipVisitDeviceObjectListEntry(v10, a2, a3);
          v8 = v20;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *a2 );
      v7 = *v6;
    }
    DependentList = (_QWORD **)PiGetDependentList(v7);
    v13 = *DependentList;
    if ( *DependentList != DependentList )
    {
      v16 = DependentList;
      do
      {
        PiEnumerateDependentListEntry(v13, v18, &v20);
        v13 = (_QWORD *)*v13;
        if ( v18[0] && PipIsDeviceInDeviceObjectList(a2, v18[0], (__int64)&v17) )
          PipVisitDeviceObjectListEntry(v17, a2, a3);
      }
      while ( v13 != v16 );
      v6 = a1;
    }
    v14 = *a3;
    *((_DWORD *)v6 + 3) = *a3;
    *a3 = v14 + 1;
  }
  return 0LL;
}
