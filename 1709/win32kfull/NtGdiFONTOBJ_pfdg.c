/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C028F730
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F1F20 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

struct _FD_GLYPHSET *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _FD_GLYPHSET *v5; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  struct _FD_GLYPHSET *v12; // rsi
  ULONG v13; // ebp
  struct _FD_GLYPHSET *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v9 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v10 = v9;
    if ( v9 )
    {
      v5 = (struct _FD_GLYPHSET *)*((_QWORD *)v8 + 41);
      if ( !v5 )
      {
        v18 = v9;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v18, v8, 0, 0, 0LL);
        v12 = *(struct _FD_GLYPHSET **)(v10 + 472);
        if ( v12 )
        {
          if ( v12 < MmSystemRangeStart )
          {
            v5 = v12;
            *((_QWORD *)v8 + 41) = v12;
          }
          else
          {
            v13 = 4 * (v12->cGlyphsSupported + 4 * (v12->cRuns + 1));
            if ( v13 )
            {
              v14 = (struct _FD_GLYPHSET *)UMPDOBJ::_AllocUserMem(v8, v13, 0LL, v11);
              v5 = v14;
              if ( v14 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET(v14, v12, v13) )
                  *((_QWORD *)v8 + 41) = v5;
                else
                  v5 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v18, v8, 0LL, 0LL, 0LL);
        v18 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18, v15, v16);
      }
    }
    if ( v8 )
      --*((_DWORD *)v8 + 108);
  }
  return v5;
}
