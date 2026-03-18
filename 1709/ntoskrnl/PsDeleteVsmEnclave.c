/*
 * XREFs of PsDeleteVsmEnclave @ 0x14071BD68
 * Callers:
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsDereferenceVsmEnclave @ 0x14071BE9C (PsDereferenceVsmEnclave.c)
 */

__int64 __fastcall PsDeleteVsmEnclave(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // r11
  _QWORD *i; // r8
  __int64 v8; // [rsp+30h] [rbp+8h]

  v2 = (volatile signed __int64 *)(a1 + 1840);
  ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
  v5 = *(_QWORD *)(a1 + 1824);
  v8 = a2[1] & (-1LL << (*(_DWORD *)(v5 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v5 + 8)
                     + 8LL
                     * ((37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                       + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v5 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == a2 )
    {
      *i = *a2;
      --*(_DWORD *)v5;
      *a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return PsDereferenceVsmEnclave(a2);
}
