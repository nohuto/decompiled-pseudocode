/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x140585940
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(char a1, __int64 a2)
{
  unsigned int v2; // r9d
  char v4; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+28h] [rbp-28h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF

  v2 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v7 = a2;
    v6 = a1 != 0 ? 1 : -1;
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(a2) = a1;
      TtmNotifySessionDisplayRequiredChange(v2, a2);
    }
    else
    {
      memset(v5, 0, sizeof(v5));
      LODWORD(v5[0]) = 2;
      LODWORD(v5[1]) = 4;
      v5[2] = &v6;
      LODWORD(v5[3]) = 4;
      v5[4] = &v4;
      PopInvokeWin32Callout(5u, (__int64)v5, 1u, &v7);
    }
  }
  return 0LL;
}
