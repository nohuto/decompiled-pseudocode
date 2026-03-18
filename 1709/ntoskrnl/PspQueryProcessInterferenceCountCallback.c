/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x140717BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(struct _EX_RUNDOWN_REF *Object, __int64 a2)
{
  int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  if ( (Object[96].Count & 1) != 0 || !ObReferenceObjectSafeWithTag((__int64)Object) )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    if ( ExAcquireRundownProtection_0(Object + 95) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v7 <= 0xFFFFFFFD )
      {
        v6[0] = Object;
        v6[1] = &v8;
        v4 = PsInvokeWin32Callout(24, (__int64)v6, 1, (__int64)&v7);
        if ( v4 >= 0 )
          **(_QWORD **)a2 += v8;
      }
      ExReleaseRundownProtection_0(Object + 95);
    }
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  }
  return (unsigned int)v4;
}
