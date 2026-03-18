/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00EC3E0
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BA78 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00A426C (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01DE52C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, unsigned __int16 *a2, unsigned __int16 a3)
{
  unsigned __int16 *v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // edx
  __int64 v16; // rdx
  unsigned __int16 *v17; // r8
  int v18; // ecx
  unsigned __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int16 *v27; // r8
  int v28; // ecx
  unsigned __int16 v29; // ax
  __int64 v30; // r10
  unsigned __int16 v31; // r12
  unsigned __int16 *v32; // r14
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ecx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  unsigned int v40; // [rsp+70h] [rbp+8h]
  unsigned __int16 v41; // [rsp+80h] [rbp+18h] BYREF
  __int64 v42; // [rsp+88h] [rbp+20h]

  v41 = a3;
  v4 = a2;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    *a2 = 0;
    return 0LL;
  }
  v5 = 0;
  LODWORD(v6) = -1073741823;
  v7 = 16385;
  v8 = 0;
  while ( 1 )
  {
    v9 = 264LL * v5;
    if ( DxgkIsTargetHMD(
           (const struct _LUID *)(v9 + *((_QWORD *)this + 8) + 64LL),
           *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 76)) )
    {
      *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 248) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v5) )
      break;
LABEL_8:
    if ( ++v5 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return (unsigned int)v6;
  }
  if ( !v5 )
  {
LABEL_6:
    v10 = CCD_TOPOLOGY::_QueryMonitorIdStr(
            (const struct _LUID *)(v9 + *((_QWORD *)this + 8) + 64LL),
            *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 76),
            v4,
            v7,
            &v41);
    v6 = v10;
    if ( v10 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v38 = v5;
LABEL_43:
      v37[3] = v6;
      v37[4] = *(unsigned int *)(264 * v38 + *((_QWORD *)this + 8) + 76);
      v37[5] = *((_QWORD *)this + 8);
      v37[6] = *(int *)(264 * v38 + *((_QWORD *)this + 8) + 68);
      v37[7] = *(unsigned int *)(264 * v38 + *((_QWORD *)this + 8) + 64);
      WdLogEvent5_WdError(v37);
      return (unsigned int)v6;
    }
    v13 = v8++;
    *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 248) = v13;
    v14 = v5 + 1;
    v7 -= v41;
    v40 = v5 + 1;
    v4 += v41;
    if ( v5 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v5, v14, 0) )
        {
          v22 = *((_QWORD *)this + 8);
          v42 = 264LL * v40;
          v23 = v22 + v9;
          v24 = v22 + v42;
          if ( *(_DWORD *)(v22 + v42 + 64) == *(_DWORD *)(v22 + v9 + 64)
            && *(_DWORD *)(v24 + 68) == *(_DWORD *)(v23 + 68)
            && *(_DWORD *)(v24 + 76) == *(_DWORD *)(v23 + 76) )
          {
            v25 = WdLogNewEntry5_WdAssertion(v24, v23, v20, v21);
            WdLogEvent5_WdAssertion(v25);
          }
          if ( !v7 )
            return (unsigned int)-1073741811;
          v26 = v7;
          v27 = v4;
          v28 = 0;
          while ( v26 + 2147483646LL - v7 )
          {
            v29 = *(unsigned __int16 *)((char *)v27 + (char *)L"*" - (char *)v4);
            if ( !v29 )
              break;
            *v27++ = v29;
            if ( !--v26 )
            {
              v30 = v42;
              --v27;
              v28 = -2147483643;
              goto LABEL_31;
            }
          }
          v30 = v42;
LABEL_31:
          *v27 = 0;
          if ( v28 == -2147483643 )
            return (unsigned int)-1073741789;
          v31 = v7 - 1;
          v32 = v4 + 1;
          v33 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v30 + *((_QWORD *)this + 8) + 64LL),
                  *(_DWORD *)(v30 + *((_QWORD *)this + 8) + 76),
                  v32,
                  v31,
                  &v41);
          v6 = v33;
          if ( v33 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
            v38 = v40;
            goto LABEL_43;
          }
          v36 = v8++;
          *(_DWORD *)(v42 + *((_QWORD *)this + 8) + 248) = v36;
          v7 = v31 - v41;
          v4 = &v32[v41];
        }
        v14 = v40 + 1;
        v40 = v14;
        if ( v14 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  if ( v7 )
  {
    v16 = v7;
    v17 = v4;
    v18 = 0;
    while ( v16 + 2147483646LL - v7 )
    {
      v19 = *(unsigned __int16 *)((char *)v17 + (char *)L"+" - (char *)v4);
      if ( !v19 )
        break;
      *v17++ = v19;
      if ( !--v16 )
      {
        --v17;
        v18 = -2147483643;
        break;
      }
    }
    *v17 = 0;
    if ( v18 == -2147483643 )
      return (unsigned int)-1073741789;
    --v7;
    ++v4;
    goto LABEL_6;
  }
  return (unsigned int)-1073741811;
}
