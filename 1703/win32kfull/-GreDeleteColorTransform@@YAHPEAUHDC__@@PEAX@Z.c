/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C029449C
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C0295000 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0273C54 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  DC *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock(&v6, a1);
  if ( v6 )
  {
    if ( (*((_DWORD *)v6 + 9) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      LOBYTE(v4) = 14;
      v9 = HmgShareLockCheck(a2, v4);
      if ( v9 )
      {
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v9, (struct XDCOBJ *)&v6, 0);
        if ( v9 )
          DEC_SHARE_REF_CNT(v9);
      }
    }
    XDCOBJ::vUnlock((XDCOBJ *)&v6);
  }
  return v3;
}
