/*
 * XREFs of UmfdLoadFontFileView @ 0x1C0027684
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C0027AF4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00272DC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C0027944 (_lambda_89bfae273395b2af9988bd05c6831f4c_--operator().c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00279DC (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C0102214 (-PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z.c)
 */

struct PDEV *__fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        struct PDEV **a10,
        unsigned int *a11)
{
  int v13; // ebx
  struct PDEV *result; // rax
  __int64 *v15; // r15
  unsigned int *v16; // r14
  unsigned int v17; // ebx
  int v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // ecx
  struct PDEV **v25; // rcx
  __int64 v26; // rdx
  unsigned int i; // r8d
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  struct PDEV *v31; // [rsp+58h] [rbp-39h] BYREF
  struct PDEV *v32; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v33[6]; // [rsp+68h] [rbp-29h] BYREF
  struct _FONTFILEVIEW **v34; // [rsp+D8h] [rbp+47h] BYREF
  unsigned int v35; // [rsp+E0h] [rbp+4Fh] BYREF

  v35 = a4;
  v34 = a3;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  v13 = (unsigned __int8)UmfdHostLifeTimeManager::EnsureUmfdHost();
  GreAcquireSemaphore(ghsemDriverMgmt);
  result = (struct PDEV *)EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v15 = a9;
  *a9 = 0LL;
  if ( v13 )
  {
    v16 = a11;
    v17 = 1;
    v18 = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v32, (unsigned int *)&a9, v34, v35, a7, a8);
    v31 = qword_1C0338A40;
    v19 = 0;
    if ( v32 != qword_1C0338A40 )
      v18 = 0;
    if ( v35 )
    {
      do
      {
        v20 = v19++;
        *((_DWORD *)v34[v20] + 10) |= 0x20u;
        *((_DWORD *)v34[v20] + 16) = 0;
      }
      while ( v19 < v35 );
    }
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v31);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    UmfdInsertFontFileViewForLookup(v34, v35);
    v33[0] = &v31;
    v33[1] = &a7;
    v33[2] = &v35;
    v33[3] = &v34;
    v33[4] = &a5;
    v33[5] = &a6;
    if ( v18 )
    {
      if ( (_DWORD)a9 == 1 || (LOBYTE(v21) = 1, !a1) )
        LOBYTE(v21) = 0;
      v23 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v33, v21, *v16);
      if ( v23 )
      {
        for ( i = 0; i < v35; *((_DWORD *)v34[v28] + 10) |= 8u )
          v28 = i++;
      }
      else
      {
        if ( (_DWORD)a9 != 1 || !a1 )
          LOBYTE(v17) = 0;
        LOBYTE(v26) = v17;
        v23 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v33, v26, 0LL);
      }
    }
    else
    {
      LOBYTE(v21) = a1 != 0LL;
      v22 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v33, v21, *v16);
      v23 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v22 + 8);
        if ( v24 )
        {
          v29 = v24 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              if ( v30 == 1 )
                v17 = 4;
              else
                v17 = 0;
            }
            else
            {
              v17 = 3;
            }
          }
          else
          {
            v17 = 2;
          }
        }
        PutFntCacheDrv(*v16, qword_1C0338A40, v17);
      }
    }
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    if ( v23 )
    {
      v25 = a10;
      result = qword_1C0338A40;
      *v15 = v23;
      *v25 = result;
    }
    else
    {
      PDEVOBJ::vUnreferencePdev(&v31, 0LL);
      result = (struct PDEV *)a10;
      *a10 = 0LL;
    }
  }
  return result;
}
