/*
 * XREFs of ndisOidPreReceiveFilterCaps @ 0x1C00DA7F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreReceiveFilterCaps(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r15
  _WORD *v6; // rdx
  unsigned __int16 v7; // ax
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xAu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, v5, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x38u )
  {
    *(_DWORD *)(v3 + 56) = 56;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( *((_DWORD *)a1 + 10) )
    goto LABEL_22;
  if ( !v1 )
    goto LABEL_23;
  v6 = *(_DWORD *)(v3 + 32) == 66081 ? *(_WORD **)(v1 + 3552) : *(_WORD **)(v1 + 3560);
  if ( !v6 )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v7 = v6[1];
    v8 = v7;
    if ( v7 >= 0x54u )
      v8 = 84;
    if ( v8 >= *(_DWORD *)(v3 + 48) )
      v8 = *(_DWORD *)(v3 + 48);
    memmove(*(void **)(v3 + 40), v6, v8);
    v9 = *(_QWORD *)(v3 + 40);
    if ( v8 < 0x54 )
    {
      if ( v8 >= 0x38 )
      {
        *(_BYTE *)(v9 + 1) = 1;
        *(_WORD *)(v9 + 2) = 56;
      }
    }
    else
    {
      *(_BYTE *)(v9 + 1) = 2;
      *(_WORD *)(v9 + 2) = 84;
    }
    *(_DWORD *)(v3 + 52) = v8;
    *((_DWORD *)a1 + 10) = 0;
  }
LABEL_22:
  v4 = 1;
LABEL_23:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v12 = *((_DWORD *)a1 + 10);
    LODWORD(v11) = v4;
    WPP_SF_qqDD(0xBu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v1, v5, v11, v12);
  }
  return v4;
}
