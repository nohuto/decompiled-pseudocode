/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C002ED00 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0058284 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00582A8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  _QWORD *v4; // rdi
  DC *v5; // rcx
  _QWORD *v7; // rsi
  BOOL v8; // ebp
  struct PFT *v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v10, *((struct RFONT **)*this + 274));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1600));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1744));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1888));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 2032));
  DC::hpath(*this, 0LL);
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v4 = (_QWORD *)*((_QWORD *)*this + 313);
  while ( v4 )
  {
    v7 = v4;
    v4 = (_QWORD *)v4[1];
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v9 = *(struct PFT **)(*v7 + 128LL);
    v8 = v9 == gpPFTPrivate;
    --*(_DWORD *)(*v7 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v9, *v7, 0LL, (unsigned int)(32 * (v8 + 1)));
    Win32FreePool(v7);
  }
  v5 = (DC *)*((_QWORD *)*this + 39);
  if ( v5 && v5 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool(v5);
    *((_QWORD *)*this + 39) = 0LL;
  }
  HmgFree(*(_QWORD *)*this);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  return 1LL;
}
