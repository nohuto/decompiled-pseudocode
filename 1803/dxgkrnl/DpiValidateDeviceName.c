/*
 * XREFs of DpiValidateDeviceName @ 0x1C009F9E4
 * Callers:
 *     DxgkValidateDeviceName @ 0x1C009F9D0 (DxgkValidateDeviceName.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 */

__int64 __fastcall DpiValidateDeviceName(PCUNICODE_STRING String1)
{
  int v2; // ebp
  __int64 v3; // rdi
  __int64 *v4; // rsi

  v2 = -1073741811;
  AcquireMiniportListMutex();
  v3 = qword_1C007A778;
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( v2 >= 0 )
        break;
      KeWaitForSingleObject((PVOID)(v3 + 72), Executive, 0, 0, 0LL);
      v4 = *(__int64 **)(v3 + 56);
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( v2 >= 0 )
            break;
          if ( *((_DWORD *)v4 + 4) == 1953656900
            && *((_DWORD *)v4 + 5) == 2
            && (!RtlCompareUnicodeString(String1, (PCUNICODE_STRING)v4 + 163, 1u)
             || !RtlCompareUnicodeString(String1, (PCUNICODE_STRING)v4 + 164, 1u)
             || !RtlCompareUnicodeString(String1, (PCUNICODE_STRING)v4 + 165, 1u)) )
          {
            v2 = 0;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != *(_QWORD *)(v3 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v3 + 72), 0);
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != qword_1C007A778 );
  }
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  return (unsigned int)v2;
}
