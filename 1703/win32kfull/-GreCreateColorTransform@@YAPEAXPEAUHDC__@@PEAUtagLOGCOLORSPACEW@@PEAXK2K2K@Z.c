/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029435C
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C0294CD0 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0273DE4 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorTransform(
        HDC a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8)
{
  struct HOBJ__ *v8; // rdi
  DC *v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp-10h]
  int v15; // [rsp+5Ch] [rbp-Ch]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    v14 = 0;
    v15 = 0;
    XDCOBJ::vLock(&v13, a1);
    if ( v13 )
    {
      if ( (*((_DWORD *)v13 + 9) & 0x5000) == 0x1000 )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        v16 = 0LL;
        v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)&v16, (struct XDCOBJ *)&v13, a2, a3, a4, a5, a6, a7, a8);
        if ( !v8 )
          EngSetLastError(8u);
        if ( v16 )
          DEC_SHARE_REF_CNT(v16);
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
    }
    else
    {
      EngSetLastError(0x57u);
    }
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
