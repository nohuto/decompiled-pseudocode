/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x18004DC14
 * Callers:
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180032C90 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0860 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpGetNtPathFromDosPath(__int128 *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 *v7; // [rsp+40h] [rbp-39h] BYREF
  __int128 v8; // [rsp+48h] [rbp-31h] BYREF
  int v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+70h] [rbp-9h]
  __int128 v13; // [rsp+78h] [rbp-1h]
  _BYTE v14[40]; // [rsp+88h] [rbp+Fh] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(1, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v8, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v7 == &v8 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v5 )
        NtdllpFreeStringRoutine(v5);
      v6 = v8;
      *(_DWORD *)a2 = 0x1000000;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v6;
    }
    v4 = 64;
    v9 = 48;
    v10 = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v4 = 2112;
    v11 = a2;
    v12 = v4;
    v13 = 0LL;
    return ZwQueryAttributesFile(&v9, v14);
  }
  return result;
}
