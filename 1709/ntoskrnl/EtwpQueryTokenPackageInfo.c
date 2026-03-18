/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x1404DCA98
 * Callers:
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140019A00 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x140483CF0 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall EtwpQueryTokenPackageInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  char v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  PsQueryProcessAttributesByToken(a1, &v8, &v9);
  if ( v8 )
  {
    *a3 |= 1u;
    *(_QWORD *)a2 = 256LL;
    *v3 = 130LL;
    if ( (int)RtlQueryPackageIdentity(a1, a2 + 16, a2, a2 + 272, (__int64)v3, 0LL) < 0 )
    {
      *(_QWORD *)a2 = 0LL;
      *v3 = 0LL;
    }
    if ( v9 )
      *a3 |= 8u;
  }
  result = 2LL;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 2LL;
    *(_WORD *)(a2 + 16) = 0;
  }
  if ( !*v3 )
  {
    *v3 = 2LL;
    *(_WORD *)(a2 + 272) = 0;
  }
  return result;
}
