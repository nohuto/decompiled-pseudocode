/*
 * XREFs of ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E0844
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00ABEA0 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00E0270 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2)
{
  char v2; // r15
  bool v4; // si
  __int64 i; // rcx
  __int64 v7; // r12
  __int64 *j; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // r13
  const void *v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  _QWORD *k; // rax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h]
  int v18; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x23u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v7 = *(_QWORD *)(i + 32);
  for ( j = *(__int64 **)(a1 + 960); ; j = (__int64 *)*j )
  {
    if ( !j )
      goto LABEL_24;
    v9 = *(_DWORD **)(a2 + 40);
    if ( v9[4] == *((_DWORD *)j + 16) && v9[2] == *((_DWORD *)j + 14) )
      break;
LABEL_12:
    ;
  }
  v10 = (unsigned int)v9[3];
  v11 = *(const void **)(a2 + 40);
  v16 = *((_DWORD *)j + 15);
  v17 = v9[1];
  v12 = *((_DWORD *)j + 13);
  v9[3] = 0;
  *((_DWORD *)j + 15) = 0;
  v9[1] = 0;
  v13 = *((unsigned int *)j + 14);
  *((_DWORD *)j + 13) = 0;
  v18 = v12;
  if ( memcmp(v11, j + 6, v13 + 24) || memcmp((char *)v9 + v10, (char *)j + v16 + 48, *((unsigned int *)j + 16)) )
  {
    v9[3] = v10;
    *((_DWORD *)j + 15) = v16;
    goto LABEL_12;
  }
  if ( v7 == j[3] )
  {
    v2 = 1;
    v4 = j[1] != 0;
  }
  else
  {
    for ( k = (_QWORD *)j[1]; k; k = (_QWORD *)*k )
    {
      if ( k[2] == v7 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  v9[3] = v10;
  *((_DWORD *)j + 15) = v16;
  v9[1] = v17;
  *((_DWORD *)j + 13) = v18;
  if ( !v2 )
LABEL_24:
    v4 = 1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x24u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  return v4;
}
