/*
 * XREFs of DwmAsyncCancelRotationDelay @ 0x1C024C914
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C010F930 (NtUserLayoutCompleted.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncCancelRotationDelay(PVOID Object)
{
  unsigned int v2; // edi
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v4, 0, 0x2CuLL);
    v4[0] = 2883588;
    LOWORD(v4[1]) = 0x8000;
    v4[10] = 1073741935;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
