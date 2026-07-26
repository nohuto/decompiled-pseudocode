/*
 * XREFs of ndisRemoveOpenWakeUpPattern @ 0x1C004B5A0
 * Callers:
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C004B2C0 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisRemoveOpenWakeUpPattern(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rdi
  __int64 v9; // r13
  const void *v10; // rcx
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+80h] [rbp+18h]
  int v17; // [rsp+88h] [rbp+20h]

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(0x25u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2, a3);
  if ( !a3 )
  {
    v6 = *(_DWORD **)(a1 + 496);
    v7 = 0LL;
    while ( v6 )
    {
      v8 = *(_DWORD **)(a2 + 40);
      if ( v8[4] == v6[16] && v8[2] == v6[14] )
      {
        v9 = (unsigned int)v6[15];
        v10 = *(const void **)(a2 + 40);
        v11 = (unsigned int)v8[3];
        v16 = v8[1];
        v12 = v6[13];
        v8[1] = 0;
        v6[13] = 0;
        v8[3] = 0;
        v13 = (unsigned int)v6[14];
        v6[15] = 0;
        v17 = v12;
        if ( !memcmp(v10, v6 + 12, v13 + 24) && !memcmp((char *)v8 + v11, (char *)v6 + v9 + 48, (unsigned int)v6[16]) )
        {
          v14 = *(_QWORD *)v6;
          if ( v7 )
            *v7 = v14;
          else
            *(_QWORD *)(a1 + 496) = v14;
          ExFreePoolWithTag(v6, 0);
          v8[3] = v11;
          break;
        }
        v8[3] = v11;
        v6[15] = v9;
        v8[1] = v16;
        v6[13] = v17;
      }
      v7 = v6;
      v6 = *(_DWORD **)v6;
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v15) = a3;
    WPP_SF_qqd(0x26u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2, v15);
  }
}
