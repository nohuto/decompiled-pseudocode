/*
 * XREFs of XFilterAdjust @ 0x1C001CA48
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C001C84C (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C00488C8 (ndisSetRestorePacketFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XFilterAdjust(__int64 *a1, __int64 a2, int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx
  __int64 i; // rdx
  __int64 j; // rdx

  if ( a2 )
  {
    if ( a3 && (a3 & 0x10080) == 0x10080 )
      a3 &= ~0x10000u;
    *(_DWORD *)(a2 + 436) = *(_DWORD *)(a2 + 432);
    *(_DWORD *)(a2 + 432) = a3;
  }
  v4 = *((_DWORD *)a1 + 76);
  *((_DWORD *)a1 + 76) = 0;
  v5 = *a1;
  *((_DWORD *)a1 + 77) = v4;
  v6 = 0;
  v7 = 0;
  while ( v5 )
  {
    v6 = v7 | *(_DWORD *)(v5 + 432);
    *((_DWORD *)a1 + 76) = v6;
    v7 = v6;
    v5 = *(_QWORD *)(v5 + 424);
  }
  for ( i = a1[1]; i; i = *(_QWORD *)(i + 424) )
  {
    v6 = v7 | *(_DWORD *)(i + 432);
    *((_DWORD *)a1 + 76) = v6;
    v7 = v6;
  }
  for ( j = a1[2]; j; j = *(_QWORD *)(j + 424) )
  {
    v6 = v7 | *(_DWORD *)(j + 432);
    *((_DWORD *)a1 + 76) = v6;
    v7 = v6;
  }
  if ( (v6 & 0x10000) != 0 )
    *((_DWORD *)a1 + 76) = v6 & 0xFFFEFFFF;
  return 259LL;
}
