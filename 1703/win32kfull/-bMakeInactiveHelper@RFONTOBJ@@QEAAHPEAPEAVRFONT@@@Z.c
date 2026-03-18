/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C0277D90 (vMakeInactiveHelper.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032E14 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct _FONTOBJ **this, struct RFONT **a2)
{
  struct RFONT **v2; // r14
  unsigned int v4; // r15d
  struct _FONTOBJ *v5; // rbp
  struct RFONT *iFile; // rax
  struct RFONT *sizLogResPpi; // rcx
  struct RFONT *v8; // rcx
  unsigned int i; // edx
  __int64 v10; // r8
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
  int v25; // edx
  int v26; // edx
  struct _FONTOBJ *v27; // rcx
  struct _FONTOBJ **p_pvConsumer; // rdx
  PVOID *v29; // rax
  __int64 result; // rax
  PVOID v31[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v32[4]; // [rsp+30h] [rbp-58h] BYREF
  struct _FONTOBJ *v33; // [rsp+90h] [rbp+8h] BYREF
  struct RFONT *v34; // [rsp+A0h] [rbp+18h] BYREF
  SIZE v35; // [rsp+A8h] [rbp+20h] BYREF

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
      v8 = *(struct RFONT **)&(*this)[11].ulStyleSize;
      if ( v8 )
      {
        *v2++ = v8;
        *(_QWORD *)&(*this)[11].ulStyleSize = 0LL;
      }
      for ( i = 0; i < LODWORD((*this)[13].iTTUniq); ++i )
      {
        v10 = 8LL * i;
        v11 = *(struct RFONT **)((char *)(*this)[11].pvConsumer + v10);
        if ( v11 )
        {
          *v2++ = v11;
          *(_QWORD *)((char *)(*this)[11].pvConsumer + v10) = 0LL;
        }
      }
      pvConsumer = (struct _FONTOBJ *)(*this)[11].pvConsumer;
      if ( pvConsumer && pvConsumer != (struct _FONTOBJ *)&(*this)[11].pvProducer )
        Win32FreePool(pvConsumer);
      (*this)[11].pvConsumer = 0LL;
      LODWORD((*this)[13].iTTUniq) = 0;
      (*this)[13].cxMax = 0;
    }
    v13 = *this;
    v14 = (*this)[1].sizLogResPpi;
    v35 = v14;
    if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
      v15 = *(PVOID *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1528LL);
    else
      v15 = *(PVOID *)(*(_QWORD *)&v14 + 1528LL);
    v16 = v13[7].pvConsumer;
    v17 = (__int64)v16 + 496;
    if ( !v16 )
      v17 = 0LL;
    pvProducer = (char *)v13[7].pvProducer;
    v19 = (PVOID *)(pvProducer + 496);
    if ( !pvProducer )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(v17 + 8) = pvProducer;
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
      if ( v22 < 0x40 )
      {
        if ( v21 )
          v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1544LL);
        else
          v25 = *(_DWORD *)(*(_QWORD *)&v14 + 1544LL);
        v26 = v25 + 1;
        if ( v21 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1544LL) = v26;
        else
          *(_DWORD *)(*(_QWORD *)&v14 + 1544LL) = v26;
      }
      else
      {
        v23 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v35);
        for ( j = v23; v23; v23 = (struct RFONT *)*((_QWORD *)v23 + 63) )
          v5 = (struct _FONTOBJ *)v23;
        v34 = j;
        v33 = v5;
        RFONTOBJ::vRemove((__int64)&v33, &v34, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v35, v34);
        v33 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
      }
      if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
        v27 = *(struct _FONTOBJ **)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1536LL);
      else
        v27 = *(struct _FONTOBJ **)(*(_QWORD *)&v14 + 1536LL);
      p_pvConsumer = (struct _FONTOBJ **)&v27[7].pvConsumer;
      v29 = &(*this)[7].pvConsumer;
      if ( !v27 )
        p_pvConsumer = 0LL;
      if ( *this != (struct _FONTOBJ *)-496LL )
      {
        *v29 = 0LL;
        v29[1] = v27;
        if ( p_pvConsumer )
          *p_pvConsumer = *this;
        v27 = *this;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&v14 + 32LL) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v14 + 3536LL) + 1536LL) = v27;
      else
        *(_QWORD *)(*(_QWORD *)&v14 + 1536LL) = v27;
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
    v31[0] = v5[1].pvProducer;
    v33 = v5;
    memset(v32, 0, sizeof(v32));
    PushThreadGuardedObject(v32, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT(&v33, 0LL, (struct PFFOBJ *)v31, 1);
    PopThreadGuardedObject(v32);
    v33 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
  }
  result = v4;
  *this = 0LL;
  return result;
}
