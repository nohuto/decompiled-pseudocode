/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0032348
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C0107720 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C00344B8 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0034B38 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C003BF88 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0282BBC (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  __int64 v7; // rax
  unsigned int v8; // r15d
  struct _LIST_ENTRY *i; // rbx
  __int64 v10; // rcx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct _UNIVERSAL_FONT_ID *v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rax
  struct PFE *Flink; // rdx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v24; // [rsp+80h] [rbp+40h] BYREF
  int v25; // [rsp+88h] [rbp+48h] BYREF

  v24 = a3;
  v25 = 0;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && !(unsigned int)RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x100u;
  }
  v7 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v7 )
  {
    v25 = 1;
    if ( a4 > 0 )
    {
      v17 = *(_QWORD *)(v7 + 112);
      v23[0] = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)(v17 + 92);
      v24 = (struct _UNIVERSAL_FONT_ID *)((char *)a3 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v23);
    }
  }
  v8 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v23[0] = *(_QWORD *)(*(_QWORD *)this + 112LL);
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)v23)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)v23); i = i->Flink )
  {
    Flink = (struct PFE *)*((_QWORD *)&i[2].Flink + v8);
    if ( !Flink )
      Flink = (struct PFE *)i[2].Flink;
    RFONTOBJ::AddUFIToBuffer(this, Flink, &v24, &v25, a4);
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v10 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v10 )
  {
    v19 = v25;
    v12 = v24;
    v13 = ++v25;
    if ( v19 < a4 )
    {
      v20 = *(_QWORD *)(v10 + 112);
      v23[0] = 0LL;
      *(_QWORD *)v24 = *(_QWORD *)(v20 + 92);
      v12 = (struct _UNIVERSAL_FONT_ID *)((char *)v12 + 8);
      v24 = v12;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v23);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v8);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v24, &v25, a4);
    v12 = v24;
    v13 = v25;
  }
  v14 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v14 )
  {
    v21 = v13;
    v15 = v13 + 1;
    if ( v21 < a4 )
    {
      v22 = *(_QWORD *)(v14 + 112);
      v23[0] = 0LL;
      *(_QWORD *)v12 = *(_QWORD *)(v22 + 92);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v23);
    }
  }
  else
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v8], &v24, &v25, a4);
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return (unsigned int)v25;
  }
  return v15;
}
