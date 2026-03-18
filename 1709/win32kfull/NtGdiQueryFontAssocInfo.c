/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C0109FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _FD_XFORM *v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _FD_XFORM *v9; // [rsp+40h] [rbp+10h] BYREF
  struct LFONT *v10; // [rsp+48h] [rbp+18h] BYREF

  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( !v8[0] )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_18;
  }
  v9 = 0LL;
  v2 = 2;
  v3 = RFONTOBJ::bInit(&v9, (struct XDCOBJ *)v8, 0, 2u);
  v6 = v9;
  if ( v3 )
    GreAcquireSemaphore(*(_QWORD *)&v9[33].eXX);
  if ( v6 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&v6[7].eXX + 32LL) + 44LL);
    if ( (_DWORD)v4 == 128 || (_DWORD)v4 == 129 || (_DWORD)v4 == 136 || v4 == 134 )
      goto LABEL_17;
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v6[7].eXX + 32LL) + 44LL) && (fFontAssocStatus & 2) != 0
      || (_DWORD)v4 == 255 && (fFontAssocStatus & 1) != 0
      || (_DWORD)v4 == 2 && (fFontAssocStatus & 4) != 0 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v10, *(struct HLFONT__ **)(v8[0] + 2176LL), 0LL);
      if ( v10 )
      {
        if ( (*((_BYTE *)v10 + 301) & 0x40) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
          v2 = 1;
          goto LABEL_17;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
      }
    }
  }
  v2 = 0;
LABEL_17:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9, v4, v5);
LABEL_18:
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v2;
}
