/*
 * XREFs of NtGdiSetColorSpace @ 0x1C010F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  DC *v5; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  DC *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock(v9, a1);
  v5 = v9[0];
  if ( v9[0] )
  {
    if ( a2 == *(_QWORD *)(*((_QWORD *)v9[0] + 10) + 120LL) )
    {
      v3 = 1;
    }
    else
    {
      LOBYTE(v4) = 9;
      v7 = HmgShareLockCheck(a2, v4);
      if ( v7 )
      {
        DEC_SHARE_REF_CNT(*((_QWORD *)v5 + 13));
        *(_QWORD *)(*((_QWORD *)v5 + 10) + 120LL) = a2;
        *((_QWORD *)v5 + 13) = v7;
        INC_SHARE_REF_CNT(v7, v8);
        v3 = 1;
        DEC_SHARE_REF_CNT(v7);
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v9);
    _InterlockedDecrement((volatile signed __int32 *)v9[0] + 3);
  }
  return v3;
}
