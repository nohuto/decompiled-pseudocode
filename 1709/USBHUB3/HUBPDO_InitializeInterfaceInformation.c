/*
 * XREFs of HUBPDO_InitializeInterfaceInformation @ 0x1C0012C40
 * Callers:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0012E78 (HUBPDO_ValidateSelectInterfaceUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall HUBPDO_InitializeInterfaceInformation(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  char v3; // r15
  char v4; // bp
  unsigned __int8 *v5; // r8
  unsigned int v8; // r14d
  unsigned __int8 *v9; // rdx
  int v10; // r11d
  unsigned int v11; // ebx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r10
  unsigned __int8 *v14; // rax
  _BYTE *v15; // r9
  __int64 v16; // rcx
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r8
  unsigned __int8 *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // edx
  char *v22; // rbx
  __int64 v23; // rbp
  int v24; // r8d
  __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *((_BYTE *)a2 + 3);
  v4 = *((_BYTE *)a2 + 2);
  v5 = (unsigned __int8 *)(a3 + 32);
  LOWORD(v8) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( *v5 < 9u )
    goto LABEL_37;
  if ( v5[1] != 2 )
    goto LABEL_37;
  v12 = *((_WORD *)v5 + 1);
  if ( v12 < 9u )
    goto LABEL_37;
  v13 = (unsigned __int64)&v5[v12];
  v14 = &v5[*v5];
  v15 = v14 + 2;
  if ( (unsigned __int64)(v14 + 2) > v13 )
    goto LABEL_37;
  do
  {
    v16 = *v14;
    v17 = &v14[v16];
    if ( (unsigned __int64)&v14[v16] > v13 || !(_BYTE)v16 )
      break;
    v18 = v14[1];
    if ( v18 == 4 )
    {
      if ( (unsigned __int8)v16 >= 9u )
      {
        if ( *v15 == v4 )
        {
          ++v10;
          if ( v9 )
            goto LABEL_24;
          v9 = v14;
          if ( v14[3] != v3 )
            v9 = 0LL;
        }
        else if ( v10 )
        {
          break;
        }
      }
    }
    else if ( v18 == 5 && v9 )
    {
      if ( (unsigned __int8)v16 < 7u )
      {
        v9 = 0LL;
        break;
      }
      ++v11;
    }
    v15 = v17 + 2;
    v14 += v16;
  }
  while ( (unsigned __int64)(v17 + 2) <= v13 );
  if ( !v9 )
    goto LABEL_37;
LABEL_24:
  v19 = 0LL;
  if ( v9[4] <= v11 )
    v19 = v9;
  if ( v19 )
  {
    v20 = v19[4];
    v8 = 24 * (v20 + 1);
    if ( *a2 >= v8 )
    {
      *((_DWORD *)a2 + 1) = 0;
      v21 = 0;
      *((_QWORD *)a2 + 1) = 0LL;
      *((_DWORD *)a2 + 4) = v20;
      if ( (_DWORD)v20 )
      {
        v22 = (char *)a2 + 27;
        v23 = v20;
        do
        {
          v24 = *(_DWORD *)(v22 + 17);
          *(_WORD *)(v22 - 1) = 0;
          *(_DWORD *)(v22 + 1) = 0;
          *(_QWORD *)(v22 + 5) = 0LL;
          if ( (v24 & 0xFFFFFFC0) != 0 )
          {
            LODWORD(v26) = v24;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0x23u,
              (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
              v26);
            v21 = -1073721344;
          }
          if ( (*(_DWORD *)(v22 + 17) & 1) == 0 )
            *(_WORD *)(v22 - 3) = 0;
          v22 += 24;
          --v23;
        }
        while ( v23 );
      }
    }
    else
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x22u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        *a2,
        24 * (v20 + 1));
      v21 = -1073729536;
    }
  }
  else
  {
LABEL_37:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      0x21u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    v21 = -1073725440;
  }
  *a2 = v8;
  return v21;
}
