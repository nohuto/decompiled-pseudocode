/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00279DC
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0027684 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFNTCacheHlink @ 0x1C00BAD84 (SearchFNTCacheHlink.c)
 *     ComputeFNTCacheFastCheckSum @ 0x1C00EC144 (ComputeFNTCacheFastCheckSum.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct PDEV **a5,
        unsigned int *a6,
        struct _FONTFILEVIEW **a7,
        unsigned int a8,
        struct tagDESIGNVECTOR *a9,
        unsigned int a10)
{
  struct PDEV **v10; // r14
  unsigned int v12; // ebx
  int v15; // ebp
  unsigned int v16; // eax
  bool v17; // zf
  __int64 v18; // rdi
  struct PDEV **v19; // r8
  unsigned int *v20; // rax
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  v10 = a5;
  v12 = 0;
  *a3 = 0;
  *a4 = 0;
  v15 = (int)a2;
  *v10 = 0LL;
  v22 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( qword_1C032C4C8 )
  {
    if ( a1 )
    {
      v16 = ComputeFNTCacheFastCheckSum(a1, v15, (_DWORD)a7, a8, (__int64)a9, a10);
      v17 = (dword_1C032C4C0 & 1) == 0;
      *a3 = v16;
      if ( !v17 )
      {
        v18 = qword_1C032C4C8;
        a5 = 0LL;
        SearchFNTCacheHlink(v16, &a5, *(_QWORD *)qword_1C032C4C8);
        v19 = a5;
        if ( a5 )
        {
          if ( ((_DWORD)a5[3] & 1) == 0 )
          {
            v12 = 1;
            *a4 = *((_DWORD *)a5 + 1);
            v20 = a6;
            *v10 = *(struct PDEV **)(v18 + 8LL * *((unsigned __int16 *)v19 + 6) + 48);
            *v20 = *((unsigned __int16 *)v19 + 7);
          }
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  return v12;
}
