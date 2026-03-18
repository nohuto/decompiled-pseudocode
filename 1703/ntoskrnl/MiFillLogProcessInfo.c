/*
 * XREFs of MiFillLogProcessInfo @ 0x14007F868
 * Callers:
 *     MiLogWsEmptyControl @ 0x14007E9D4 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14007F7C0 (MiLogTrimWs.c)
 * Callees:
 *     <none>
 */

char __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // eax

  LOBYTE(v3) = *(_BYTE *)(a1 + 192) & 7;
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)v3 < 2u )
    {
      v3 = *(_DWORD *)(a1 - 3000);
      *a2 = v3;
    }
    else
    {
      *a2 = 0;
    }
    *a3 = 0LL;
  }
  else
  {
    *a2 = *(_DWORD *)(a1 - 544);
    LOBYTE(v3) = a1 + 80;
    *a3 = a1 - 176;
  }
  return v3;
}
