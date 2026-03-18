/*
 * XREFs of GreGetTextFaceW @ 0x1C00AEF00
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C00AEE00 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C003E690 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  int v4; // r13d
  unsigned int v6; // esi
  DC *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // edi
  int SessionTextStackStatus; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // di
  struct PFE *v20; // rax
  int v21; // ecx
  const wchar_t *v22; // r15
  __int64 v23; // rcx
  void *v24; // r14
  __int64 v25; // rsi
  const wchar_t *v26; // r14
  int v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rsi
  const wchar_t *v30; // r14
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rbx
  int v35; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-15h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-11h] BYREF
  __int64 v38; // [rsp+48h] [rbp-9h] BYREF
  __int64 v39; // [rsp+50h] [rbp-1h] BYREF
  __int64 v40; // [rsp+58h] [rbp+7h] BYREF
  struct _POINTL v41; // [rsp+60h] [rbp+Fh] BYREF
  DC *v42; // [rsp+68h] [rbp+17h] BYREF
  __int64 v43; // [rsp+70h] [rbp+1Fh]
  int v44; // [rsp+C0h] [rbp+6Fh]

  v44 = a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  v43 = 0LL;
  v6 = 0;
  v7 = (DC *)HmgLockEx(a1, a2, 0LL);
  v42 = v7;
  if ( !v7 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_9:
    if ( !v42 )
      goto LABEL_73;
    v39 = *((_QWORD *)v42 + 6);
    if ( (*(_DWORD *)(v39 + 32) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v39);
    LOBYTE(v8) = 10;
    v9 = *(_QWORD *)(*((_QWORD *)v42 + 10) + 176LL);
    v10 = HmgShareLock(v9, v8);
    v38 = v10;
    v12 = v10;
    if ( !v10 )
      goto LABEL_71;
    if ( (*(_DWORD *)(v10 + 28) & 1) != 0 )
    {
      UserGetHDEV(v11);
      v13 = *(_DWORD *)(v12 + 24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
      v12 = 0LL;
      if ( !v39 )
        goto LABEL_71;
      if ( v13 == 6 )
      {
        v9 = *(_QWORD *)(v39 + 1456);
      }
      else
      {
        v15 = v13 - 4;
        if ( v15 )
        {
          if ( v15 == 1 )
            v9 = *(_QWORD *)(v39 + 1448);
        }
        else
        {
          v9 = *(_QWORD *)(v39 + 1440);
        }
      }
      LOBYTE(v14) = 10;
      v12 = HmgShareLock(v9, v14);
      v38 = v12;
    }
    if ( !v12 )
      goto LABEL_73;
    SessionTextStackStatus = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
    if ( SessionTextStackStatus != 259 )
    {
      if ( SessionTextStackStatus < 0 )
        goto LABEL_71;
      goto LABEL_35;
    }
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    v19 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(v18, v17);
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    if ( !v19 )
    {
      if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
      {
        if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
          || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent
          || KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) < 0
          || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
        {
          v12 = v38;
          goto LABEL_71;
        }
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        v12 = v38;
        goto LABEL_35;
      }
      v12 = v38;
    }
    KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
LABEL_35:
    v40 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v20 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v38, (struct XDCOBJ *)&v42, &v37, &v41, &v36, 0);
    if ( !v20 )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v40);
      goto LABEL_72;
    }
    v21 = 0;
    if ( (v36 & 2) == 0 || (v22 = (const wchar_t *)(v12 + 304), !*(_WORD *)(v12 + 304)) )
    {
      v23 = *((_QWORD *)v20 + 4);
      v22 = (const wchar_t *)(v23 + *(int *)(v23 + 8));
      v21 = (*(_DWORD *)(v23 + 48) >> 27) & 1;
    }
    v24 = a3;
    if ( a3 )
    {
      if ( v4 >= 1 )
      {
        v25 = -1LL;
        if ( a4 && v21 )
        {
          v26 = v22;
          v27 = 0;
          if ( *v22 )
          {
            while ( _wcsicmp((const wchar_t *)(v12 + 304), v26) )
            {
              v28 = -1LL;
              do
                ++v28;
              while ( v26[v28] );
              v27 += v28 + 1;
              v26 = &v22[v27];
              if ( !*v26 )
                goto LABEL_52;
            }
          }
          if ( *v26 )
            v22 = v26;
LABEL_52:
          v24 = a3;
        }
        do
          ++v25;
        while ( v22[v25] );
        v6 = v25 + 1;
        if ( v44 < (int)v6 )
          v6 = v44;
        memmove(v24, v22, 2LL * (int)v6);
        *((_WORD *)v24 + (int)(v6 - 1)) = 0;
      }
    }
    else
    {
      v29 = -1LL;
      if ( a4 && v21 )
      {
        v30 = v22;
        v31 = 0;
        if ( *v22 )
        {
          while ( _wcsicmp((const wchar_t *)(v12 + 304), v30) )
          {
            v32 = -1LL;
            do
              ++v32;
            while ( v30[v32] );
            v31 += v32 + 1;
            v30 = &v22[v31];
            if ( !*v30 )
              goto LABEL_67;
          }
        }
        if ( *v30 )
          v22 = v30;
      }
      do
LABEL_67:
        ++v29;
      while ( v22[v29] );
      v6 = v29 + 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
LABEL_71:
    if ( !v12 )
      goto LABEL_73;
LABEL_72:
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
    goto LABEL_73;
  }
  if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v42) )
  {
    if ( (*((_DWORD *)v42 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v42);
    goto LABEL_9;
  }
  _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
  v42 = 0LL;
LABEL_73:
  if ( v42 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v42);
    v35 = 0;
    v33 = *(_QWORD *)v42;
    HmgDecrementExclusiveReferenceCountEx(v42, HIDWORD(v43), &v35);
    if ( v35 )
      bDeleteDCInternalEx(v33, 0LL);
  }
  return v6;
}
