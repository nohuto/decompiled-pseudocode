/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C0107720
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0032348 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, __int64 a3)
{
  __int64 v3; // r15
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // r14
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r8
  DC *v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  struct _FD_XFORM *v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = (_DWORD)a3 == 0;
  if ( (int)a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2((unsigned int)(8 * a3), 1684629063LL, 0);
      LinkedFontUFIs = (v7 != 0LL) - 1;
      goto LABEL_4;
    }
    v8 = (_DWORD)a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_12;
  }
  if ( (int)a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_4:
  if ( LinkedFontUFIs != -1 )
  {
    v13 = 0;
    v14 = 0;
    XDCOBJ::vLock(&v12, a1);
    if ( v12 )
    {
      v15 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(&v15, (struct XDCOBJ *)&v12, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)&v15[33].eXX);
      if ( v15 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v15, (struct XDCOBJ *)&v12, v7, v3);
      else
        LinkedFontUFIs = -1;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15, v9, v10);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v3, 4u);
      if ( LinkedFontUFIs < (int)v3 )
        LODWORD(v3) = LinkedFontUFIs;
      memmove(a2, v7, 8LL * (int)v3);
    }
  }
LABEL_12:
  if ( v7 )
    Win32FreePool(v7, a2, a3);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
