/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x1404F5170
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KsepStringTransform @ 0x1404F520C (KsepStringTransform.c)
 *     KsepRegistryOpenKey @ 0x1405463CC (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 *     KsepRegistryQueryValue @ 0x1406DBD90 (KsepRegistryQueryValue.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v11 = 0;
  v12 = 0LL;
  Handle = 0LL;
  Value = KsepStringTransform(&v11, a1);
  if ( Value >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &Handle) < 0
      || (v10 = (unsigned int)*a4,
          Value = KsepRegistryQueryValue(Handle, a2, v10, (__int64)&v10),
          *a4 = v10,
          Value == -1073741772) )
    {
      Value = -1073741275;
    }
    else if ( Value >= 0 )
    {
      Value = 0;
      *a3 |= 0x10000000u;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(dword_14036A25C);
    }
  }
  KsepStringFree(&v11);
  return (unsigned int)Value;
}
