/*
 * XREFs of NtGdiResizePalette @ 0x1C02962A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18 (--1DCOBJA@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02959E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C0298F4C (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  HDC v9; // rdi
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  signed __int32 v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  HDC v15; // rbx
  __int64 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+58h] [rbp-60h] BYREF
  int v19; // [rsp+60h] [rbp-58h]
  _QWORD v20[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v22[6]; // [rsp+88h] [rbp-30h] BYREF
  struct PALETTE *v23; // [rsp+D8h] [rbp+20h] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v23, a1);
  if ( !v23 || v23 == ppalDefault || (v4 = *((_DWORD *)v23 + 6), (v4 & 0x100) == 0) )
  {
LABEL_29:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
    return v3;
  }
  if ( (v4 & 0x800) == 0 || a2 == 256 )
  {
    v19 = 0;
    v18 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
    {
      v17 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v5 = *(_DWORD *)(v18 + 28);
      if ( *((_DWORD *)v23 + 7) < v5 )
        v5 = *((_DWORD *)v23 + 7);
      memmove(*(void **)(v18 + 120), *((const void **)v23 + 15), 4LL * v5);
      *(_DWORD *)(v18 + 24) = *((_DWORD *)v23 + 6);
      *(_QWORD *)(v18 + 40) = *((_QWORD *)v23 + 5);
      *(_QWORD *)(v18 + 48) = *((_QWORD *)v23 + 6);
      *(_DWORD *)(v18 + 56) = *((_DWORD *)v23 + 14);
      XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v18);
      GreAcquireHmgrSemaphore(v7, v6);
      v9 = *(HDC *)(v18 + 40);
      while ( v9 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v20, v9);
        if ( !v20[0] )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v20);
          break;
        }
        v9 = *(HDC *)(v20[0] + 1400LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
        v20[0] = 0LL;
        DCOBJ::~DCOBJ((DCOBJ *)v20);
      }
      if ( !v9 )
      {
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v23);
        v12 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *((_DWORD *)v23 + 8) = v12;
        v13 = *((_QWORD *)v23 + 16);
        if ( (struct PALETTE *)v13 != v23 )
          *(_DWORD *)(v13 + 32) = v12;
        v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v18, &v23, v10, v11);
        if ( v3 )
        {
          v8 = v18;
          v9 = *(HDC *)(v18 + 40);
          while ( v9 )
          {
            MDCOBJA::MDCOBJA((MDCOBJA *)v21, v9);
            v14 = v21[0];
            *(_QWORD *)(v21[0] + 96LL) = v23;
            *(_DWORD *)(*(_QWORD *)(v14 + 80) + 8LL) |= 0xFu;
            v9 = *(HDC *)(v14 + 1400);
            DCOBJA::~DCOBJA((DCOBJA *)v21);
          }
        }
      }
      v15 = *(HDC *)(v18 + 40);
      while ( v15 != v9 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v22, v15);
        _InterlockedDecrement((volatile signed __int32 *)(v22[0] + 12LL));
        v15 = *(HDC *)(v22[0] + 1400LL);
        DCOBJ::~DCOBJ((DCOBJ *)v22);
      }
      GreReleaseHmgrSemaphore(v8);
      SEMOBJ::vUnlock((SEMOBJ *)&v17);
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
    goto LABEL_29;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
  return 0LL;
}
