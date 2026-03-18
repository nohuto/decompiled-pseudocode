/*
 * XREFs of GreGetTextFaceW @ 0x1C00872D0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C00871D0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  unsigned int v4; // r15d
  int v5; // esi
  void *v7; // r13
  DC *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct PFE *v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  const wchar_t *v17; // r14
  int v18; // eax
  __int64 v19; // rsi
  const wchar_t *v21; // r12
  __int64 v22; // rsi
  int v23; // r14d
  __int64 v24; // rdx
  int v25; // r14d
  __int64 v26; // rcx
  const wchar_t *v27; // r12
  __int64 v28; // rax
  int v29; // [rsp+38h] [rbp-19h]
  unsigned int v30; // [rsp+3Ch] [rbp-15h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-11h] BYREF
  __int64 v32; // [rsp+48h] [rbp-9h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1h] BYREF
  __int64 v34; // [rsp+58h] [rbp+7h] BYREF
  struct _POINTL v35; // [rsp+60h] [rbp+Fh] BYREF
  DC *v36[2]; // [rsp+68h] [rbp+17h] BYREF
  int v37; // [rsp+C0h] [rbp+6Fh]

  v37 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = 0;
  v7 = a3;
  v36[1] = 0LL;
  v36[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  v8 = v36[0];
  if ( !v36[0] )
    goto LABEL_27;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v36) )
  {
    v8 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v36[0] + 3);
    v36[0] = 0LL;
    goto LABEL_27;
  }
  v8 = v36[0];
  if ( (*((_DWORD *)v36[0] + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v36[0]);
    v8 = v36[0];
  }
  if ( !v8 )
    goto LABEL_27;
  v33 = *((_QWORD *)v8 + 6);
  if ( (*(_DWORD *)(v33 + 32) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v33);
    v8 = v36[0];
  }
  LOBYTE(v9) = 10;
  v10 = *(_QWORD *)(*((_QWORD *)v8 + 10) + 176LL);
  v11 = HmgShareLock(v10, v9);
  v32 = v11;
  v13 = v11;
  if ( !v11 )
    goto LABEL_24;
  if ( (*(_DWORD *)(v11 + 28) & 1) != 0 )
  {
    UserGetHDEV(v12);
    v23 = *(_DWORD *)(v13 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
    v13 = 0LL;
    v32 = 0LL;
    if ( !v33 )
      goto LABEL_24;
    if ( v23 == 6 )
    {
      v10 = *(_QWORD *)(v33 + 1456);
    }
    else
    {
      v25 = v23 - 4;
      if ( v25 )
      {
        if ( v25 == 1 )
          v10 = *(_QWORD *)(v33 + 1448);
      }
      else
      {
        v10 = *(_QWORD *)(v33 + 1440);
      }
    }
    LOBYTE(v24) = 10;
    v13 = HmgShareLock(v10, v24);
    v32 = v13;
  }
  if ( !v13 )
  {
LABEL_26:
    v8 = v36[0];
LABEL_27:
    v4 = v5;
    goto LABEL_28;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
LABEL_24:
    if ( v13 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
    goto LABEL_26;
  }
  v34 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v14 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v32, (struct XDCOBJ *)v36, &v31, &v35, &v30, 0);
  if ( v14 )
  {
    v15 = 0;
    if ( (v30 & 2) == 0 || (v17 = (const wchar_t *)(v13 + 304), !*(_WORD *)(v13 + 304)) )
    {
      v16 = *((_QWORD *)v14 + 4);
      v17 = (const wchar_t *)(v16 + *(int *)(v16 + 8));
      v15 = (*(_DWORD *)(v16 + 48) >> 27) & 1;
    }
    if ( v7 )
    {
      v18 = v37;
      if ( v37 >= 1 )
      {
        v19 = -1LL;
        if ( a4 && v15 )
        {
          v21 = v17;
          v29 = 0;
          if ( *v17 )
          {
            do
            {
              if ( !_wcsicmp((const wchar_t *)(v13 + 304), v21) )
              {
                v7 = a3;
                v18 = v37;
                goto LABEL_35;
              }
              v26 = -1LL;
              do
                ++v26;
              while ( v21[v26] );
              v29 += v26 + 1;
              v21 = &v17[v29];
            }
            while ( *v21 );
            v7 = a3;
            v18 = v37;
          }
          else
          {
LABEL_35:
            if ( *v21 )
              v17 = v21;
          }
        }
        do
          ++v19;
        while ( v17[v19] );
        v5 = v19 + 1;
        if ( v18 < v5 )
          v5 = v18;
        memmove(v7, v17, 2LL * v5);
        *((_WORD *)v7 + v5 - 1) = 0;
      }
    }
    else
    {
      v22 = -1LL;
      if ( a4 && v15 )
      {
        v27 = v17;
        if ( *v17 )
        {
          while ( _wcsicmp((const wchar_t *)(v13 + 304), v27) )
          {
            v28 = -1LL;
            do
              ++v28;
            while ( v27[v28] );
            v4 += v28 + 1;
            v27 = &v17[v4];
            if ( !*v27 )
              goto LABEL_40;
          }
        }
        if ( *v27 )
          v17 = v27;
      }
      do
LABEL_40:
        ++v22;
      while ( v17[v22] );
      v5 = v22 + 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    goto LABEL_24;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
  v8 = v36[0];
LABEL_28:
  if ( v8 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v36);
    _InterlockedDecrement((volatile signed __int32 *)v36[0] + 3);
  }
  return v4;
}
