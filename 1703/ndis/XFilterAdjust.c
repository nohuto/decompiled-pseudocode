/*
 * XREFs of XFilterAdjust @ 0x1C001C03C
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C001BE70 (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C004A240 (ndisSetRestorePacketFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XFilterAdjust(__int64 *a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  int v8; // edx
  int v9; // eax
  int v11; // edx

  if ( a2 )
  {
    if ( a3 && (a3 & 0x10080) == 0x10080 )
      a3 &= ~0x10000u;
    *(_DWORD *)(a2 + 436) = *(_DWORD *)(a2 + 432);
    *(_DWORD *)(a2 + 432) = a3;
  }
  v3 = *((_DWORD *)a1 + 76);
  *((_DWORD *)a1 + 76) = 0;
  *((_DWORD *)a1 + 77) = v3;
  v4 = *a1;
  if ( *a1 )
  {
    v11 = 0;
    do
    {
      v11 |= *(_DWORD *)(v4 + 432);
      *((_DWORD *)a1 + 76) = v11;
      v4 = *(_QWORD *)(v4 + 424);
    }
    while ( v4 );
  }
  v5 = a1[1];
  if ( v5 )
  {
    v6 = *((_DWORD *)a1 + 76);
    do
    {
      v6 |= *(_DWORD *)(v5 + 432);
      *((_DWORD *)a1 + 76) = v6;
      v5 = *(_QWORD *)(v5 + 424);
    }
    while ( v5 );
  }
  v7 = a1[2];
  if ( v7 )
  {
    v8 = *((_DWORD *)a1 + 76);
    do
    {
      v8 |= *(_DWORD *)(v7 + 432);
      *((_DWORD *)a1 + 76) = v8;
      v7 = *(_QWORD *)(v7 + 424);
    }
    while ( v7 );
  }
  v9 = *((_DWORD *)a1 + 76);
  if ( (v9 & 0x10000) != 0 )
    *((_DWORD *)a1 + 76) = v9 & 0xFFFEFFFF;
  return 259LL;
}
