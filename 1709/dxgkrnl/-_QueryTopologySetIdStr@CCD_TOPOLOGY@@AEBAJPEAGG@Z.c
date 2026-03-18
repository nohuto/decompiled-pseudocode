/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00DBFE4
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00DC3A4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BD9C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     RtlStringCchCopyW @ 0x1C000E754 (RtlStringCchCopyW.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00F771C (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01F760C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

NTSTATUS __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(
        CCD_TOPOLOGY *this,
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int16 a3)
{
  wchar_t *v4; // r14
  NTSTATUS result; // eax
  __int64 v6; // rsi
  unsigned __int16 v7; // r13
  unsigned __int16 v8; // di
  unsigned int v9; // ebp
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int16 v18; // di
  unsigned __int16 *v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r8
  unsigned __int16 v24; // [rsp+70h] [rbp+8h]
  unsigned __int16 v25; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h]

  v25 = a3;
  v4 = pszDest;
  result = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    *pszDest = 0;
    return result;
  }
  LODWORD(v6) = -1073741823;
  v7 = 0;
  v8 = 16385;
  v9 = 0;
  while ( 1 )
  {
    v10 = 264LL * v9;
    if ( DxgkIsTargetHMD(
           (const struct _LUID *)(v10 + *((_QWORD *)this + 8) + 64LL),
           *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 76)) )
    {
      *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 280) = 0;
      goto LABEL_8;
    }
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v9) )
      break;
LABEL_8:
    if ( ++v9 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return v6;
  }
  if ( v9 )
  {
    if ( v8 )
      result = RtlStringCchCopyW(v4, v8, L"+");
    else
      result = -1073741811;
    if ( result == -2147483643 )
      result = -1073741789;
    if ( result < 0 )
      return result;
    --v8;
    ++v4;
  }
  v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
          (const struct _LUID *)(v10 + *((_QWORD *)this + 8) + 64LL),
          *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 76),
          v4,
          v8,
          &v25);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v13 = v9 + 1;
    v8 -= v25;
    v14 = v7++;
    v24 = v7;
    *(_DWORD *)(v10 + *((_QWORD *)this + 8) + 280) = v14;
    v4 += v25;
    if ( v9 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      while ( 1 )
      {
        if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v9, v13, 0) )
        {
          v15 = *((_QWORD *)this + 8);
          v16 = 264LL * v13;
          v26 = v13;
          if ( *(_DWORD *)(v15 + v16 + 64) == *(_DWORD *)(v10 + v15 + 64)
            && *(_DWORD *)(v15 + v16 + 68) == *(_DWORD *)(v10 + v15 + 68)
            && *(_DWORD *)(v15 + v16 + 76) == *(_DWORD *)(v10 + v15 + 76) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v17);
          }
          if ( v8 )
            result = RtlStringCchCopyW(v4, v8, L"*");
          else
            result = -1073741811;
          if ( result == -2147483643 )
            result = -1073741789;
          if ( result < 0 )
            return result;
          v18 = v8 - 1;
          v19 = v4 + 1;
          v20 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                  (const struct _LUID *)(v16 + *((_QWORD *)this + 8) + 64LL),
                  *(_DWORD *)(*((_QWORD *)this + 8) + v16 + 76),
                  v19,
                  v18,
                  &v25);
          v6 = v20;
          if ( v20 < 0 )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v23 = 264 * v26;
            goto LABEL_37;
          }
          *(_DWORD *)(*((_QWORD *)this + 8) + v16 + 280) = v24;
          v7 = v24 + 1;
          v8 = v18 - v25;
          ++v24;
          v4 = &v19[v25];
        }
        if ( ++v13 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v23 = 264LL * v9;
LABEL_37:
  v22[3] = v6;
  v22[4] = *(unsigned int *)(v23 + *((_QWORD *)this + 8) + 76);
  v22[5] = *((_QWORD *)this + 8);
  v22[6] = *(int *)(v23 + *((_QWORD *)this + 8) + 68);
  v22[7] = *(unsigned int *)(v23 + *((_QWORD *)this + 8) + 64);
  WdLogEvent5_WdError(v22);
  return v6;
}
