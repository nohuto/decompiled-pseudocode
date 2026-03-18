/*
 * XREFs of PipVisitDeviceObjectListEntry @ 0x14056F530
 * Callers:
 *     PipSortDeviceObjectList @ 0x14056F488 (PipSortDeviceObjectList.c)
 *     PipVisitDeviceObjectListEntry @ 0x14056F530 (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PiGetDependentList @ 0x1404D9EF4 (PiGetDependentList.c)
 *     PipVisitDeviceObjectListEntry @ 0x14056F530 (PipVisitDeviceObjectListEntry.c)
 *     PipIsDeviceInDeviceObjectList @ 0x14056F9B0 (PipIsDeviceInDeviceObjectList.c)
 *     PiEnumerateDependentListEntry @ 0x140692AAC (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PipVisitDeviceObjectListEntry(__int64 *a1, _DWORD *a2, int *a3)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 *DependentList; // rbp
  __int64 *v11; // rdi
  int v12; // eax
  _QWORD *v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+50h] [rbp+8h]
  char v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = a1;
  v14 = 0LL;
  v4 = *((_DWORD *)a1 + 4);
  if ( (v4 & 2) == 0 )
  {
    *((_DWORD *)a1 + 4) = v4 | 2;
    if ( *a1 )
      v6 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
    else
      v6 = 0LL;
    v7 = 0LL;
    if ( *a2 )
    {
      do
      {
        v8 = &a2[4 * v7 + 4 + 2 * v7];
        v9 = (_QWORD *)*v8;
        v14 = v8;
        if ( v9 )
          v9 = *(_QWORD **)(v9[39] + 40LL);
        if ( v9[2] == v6 || (v9[81] & 0xFFFFFFFFFFFFFFFEuLL) == v6 )
          PipVisitDeviceObjectListEntry(v8, a2, a3);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *a2 );
      a1 = v16;
    }
    DependentList = PiGetDependentList(*a1);
    v11 = (__int64 *)*DependentList;
    while ( v11 != DependentList )
    {
      PiEnumerateDependentListEntry(v11, v15, &v17);
      v11 = (__int64 *)*v11;
      if ( v15[0] && (unsigned __int8)PipIsDeviceInDeviceObjectList(a2, v15[0], &v14) )
        PipVisitDeviceObjectListEntry(v14, a2, a3);
    }
    v12 = *a3;
    *((_DWORD *)v16 + 3) = *a3;
    *a3 = v12 + 1;
  }
  return 0LL;
}
