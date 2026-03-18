/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C00B8040
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     FONTOBJ_pifi @ 0x1C00BB1D0 (FONTOBJ_pifi.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C014320C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  IFIMETRICS *v5; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  struct PFT *v9; // rax
  FONTOBJ *v10; // rsi
  IFIMETRICS *v11; // rsi
  IFIMETRICS *v12; // rax
  IFIMETRICS *result; // rax
  char v14; // [rsp+48h] [rbp+10h] BYREF
  struct UMPDOBJ *v15; // [rsp+50h] [rbp+18h]

  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  v15 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v9 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v10 = (FONTOBJ *)v9;
  if ( v9 )
  {
    v5 = (IFIMETRICS *)*((_QWORD *)v8 + 40);
    if ( !v5 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v14, v9);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v14, v8, 0, 0, 0LL);
      v5 = FONTOBJ_pifi(v10);
      if ( v5 && v5 >= MmSystemRangeStart )
      {
        v11 = v5;
        v12 = (IFIMETRICS *)UMPDOBJ::_AllocUserMem(v8, v5->cjThis, 0);
        v5 = v12;
        if ( v12 )
        {
          memmove(v12, v11, v11->cjThis);
          *((_QWORD *)v8 + 40) = v5;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v14, v8, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v14);
    }
  }
  result = v5;
  --*((_DWORD *)v8 + 108);
  return result;
}
