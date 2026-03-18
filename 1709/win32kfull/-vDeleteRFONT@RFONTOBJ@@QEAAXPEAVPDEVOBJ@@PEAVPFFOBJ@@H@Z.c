/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C01234B0 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     vKillRFONTList @ 0x1C024BCC0 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C02747B0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C0283310 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C0283E00 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0283ED0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C003280C (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C003D7F8 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C003D8F0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00BE114 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BE15C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  SIZE sizLogResPpi; // rax
  BOOL v10; // esi
  SIZE v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID pvProducer; // rcx
  ULONG_PTR iFile; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  PVOID v23[2]; // [rsp+20h] [rbp-10h] BYREF
  struct RFONT *iTTUniq; // [rsp+60h] [rbp+30h] BYREF
  SIZE v25; // [rsp+68h] [rbp+38h] BYREF
  char v26; // [rsp+70h] [rbp+40h] BYREF

  v6 = *this;
  v23[0] = (*this)[1].pvConsumer;
  iTTUniq = (struct RFONT *)v6[1].iTTUniq;
  if ( *((_QWORD *)iTTUniq + 381) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, v6);
  sizLogResPpi = (*this)[1].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v25 = (*this)[1].sizLogResPpi;
    v10 = (*(_DWORD *)(*(_QWORD *)&sizLogResPpi + 32LL) & 1) != 0 && *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 8LL);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&iTTUniq,
      *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 32LL) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v26, (struct PDEVOBJ *)&v25);
    if ( v10 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v25 + 40LL));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v25 + 40LL), 11LL);
    }
    v11 = v25;
    if ( *(_QWORD *)(*(_QWORD *)&v25 + 3048LL) && a4 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v25, *this);
      v11 = v25;
    }
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *(_QWORD *)(*(_QWORD *)&v11 + 40LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v25 + 40LL));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v26);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&iTTUniq);
  }
  v25 = (SIZE)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    iTTUniq = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&iTTUniq, 1);
    PDEVOBJ::prfntInactive(a2, iTTUniq);
    v20 = PDEVOBJ::cInactive(a2);
    v21 = *(_QWORD *)a2;
    v22 = v20 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 3536) + 1544LL) = v22;
    else
      *(_DWORD *)(v21 + 1544) = v22;
  }
  if ( a3 )
  {
    iTTUniq = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&iTTUniq, 0);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = iTTUniq;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  PFEOBJ::vFreepfdg((PFEOBJ *)v23);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this, v12, v13);
  pvProducer = (*this)[10].pvProducer;
  if ( pvProducer )
    Win32FreePool(pvProducer, v14, v15);
  iFile = (*this)[13].iFile;
  if ( iFile )
    GreDeleteSemaphore(iFile);
  GreDeleteSemaphore((*this)[8].iTTUniq);
  Win32FreePool(*this, v18, v19);
  *this = 0LL;
}
