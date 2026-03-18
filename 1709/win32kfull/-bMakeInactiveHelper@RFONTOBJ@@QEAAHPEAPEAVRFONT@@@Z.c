/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C0274768 (vMakeInactiveHelper.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct _FONTOBJ **this, struct RFONT **a2)
{
  struct RFONT **v2; // r14
  unsigned int v4; // r15d
  struct _FONTOBJ *v5; // rbp
  __int64 v6; // r8
  struct RFONT *iFile; // rax
  struct RFONT *sizLogResPpi; // rcx
  struct RFONT *v9; // rcx
  __int64 i; // rdx
  struct RFONT *v11; // rax
  struct _FONTOBJ *pvConsumer; // rcx
  struct _FONTOBJ *v13; // r8
  SIZE v14; // rbx
  PVOID v15; // rdx
  PVOID v16; // r9
  __int64 v17; // r10
  char *pvProducer; // rax
  PVOID *v19; // rcx
  _DWORD *v20; // rax
  int v21; // ecx
  unsigned int v22; // edx
  struct RFONT *v23; // rax
  struct RFONT *j; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // edx
  int v28; // edx
  struct _FONTOBJ *v29; // rcx
  struct _FONTOBJ **p_pvConsumer; // rdx
  PVOID *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 result; // rax
  PVOID v35[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v36[4]; // [rsp+30h] [rbp-58h] BYREF
  struct _FONTOBJ *v37; // [rsp+90h] [rbp+8h] BYREF
  struct RFONT *v38; // [rsp+A0h] [rbp+18h] BYREF
  SIZE v39; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*(&(*this)[7].ulStyleSize + 1) )
    return 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  GreAcquireSemaphore(ghsemRFONTList);
  if ( !--*(&(*this)[7].ulStyleSize + 1) )
  {
    if ( v2 )
    {
      iFile = (struct RFONT *)(*this)[11].iFile;
      if ( iFile )
      {
        *v2++ = iFile;
        (*this)[11].iFile = 0LL;
      }
      v4 = 1;
      sizLogResPpi = (struct RFONT *)(*this)[11].sizLogResPpi;
      if ( sizLogResPpi )
      {
        *v2++ = sizLogResPpi;
        (*this)[11].sizLogResPpi = 0LL;
      }
      v9 = *(struct RFONT **)&(*this)[11].ulStyleSize;
      if ( v9 )
      {
        *v2++ = v9;
        *(_QWORD *)&(*this)[11].ulStyleSize = 0LL;
      }
      for ( i = 0LL; (unsigned int)i < LODWORD((*this)[13].iTTUniq); i = (unsigned int)(i + 1) )
      {
        v6 = 8LL * (unsigned int)i;
        v11 = *(struct RFONT **)((char *)(*this)[11].pvConsumer + v6);
        if ( v11 )
        {
          *v2++ = v11;
          *(_QWORD *)((char *)(*this)[11].pvConsumer + v6) = 0LL;
        }
      }
      pvConsumer = (struct _FONTOBJ *)(*this)[11].pvConsumer;
      if ( pvConsumer && pvConsumer != (struct _FONTOBJ *)&(*this)[11].pvProducer )
        Win32FreePool(pvConsumer, i, v6);
      (*this)[11].pvConsumer = 0LL;
      LODWORD((*this)[13].iTTUniq) = 0;
      (*this)[13].cxMax = 0;
    }
    v13 = *this;
    v14 = (*this)[1].sizLogResPpi;
    v39 = v14;
    if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
      v15 = *(PVOID *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1528LL);
    else
      v15 = *(PVOID *)(*(_QWORD *)&v14 + 1528LL);
    v16 = v13[7].pvConsumer;
    v17 = (__int64)v16 + 504;
    if ( !v16 )
      v17 = 8LL;
    pvProducer = (char *)v13[7].pvProducer;
    v19 = (PVOID *)(pvProducer + 496);
    if ( !pvProducer )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)v17 = pvProducer;
      if ( v19 )
        *v19 = v13[7].pvConsumer;
    }
    else
    {
      v15 = v13[7].pvProducer;
      if ( v19 )
        *v19 = 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1528LL) = v15;
    else
      *(_QWORD *)(*(_QWORD *)&v14 + 1528LL) = v15;
    v20 = (*this)[1].pvProducer;
    if ( v20[14] || v20[15] || *((_QWORD *)v20 + 20) )
    {
      v21 = *(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000;
      if ( v21 )
        v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1544LL);
      else
        v22 = *(_DWORD *)(*(_QWORD *)&v14 + 1544LL);
      if ( v22 < 0x80 )
      {
        if ( v21 )
          v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1544LL);
        else
          v27 = *(_DWORD *)(*(_QWORD *)&v14 + 1544LL);
        v28 = v27 + 1;
        if ( v21 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1544LL) = v28;
        else
          *(_DWORD *)(*(_QWORD *)&v14 + 1544LL) = v28;
      }
      else
      {
        v23 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v39);
        for ( j = v23; v23; v23 = (struct RFONT *)*((_QWORD *)v23 + 63) )
          v5 = (struct _FONTOBJ *)v23;
        v38 = j;
        v37 = v5;
        RFONTOBJ::vRemove((__int64)&v37, (unsigned __int64 *)&v38, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v39, v38);
        v37 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37, v25, v26);
      }
      if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
        v29 = *(struct _FONTOBJ **)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1536LL);
      else
        v29 = *(struct _FONTOBJ **)(*(_QWORD *)&v14 + 1536LL);
      p_pvConsumer = (struct _FONTOBJ **)&v29[7].pvConsumer;
      v31 = &(*this)[7].pvConsumer;
      if ( !v29 )
        p_pvConsumer = 0LL;
      if ( *this != (struct _FONTOBJ *)-496LL )
      {
        *v31 = 0LL;
        v31[1] = v29;
        if ( p_pvConsumer )
          *p_pvConsumer = *this;
        v29 = *this;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1536LL) = v29;
      else
        *(_QWORD *)(*(_QWORD *)&v14 + 1536LL) = v29;
    }
    else
    {
      v5 = *this;
    }
  }
  if ( ghsemRFONTList )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
  }
  if ( v2 && !v4 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v5 )
  {
    v35[0] = v5[1].pvProducer;
    v37 = v5;
    memset(v36, 0, sizeof(v36));
    PushThreadGuardedObject(v36, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT(&v37, 0LL, (struct PFFOBJ *)v35, 1);
    PopThreadGuardedObject(v36);
    v37 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37, v32, v33);
  }
  result = v4;
  *this = 0LL;
  return result;
}
