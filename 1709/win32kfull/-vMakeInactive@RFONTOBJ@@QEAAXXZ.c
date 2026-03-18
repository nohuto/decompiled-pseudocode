/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00F0A90 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // ecx
  int v4; // edi
  struct RFONT **v5; // rbx
  int InactiveHelper; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct RFONT *v9; // rcx
  int v10; // ebp
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v13[14]; // [rsp+30h] [rbp-88h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v1 + 492) )
  {
    v3 = *(_DWORD *)(v1 + 848);
    if ( v3 > 0xA )
    {
      v5 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32);
      if ( !v5 )
        return;
      v4 = 1;
    }
    else
    {
      memset(v13, 0, sizeof(v13));
      v4 = 0;
      v5 = v13;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
    v9 = *v5;
    v10 = InactiveHelper;
    if ( *v5 )
    {
      v11 = 0LL;
      do
      {
        v12[0] = v9;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v12, 0LL);
        v12[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v12);
        v9 = v5[++v11];
      }
      while ( v9 );
    }
    if ( v4 )
      Win32FreePool(v5, v7, v8);
    if ( v10 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
