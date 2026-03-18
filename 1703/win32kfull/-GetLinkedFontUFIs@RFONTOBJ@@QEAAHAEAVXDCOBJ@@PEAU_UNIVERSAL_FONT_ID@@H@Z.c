/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008C5D4
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C00F9130 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028606C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  unsigned int v4; // edi
  struct _UNIVERSAL_FONT_ID *v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 i; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v6 = a3;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && !(unsigned int)RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x100u;
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, a2);
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x101u;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
  v9 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v9 )
  {
    v4 = 1;
    if ( a4 > 0 )
    {
      v15 = *(_QWORD *)(v9 + 112);
      v22[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v15 + 92);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
    }
  }
  v10 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
  {
    v16 = v4++;
    if ( v16 < a4 )
    {
      v17 = *(_QWORD *)(v10 + 752);
      v22[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * i) + 112LL) + 92LL);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
    }
    v10 = *(_QWORD *)this;
  }
  v12 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v12 )
  {
    v18 = v4++;
    if ( v18 < a4 )
    {
      v19 = *(_QWORD *)(v12 + 112);
      v22[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v19 + 92);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
    }
  }
  v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v13 )
  {
    v20 = v4++;
    if ( v20 < a4 )
    {
      v21 = *(_QWORD *)(v13 + 112);
      v22[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v21 + 92);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
    }
  }
  return v4;
}
