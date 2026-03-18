/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C00FEFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // edi
  int v3; // eax
  struct _FD_XFORM *v4; // rbx
  int v5; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v8; // [rsp+40h] [rbp+8h] BYREF
  struct LFONT *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v8 = 0LL;
    v3 = RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u);
    v4 = v8;
    if ( v3 )
      GreAcquireSemaphore(*(_QWORD *)&v8[33].eXX);
    if ( v4 )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&v4[7].eXX + 32LL) + 44LL);
      if ( v5 == 128 || v5 == 129 || v5 == 136 || v5 == 134 )
      {
        v1 = 2;
      }
      else if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v4[7].eXX + 32LL) + 44LL) && (fFontAssocStatus & 2) != 0
             || v5 == 255 && (fFontAssocStatus & 1) != 0
             || v5 == 2 && (fFontAssocStatus & 4) != 0 )
      {
        LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v9, *(struct HLFONT__ **)(v7[0] + 2176LL), 0LL);
        if ( v9 )
        {
          if ( (*((_BYTE *)v9 + 301) & 0x40) != 0 )
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9);
          }
          else
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9);
            v1 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v1;
}
