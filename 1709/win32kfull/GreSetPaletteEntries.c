/*
 * XREFs of GreSetPaletteEntries @ 0x1C0292490
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0143144 (--1MDCOBJA@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C01446E0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C0295AA4 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  HDC v12; // rsi
  unsigned int CurrentProcessId; // edi
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v16, a1);
  v8 = v16;
  if ( v16 )
  {
    v17 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v16, a2, a3, a4);
    GreAcquireHmgrSemaphore(v9);
    v12 = *(HDC *)(v8 + 40);
    while ( v12 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v18, v12);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( (unsigned int)GreGetObjectOwner(v12, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      {
        v14 = v18[0];
        *(_DWORD *)(*(_QWORD *)(v18[0] + 80LL) + 8LL) |= 0xFu;
      }
      else
      {
        v14 = v18[0];
        *(_DWORD *)(v18[0] + 332LL) |= 1u;
      }
      v12 = *(HDC *)(v14 + 1400);
      MDCOBJA::~MDCOBJA((MDCOBJA *)v18);
    }
    GreReleaseHmgrSemaphore(v11, v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
