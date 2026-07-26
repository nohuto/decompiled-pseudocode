/*
 * XREFs of ndisOidPreNicSwitchCaps @ 0x1C00DA310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreNicSwitchCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // r14
  __int128 *v6; // rdx
  unsigned int v7; // eax
  __int128 v8; // xmm0
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x20u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, v5, v3);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x20u )
  {
    *(_DWORD *)(v3 + 56) = 32;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( !*((_DWORD *)a1 + 10) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v1 )
      goto LABEL_20;
    v6 = *(_DWORD *)(v3 + 32) == 66094 ? *(__int128 **)(v1 + 3576) : *(__int128 **)(v1 + 3584);
    if ( !v6 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      v7 = *(_DWORD *)(v3 + 48);
      v8 = *v6;
      if ( v7 >= 0x74 )
      {
        v11 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v11 = v8;
        *(_OWORD *)(v11 + 16) = v6[1];
        *(_OWORD *)(v11 + 32) = v6[2];
        *(_OWORD *)(v11 + 48) = v6[3];
        *(_OWORD *)(v11 + 64) = v6[4];
        *(_OWORD *)(v11 + 80) = v6[5];
        *(_OWORD *)(v11 + 96) = v6[6];
        if ( v7 >= 0x84 )
        {
          v13 = (_DWORD *)(v11 + 128);
          *((_OWORD *)v13 - 1) = v6[7];
          *v13 = *((_DWORD *)v6 + 32);
          *(_DWORD *)(v3 + 52) = 132;
        }
        else
        {
          *(_DWORD *)(v11 + 112) = *((_DWORD *)v6 + 28);
          v12 = *(_QWORD *)(v3 + 40);
          *(_BYTE *)(v12 + 1) = 2;
          *(_WORD *)(v12 + 2) = 116;
          *(_DWORD *)(v3 + 52) = 116;
        }
      }
      else
      {
        v9 = *(_OWORD **)(v3 + 40);
        *v9 = v8;
        v9[1] = v6[1];
        v10 = *(_QWORD *)(v3 + 40);
        *(_BYTE *)(v10 + 1) = 1;
        *(_WORD *)(v10 + 2) = 32;
        *(_DWORD *)(v3 + 52) = 32;
      }
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_20:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v16 = *((_DWORD *)a1 + 10);
    LODWORD(v15) = v4;
    WPP_SF_qqDD(0x21u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, v5, v15, v16);
  }
  return v4;
}
