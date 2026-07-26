/*
 * XREFs of ndisValidateQosParameters @ 0x1C0047B00
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C005F8B4 (ndisMIndicateQosParametersChange.c)
 *     ndisOidPreQosSetParameters @ 0x1C00DCB30 (ndisOidPreQosSetParameters.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     WPP_SF_DDDDDDDDDDD @ 0x1C0040710 (WPP_SF_DDDDDDDDDDD.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_DDD @ 0x1C00429C4 (WPP_SF_DDD.c)
 *     WPP_SF_DDDD @ 0x1C0042A14 (WPP_SF_DDDD.c)
 *     WPP_SF_LLL @ 0x1C0042AC4 (WPP_SF_LLL_ea_1C0042AC4.c)
 *     WPP_SF_LLLL @ 0x1C0042B1C (WPP_SF_LLLL.c)
 *     WPP_SF_LLLLLLq @ 0x1C0042B80 (WPP_SF_LLLLLLq.c)
 *     WPP_SF_qDqLq @ 0x1C0042C20 (WPP_SF_qDqLq.c)
 *     WPP_SF_qDqLqD @ 0x1C0042C8C (WPP_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  unsigned __int8 v7; // di
  __int64 v8; // r15
  _DWORD *v9; // r9
  int v11; // r13d
  unsigned int v12; // r8d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r11d
  unsigned int v17; // r10d
  unsigned __int8 *v18; // r14
  unsigned __int8 v19; // al
  unsigned int v20; // r8d
  char v21; // al
  int v22; // r9d
  unsigned __int16 v23; // cx
  unsigned __int8 v24; // al
  unsigned __int16 v25; // cx
  int v26; // r9d
  int v27; // r9d
  unsigned __int16 v28; // cx
  __int64 v29; // r11
  __int64 v30; // r10
  unsigned __int64 v31; // rax
  unsigned int v32; // r9d
  signed int v33; // r8d
  unsigned int v34; // eax
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // [rsp+A0h] [rbp+8h]

  v37 = a1;
  v7 = a2;
  v8 = a1;
  if ( (unsigned __int8)byte_1C0098752 >= 5u )
    WPP_SF_qDqLq(a1, a2, a1, (unsigned __int8)a2);
  if ( a5 )
    *a5 = 52;
  v9 = *(_DWORD **)(v8 + 4944);
  if ( !v9 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 5u )
      WPP_SF_(0x88u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids);
    return 3221225659LL;
  }
  v11 = a3[1];
  if ( (v11 & 2) != 0 )
  {
    v12 = a3[2];
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    if ( !v12 || v7 && v12 > v9[2] )
    {
      if ( !v7 )
      {
        if ( (unsigned __int8)byte_1C0098752 >= 5u )
          WPP_SF_(0x8Au, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids);
        return 3221291029LL;
      }
      if ( (unsigned __int8)byte_1C0098752 < 5u )
        return 3221291029LL;
      v27 = v9[2];
      v28 = 137;
    }
    else
    {
      v17 = 0;
      v18 = (unsigned __int8 *)(a3 + 3);
      do
      {
        v19 = *v18;
        if ( *v18 >= 8u )
        {
          if ( (unsigned __int8)byte_1C0098752 >= 5u )
          {
            v26 = v19;
            v25 = 139;
            v20 = v17;
LABEL_53:
            WPP_SF_DDD(v25, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v20, v26);
          }
          return 3221291029LL;
        }
        if ( !_bittest(&v13, v19) )
        {
          v13 |= 1 << v19;
          v14 = (unsigned int)(v14 + 1);
          if ( *((_BYTE *)a3 + v19 + 28) == 2 )
            v15 = (unsigned int)(v15 + 1);
        }
        ++v17;
        ++v18;
      }
      while ( v17 < 8 );
      if ( (unsigned int)v14 <= v12 && (!v7 || (unsigned int)v15 <= v9[3]) )
      {
        v20 = 0;
        a1 = 0LL;
        a2 = 8LL;
        do
        {
          if ( _bittest(&v13, v20) )
          {
            v21 = *((_BYTE *)a3 + a1 + 28);
            if ( v21 )
            {
              if ( v21 != 2 )
              {
                if ( (unsigned __int8)byte_1C0098752 >= 5u )
                {
                  v23 = 145;
                  v22 = *((unsigned __int8 *)a3 + v20 + 28);
LABEL_31:
                  WPP_SF_DDDD(v23, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v20, v22);
                  return 3221291029LL;
                }
                return 3221291029LL;
              }
              v24 = *((_BYTE *)a3 + a1 + 20);
              if ( !v24 )
              {
                if ( (unsigned __int8)byte_1C0098752 >= 5u )
                  WPP_SF_dd(0x90u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v20, v20);
                return 3221291029LL;
              }
              v16 += v24;
            }
            else if ( v7 && (v9[1] & 1) == 0 || *((_BYTE *)a3 + a1 + 20) )
            {
              if ( v7 )
              {
                if ( (unsigned __int8)byte_1C0098752 < 5u )
                  return 3221291029LL;
                v22 = v9[1];
                v23 = 142;
                goto LABEL_31;
              }
              if ( (unsigned __int8)byte_1C0098752 >= 5u )
              {
                v25 = 143;
                v26 = v20;
                goto LABEL_53;
              }
              return 3221291029LL;
            }
          }
          ++v20;
          ++a1;
        }
        while ( v20 < 8 );
        if ( !v16 || v16 == 100 )
        {
          v8 = v37;
          goto LABEL_62;
        }
        if ( (unsigned __int8)byte_1C0098752 >= 5u )
          WPP_SF_d(0x92u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v16);
        return 3221291029LL;
      }
      if ( v7 )
      {
        if ( (unsigned __int8)byte_1C0098752 >= 5u )
          WPP_SF_LLLL(v15, v14, v14, v12);
        return 3221291029LL;
      }
      if ( (unsigned __int8)byte_1C0098752 < 5u )
        return 3221291029LL;
      v27 = a3[2];
      v28 = 141;
      v12 = v14;
    }
    WPP_SF_dd(v28, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v12, v27);
    return 3221291029LL;
  }
LABEL_62:
  if ( (v11 & 0x20000) != 0 )
  {
    a2 = (unsigned int)a3[12];
    v29 = (unsigned int)a3[10];
    v30 = (unsigned int)a3[11];
    a1 = (__int64)a3 + a2;
    if ( (_DWORD)v29
      && ((unsigned int)v30 < 0x10 || (v30 & 3) != 0
                                   || (unsigned int)a2 < 0x34
                                   || (unsigned int)a2 > a4
                                   || (a1 & 3) != 0) )
    {
      if ( (unsigned __int8)byte_1C0098752 >= 5u )
        WPP_SF_LLLLLLq(a1, a2, v29, v30);
      return 3221291029LL;
    }
    v31 = v30 * v29;
    v32 = -1;
    if ( (unsigned __int64)(v30 * v29) <= 0xFFFFFFFF )
      v32 = v30 * v29;
    v33 = v31 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v31 <= 0xFFFFFFFF )
    {
      v34 = v32 + a2;
      v32 = -1;
      if ( v34 >= (unsigned int)a2 )
        v32 = v34;
      v33 = v34 < (unsigned int)a2 ? 0xC0000095 : 0;
    }
    if ( v33 < 0 )
    {
      if ( (unsigned __int8)byte_1C0098752 >= 5u )
        WPP_SF_LLL(a1, a2, v29, v30);
      return 3221291029LL;
    }
    if ( a4 < v32 )
    {
      if ( a5 )
        *a5 = v32;
      if ( (unsigned __int8)byte_1C0098752 >= 5u )
        WPP_SF_dd(0x95u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a4, v32);
      return 3221291028LL;
    }
    v35 = 0;
    if ( (_DWORD)v29 )
    {
      a2 = 16LL;
      while ( *(_BYTE *)a1 == 0xB7 && *(_BYTE *)(a1 + 1) && *(_WORD *)(a1 + 2) >= 0x10u )
      {
        v36 = *(_DWORD *)(a1 + 4);
        if ( (v36 & 0xFF000000) != 0
          || (unsigned __int16)(*(_WORD *)(a1 + 8) - 1) > 5u
          || *(_WORD *)(a1 + 12)
          || *(_WORD *)(a1 + 14) >= 8u )
        {
          if ( (unsigned __int8)byte_1C0098752 >= 5u )
            WPP_SF_DDDDDDDDDDD(0x97u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v35, v36);
          return 3221291029LL;
        }
        a1 += v30;
        if ( ++v35 >= (unsigned int)v29 )
          goto LABEL_96;
      }
      if ( (unsigned __int8)byte_1C0098752 >= 5u )
        WPP_SF_d(0x96u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v35);
      return 3221291029LL;
    }
  }
LABEL_96:
  if ( (unsigned __int8)byte_1C0098752 >= 5u )
    WPP_SF_qDqLqD(a1, a2, v8, v7);
  return 0LL;
}
