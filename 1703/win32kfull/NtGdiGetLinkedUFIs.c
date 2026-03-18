/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C00F9130
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008C5D4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r15
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // r14
  bool v8; // zf
  DC *v10; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  struct _FD_XFORM *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2((unsigned int)(8 * a3), 1684629063LL, 0);
      LinkedFontUFIs = (v7 != 0LL) - 1;
      goto LABEL_4;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_12;
  }
  if ( a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_4:
  if ( LinkedFontUFIs != -1 )
  {
    v11 = 0;
    v12 = 0;
    XDCOBJ::vLock(&v10, a1);
    if ( v10 )
    {
      v13 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(&v13, (struct XDCOBJ *)&v10, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)&v13[33].eXX);
      if ( v13 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v13, (struct XDCOBJ *)&v10, v7, v3);
      else
        LinkedFontUFIs = -1;
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v10);
      _InterlockedAdd((volatile signed __int32 *)v10 + 3, 0xFFFFFFFF);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
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
    Win32FreePool(v7);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
