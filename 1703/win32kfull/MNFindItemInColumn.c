/*
 * XREFs of MNFindItemInColumn @ 0x1C0219268
 * Callers:
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 * Callees:
 *     MNFindNextValidItem @ 0x1C021936C (MNFindNextValidItem.c)
 */

__int64 __fastcall MNFindItemInColumn(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  int ValidItem; // r13d
  int v10; // ebp
  int v11; // r15d
  unsigned int v13; // eax
  int v14; // r9d
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 68);
  v5 = a2;
  v6 = -1;
  v7 = a3;
  ValidItem = MNFindNextValidItem(a1, 0xFFFFFFFFLL, a3, 0LL);
  if ( ValidItem != -1 )
  {
    v10 = 20000;
    v11 = 20000;
    if ( (unsigned int)v5 >= v4 )
      return 0xFFFFFFFFLL;
    v21 = *(_QWORD *)(a1 + 96);
    v22 = *(_DWORD *)(152 * v5 + v21 + 72);
    v20 = *(_DWORD *)(152 * v5 + v21 + 76);
    while ( v4 )
    {
      --v4;
      v13 = MNFindNextValidItem(a1, (unsigned int)v5, v7, 0LL);
      LODWORD(v5) = v13;
      if ( v13 == ValidItem || v13 == -1 )
        break;
      v15 = v21 + 152LL * v13;
      v16 = v22 - *(_DWORD *)(v15 + 72);
      v17 = v20 - *(_DWORD *)(v15 + 76);
      v18 = *(_DWORD *)(v15 + 72) - v22;
      if ( v16 >= 0 )
        v18 = v16;
      v19 = -v17;
      if ( v17 >= 0 )
        v19 = v17;
      if ( v19 < v10 && (a4 != v14 || v18) && v18 <= v11 )
      {
        v11 = v18;
        v10 = v19;
        v6 = v5;
      }
    }
  }
  return v6;
}
