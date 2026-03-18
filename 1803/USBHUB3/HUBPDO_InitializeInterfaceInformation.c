/*
 * XREFs of HUBPDO_InitializeInterfaceInformation @ 0x1C00134C8
 * Callers:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C00136F8 (HUBPDO_ValidateSelectInterfaceUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall HUBPDO_InitializeInterfaceInformation(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  char v3; // r12
  char v4; // r14
  unsigned __int8 *v5; // r8
  unsigned int v8; // ebp
  unsigned __int8 *v9; // rdx
  int v10; // r11d
  unsigned int v11; // edi
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r10
  unsigned __int8 *v14; // rax
  _BYTE *v15; // r9
  __int64 v16; // rcx
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r8
  unsigned __int8 *v19; // rcx
  __int64 v20; // rcx
  __int64 result; // rax
  char *v22; // rdi
  __int64 v23; // r14
  int v24; // edx
  __int64 v25; // [rsp+28h] [rbp-40h]

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
      result = 0LL;
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
            LODWORD(v25) = v24;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0x23u,
              (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
              v25);
            v24 = *(_DWORD *)(v22 + 17);
            result = 3221245952LL;
          }
          if ( (v24 & 1) == 0 )
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
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        *a2,
        24 * (v20 + 1));
      result = 3221237760LL;
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
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
    result = 3221241856LL;
  }
  *a2 = v8;
  return result;
}
