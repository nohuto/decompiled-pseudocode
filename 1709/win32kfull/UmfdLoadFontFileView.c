/*
 * XREFs of UmfdLoadFontFileView @ 0x1C00B4E04
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00B5208 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00B4A60 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00B5084 (_lambda_89bfae273395b2af9988bd05c6831f4c_--operator().c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00B511C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C0111588 (-PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z.c)
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
        struct PDEV *a10,
        unsigned int *a11)
{
  __int64 *v13; // r13
  struct PDEV *result; // rax
  unsigned int *v15; // rsi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // r14d
  unsigned int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  char v25; // r14
  __int64 v26; // rdx
  unsigned int i; // esi
  const wchar_t *v28; // r12
  size_t v29; // rax
  int v30; // edx
  struct PDEV *v31; // rcx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  struct PDEV *v35; // [rsp+58h] [rbp-39h] BYREF
  struct PDEV *v36; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v37[12]; // [rsp+68h] [rbp-29h] BYREF
  struct _FONTFILEVIEW **v38; // [rsp+E8h] [rbp+57h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+5Fh] BYREF

  v39 = a4;
  v38 = a3;
  LOBYTE(result) = UmfdHostLifeTimeManager::EnsureUmfdHost();
  v13 = a9;
  result = (struct PDEV *)(unsigned __int8)result;
  *a9 = 0LL;
  if ( (_BYTE)result )
  {
    v15 = a11;
    v16 = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v35, (unsigned int *)&a9, v38, v39, a7, a8);
    v17 = 1;
    v18 = v16;
    v19 = v39;
    v20 = 0;
    if ( v35 != qword_1C0334158 )
      v18 = 0;
    v36 = qword_1C0334158;
    if ( v39 )
    {
      do
      {
        v21 = v20++;
        *((_DWORD *)v38[v21] + 10) |= 0x20u;
        *((_DWORD *)v38[v21] + 16) = 0;
        v19 = v39;
      }
      while ( v20 < v39 );
    }
    UmfdInsertFontFileViewForLookup(v38, v19);
    v37[0] = &v36;
    v37[1] = &a7;
    v37[2] = &v39;
    v37[3] = &v38;
    v37[4] = &a5;
    v37[5] = &a6;
    if ( v18 )
    {
      if ( (_DWORD)a9 == 1 || (v25 = 1, !a1) )
        v25 = 0;
      LOBYTE(v22) = v25;
      v24 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v22, *v15);
      if ( v24 )
      {
        for ( i = 0; i < v39; ++i )
        {
          *((_DWORD *)v38[i] + 10) |= 8u;
          if ( !v25 )
          {
            v28 = (const wchar_t *)*((_QWORD *)v38[i] + 10);
            if ( gpwszFontsDirectory
              && (v29 = wcsnlen(gpwszFontsDirectory, 0x104uLL), !wcsncmp(v28, gpwszFontsDirectory, v29)) )
            {
              v30 = 16;
            }
            else
            {
              v30 = 0;
            }
            *((_DWORD *)v38[i] + 10) = v30 | *((_DWORD *)v38[i] + 10) & 0xFFFFFFEF;
          }
        }
      }
      else
      {
        LOBYTE(v26) = v25;
        v24 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v26, 0LL);
      }
    }
    else
    {
      LOBYTE(v22) = a1 != 0LL;
      v23 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v22, *v15);
      v24 = v23;
      if ( !v23 )
      {
LABEL_8:
        result = a10;
        *(_QWORD *)a10 = 0LL;
        return result;
      }
      v32 = *(_DWORD *)(v23 + 8);
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
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
      PutFntCacheDrv(*v15, qword_1C0334158, v17);
    }
    if ( !v24 )
      goto LABEL_8;
    v31 = a10;
    result = qword_1C0334158;
    *v13 = v24;
    *(_QWORD *)v31 = result;
  }
  return result;
}
