/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C008FFC0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // ecx
  int v4; // edi
  struct RFONT **v5; // rbx
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rsi
  _QWORD v10[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v11[14]; // [rsp+30h] [rbp-88h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v1 + 492) )
  {
    v3 = *(_DWORD *)(v1 + 848);
    if ( v3 > 0xA )
    {
      v5 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32, 1718382187LL, 1);
      if ( !v5 )
        return;
      v4 = 1;
    }
    else
    {
      memset(v11, 0, sizeof(v11));
      v4 = 0;
      v5 = v11;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
    v7 = *v5;
    v8 = InactiveHelper;
    if ( *v5 )
    {
      v9 = 0LL;
      do
      {
        v10[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v10, 0LL);
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        v7 = v5[++v9];
      }
      while ( v7 );
    }
    if ( v4 )
      Win32FreePool(v5);
    if ( v8 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
