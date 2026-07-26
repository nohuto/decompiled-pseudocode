/*
 * XREFs of ndisPreRemoveOpenWakeUpPattern @ 0x1C00E09C4
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00E0270 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisPreRemoveOpenWakeUpPattern(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  __int64 *i; // rbx
  _DWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // r15
  const void *v9; // rcx
  __int64 v10; // r12
  int v11; // r13d
  __int64 v12; // r8
  int v14; // [rsp+60h] [rbp+8h]

  v4 = 1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x21u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  for ( i = *(__int64 **)(a1 + 496); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_12;
    }
    v6 = *(_DWORD **)(a2 + 40);
    if ( v6[4] == *((_DWORD *)i + 16) && v6[2] == *((_DWORD *)i + 14) )
      break;
LABEL_9:
    ;
  }
  v7 = *((_DWORD *)i + 13);
  v8 = (unsigned int)v6[3];
  v9 = *(const void **)(a2 + 40);
  v10 = *((unsigned int *)i + 15);
  v6[3] = 0;
  v11 = v6[1];
  *((_DWORD *)i + 15) = 0;
  v6[1] = 0;
  v12 = *((unsigned int *)i + 14);
  *((_DWORD *)i + 13) = 0;
  v14 = v7;
  if ( memcmp(v9, i + 6, v12 + 24) || memcmp((char *)v6 + v8, (char *)i + v10 + 48, *((unsigned int *)i + 16)) )
  {
    v6[3] = v8;
    *((_DWORD *)i + 15) = v10;
    v6[1] = v11;
    *((_DWORD *)i + 13) = v14;
    goto LABEL_9;
  }
  v6[3] = v8;
  *((_DWORD *)i + 15) = v10;
  *(_DWORD *)(a2 + 152) = *((_DWORD *)i + 10);
LABEL_12:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(0x22u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2, v4);
  return v4;
}
