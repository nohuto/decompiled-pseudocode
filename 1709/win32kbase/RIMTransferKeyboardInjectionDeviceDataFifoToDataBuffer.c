/*
 * XREFs of RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C010A844
 * Callers:
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     rimProcessKeyboardInput @ 0x1C010BD30 (rimProcessKeyboardInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 612);
  if ( (_DWORD)v2 )
  {
    v3 = (_QWORD *)(a2 + 492);
    v4 = (unsigned int)v2;
    do
    {
      v5 = 3LL * ((*(_DWORD *)(a2 + 616) - *(_DWORD *)(a2 + 612) + 1) % 0xAu);
      *v3 = *(_QWORD *)(a2 + 12LL * ((*(_DWORD *)(a2 + 616) - *(_DWORD *)(a2 + 612) + 1) % 0xAu) + 620);
      v3 = (_QWORD *)((char *)v3 + 12);
      result = *(unsigned int *)(a2 + 4 * v5 + 628);
      *((_DWORD *)v3 - 1) = result;
      --*(_DWORD *)(a2 + 612);
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a2 + 256) = 0;
  *(_QWORD *)(a2 + 264) = 12 * v2;
  return result;
}
