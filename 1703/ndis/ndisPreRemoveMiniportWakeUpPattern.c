/*
 * XREFs of ndisPreRemoveMiniportWakeUpPattern @ 0x1C00D63C8
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00D5840 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00D5DE0 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2)
{
  char v2; // r12
  bool v4; // si
  char v6; // r14
  __int64 i; // rcx
  __int64 *v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // r13
  const void *v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  _QWORD *j; // rax
  unsigned int v16; // [rsp+70h] [rbp+8h]
  int v17; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v4 = 0;
  v6 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0x23u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, a2);
    v6 = byte_1C0092612;
  }
  for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v8 = *(__int64 **)(a1 + 960);
  v19 = *(_QWORD *)(i + 32);
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_24;
    v9 = *(_DWORD **)(a2 + 40);
    if ( v9[4] == *((_DWORD *)v8 + 16) && v9[2] == *((_DWORD *)v8 + 14) )
      break;
LABEL_12:
    v8 = (__int64 *)*v8;
  }
  v10 = (unsigned int)v9[3];
  v11 = *(const void **)(a2 + 40);
  v16 = *((_DWORD *)v8 + 15);
  v17 = v9[1];
  v12 = *((_DWORD *)v8 + 13);
  v9[3] = 0;
  *((_DWORD *)v8 + 15) = 0;
  v9[1] = 0;
  v13 = *((unsigned int *)v8 + 14);
  *((_DWORD *)v8 + 13) = 0;
  v18 = v12;
  if ( memcmp(v11, v8 + 6, v13 + 24) || memcmp((char *)v9 + v10, (char *)v8 + v16 + 48, *((unsigned int *)v8 + 16)) )
  {
    v9[3] = v10;
    *((_DWORD *)v8 + 15) = v16;
    goto LABEL_12;
  }
  if ( v19 == v8[3] )
  {
    v2 = 1;
    v4 = v8[1] != 0;
  }
  else
  {
    for ( j = (_QWORD *)v8[1]; j; j = (_QWORD *)*j )
    {
      if ( j[2] == v19 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  v9[3] = v10;
  *((_DWORD *)v8 + 15) = v16;
  v9[1] = v17;
  *((_DWORD *)v8 + 13) = v18;
  if ( !v2 )
LABEL_24:
    v4 = 1;
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qq(0x24u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, a2);
  return v4;
}
