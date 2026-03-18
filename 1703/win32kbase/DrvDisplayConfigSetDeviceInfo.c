/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000D994 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0057970 (GetPathsModality.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9990 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  struct _D3DKMT_GETPATHSMODALITY *v26; // rsi
  int PathsModality; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v51; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v52; // [rsp+28h] [rbp-60h]
  struct _D3DKMT_GETPATHSMODALITY *v53; // [rsp+A0h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C018BDB0)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v10 = *a1;
    if ( *a1 == -6 )
    {
      if ( a1[1] == 28 )
      {
        v50 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C018BA38)(0LL, a1);
        v11 = v50;
        if ( v50 < 0 )
          goto LABEL_13;
        if ( !a1[6] )
          return (unsigned int)v11;
        LODWORD(v52) = 4;
        LODWORD(v51) = 2191;
        v17 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v51, v52, 0LL, 1, 0LL, 0LL, a2);
LABEL_44:
        v11 = v17;
        if ( v17 >= 0 )
          return (unsigned int)v11;
        v16 = WdLogNewEntry5_WdWarning(v18);
        *(_QWORD *)(v16 + 24) = v11;
LABEL_46:
        WdLogEvent5_WdWarning(v16);
        return (unsigned int)v11;
      }
      return -1073741811LL;
    }
    if ( v10 == -4 )
    {
      if ( a1[1] == 24 )
      {
        LODWORD(v11) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
        return (unsigned int)v11;
      }
      return -1073741811LL;
    }
    if ( v10 != 5 )
    {
      if ( v10 == 8 )
      {
        if ( a1[1] == 24 )
        {
          v19 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C018BA38)(0LL, a1);
          v11 = v19;
          if ( v19 < 0 )
            goto LABEL_13;
LABEL_15:
          LODWORD(v52) = 0;
          LODWORD(v51) = 2447;
          v17 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v51, v52, 0LL, 1, 0LL, 0LL, a2);
          goto LABEL_44;
        }
      }
      else
      {
        if ( v10 != 10 )
        {
          LODWORD(v11) = -1073741811;
          v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
          v12[3] = -1073741811LL;
          v12[4] = *a1;
          v12[5] = a1[3];
          v12[6] = *v6;
          v13 = *v5;
LABEL_10:
          v12[7] = v13;
          WdLogEvent5_WdError(v12);
          return (unsigned int)v11;
        }
        if ( a1[1] == 24 )
        {
          v14 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C018BA38)(0LL, a1);
          v11 = v14;
          if ( v14 < 0 )
          {
LABEL_13:
            v16 = WdLogNewEntry5_WdWarning(v15);
            *(_QWORD *)(v16 + 24) = a1;
            *(_QWORD *)(v16 + 32) = v11;
            goto LABEL_46;
          }
          if ( v14 == 255 )
            return (unsigned int)v11;
          goto LABEL_15;
        }
      }
      return -1073741811LL;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
    v20[3] = *a1;
    v20[4] = a1[3];
    v20[5] = *v6;
    v20[6] = *v5;
    v20[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v20);
    v21 = ((__int64 (*)(void))qword_1C018BA50)();
    v11 = v21;
    if ( v21 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
      v12[3] = v11;
      v12[4] = a1[3];
      v12[5] = *v6;
      v12[6] = *v5;
      v13 = a1[5] & 1;
      goto LABEL_10;
    }
    v25 = a1[5];
    v26 = 0LL;
    v53 = 0LL;
    if ( (v25 & 1) != 0 )
    {
      PathsModality = GetPathsModality(v23, &v53, 0x40u, 0);
      v31 = PathsModality;
      if ( PathsModality < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
        v32[3] = v31;
        v32[4] = a1[3];
        v32[5] = *v6;
        v32[6] = *v5;
        v32[7] = a1[5] & 1;
        WdLogEvent5_WdError(v32);
        if ( (_DWORD)v31 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C018BA58)() < 0 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v34, v33);
            WdLogEvent5_WdAssertion(v35);
          }
          return 3221225495LL;
        }
      }
      v26 = v53;
    }
    v36 = (a1[5] & 1) == 0;
    LODWORD(v36) = v36 | 0x80000000;
    v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C018BA10)(*(_QWORD *)v6, *v5, v36, 0LL);
    v11 = v37;
    if ( v37 >= 0 )
    {
      if ( !v26 )
        goto LABEL_34;
      v42 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C018B9D8)(0x40000000LL, v26);
      v46 = v42;
      if ( v42 >= 0 )
        goto LABEL_34;
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
      v41[3] = v46;
    }
    else
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
      v41[3] = v11;
    }
    v41[4] = a1[3];
    v41[5] = *v6;
    v41[6] = *v5;
    v41[7] = a1[5] & 1;
    WdLogEvent5_WdError(v41);
LABEL_34:
    if ( (int)((__int64 (*)(void))qword_1C018BA58)() < 0 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v48, v47);
      WdLogEvent5_WdAssertion(v49);
    }
    FreePathsModality(v26);
    return (unsigned int)v11;
  }
  return result;
}
