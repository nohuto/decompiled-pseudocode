/*
 * XREFs of GreSetPaletteEntries @ 0x1C0295DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C0299400 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
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
    GreAcquireHmgrSemaphore(v10, v9);
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
      DCOBJA::~DCOBJA((DCOBJA *)v18);
    }
    GreReleaseHmgrSemaphore(v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
