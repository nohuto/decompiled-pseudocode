/*
 * XREFs of PnpQueryDeviceText @ 0x1404DC194
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryDeviceText(int a1, int a2, __int64 a3, PVOID *a4)
{
  int v7; // eax
  PVOID v8; // rbx
  int v9; // edi
  _DWORD v11[18]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v11, 0, sizeof(v11));
  v11[4] = PsDefaultSystemLocaleId;
  LOWORD(v11[0]) = 3099;
  v11[2] = a2;
  v7 = IopSynchronousCall(a1, (unsigned int)v11, -1073741637, 0, (__int64)&P);
  v8 = P;
  v9 = v7;
  if ( !P )
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    *a4 = P;
    if ( (int)PiNormalizeDeviceText((const WCHAR *)v8, (wchar_t **)&P) >= 0 )
    {
      if ( P )
      {
        *a4 = P;
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
  return (unsigned int)v9;
}
