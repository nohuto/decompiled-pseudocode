/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C00B0A64
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C00B09D0 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C023B7C8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _FD_XFORM *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v4;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v14 = 0LL;
    v6 = RFONTOBJ::bInit(&v14, (struct XDCOBJ *)v13, 0, 2u);
    v9 = v14;
    if ( v6 )
      GreAcquireSemaphore(*(_QWORD *)&v14[33].eXX);
    if ( v9 )
    {
      v10 = *(_QWORD *)&v9[7].eXX;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32);
        if ( *(_DWORD *)(v11 + 4) > 4u && (v12 = *(int *)(v11 + 196), (_DWORD)v12) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v12 + v11);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v12 + v11 + 16);
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
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14, v7, v8);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v4 = 1;
LABEL_12:
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v4;
}
