/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C00E08F4
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C00E0860 (NtGdiGetTextCharsetInfo.c)
 *     DT_InitDrawTextInfo @ 0x1C023A078 (DT_InitDrawTextInfo.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetCharSet @ 0x1C00E09EC (GreGetCharSet.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // edi
  int v6; // eax
  struct _FD_XFORM *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v11, a1);
    if ( !v11[0] )
    {
      EngSetLastError(6u);
      v4 = 1;
      goto LABEL_12;
    }
    v12 = 0LL;
    v6 = RFONTOBJ::bInit(&v12, (struct XDCOBJ *)v11, 0, 2u);
    v7 = v12;
    if ( v6 )
      GreAcquireSemaphore(*(_QWORD *)&v12[33].eXX);
    if ( v7 )
    {
      v8 = *(_QWORD *)&v7[7].eXX;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v9 + 4) > 4u && (v10 = *(int *)(v9 + 196), (_DWORD)v10) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v10 + v9);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v10 + v9 + 16);
        }
        else
        {
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_11;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
LABEL_12:
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  }
  return v4;
}
