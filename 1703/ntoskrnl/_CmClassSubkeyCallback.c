/*
 * XREFs of _CmClassSubkeyCallback @ 0x1405AB1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _CmValidateInstallerClassName @ 0x1404E0E54 (_CmValidateInstallerClassName.c)
 */

__int64 __fastcall CmClassSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  unsigned __int8 (__fastcall *v7)(__int64, const wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v8; // edi
  unsigned int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( ((unsigned __int8)*a4 == 2 || *a4 == 4)
    && (int)CmValidateInstallerClassName(a1, a3) >= 0
    && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v7 = (unsigned __int8 (__fastcall *)(__int64, const wchar_t *, _QWORD, _QWORD))*((_QWORD *)a4 + 1);
    v8 = DestinationString.MaximumLength >> 1;
    if ( !v7 || v7(a1, a3, *a4, *((_QWORD *)a4 + 2)) )
    {
      a4[9] += v8;
      v9 = a4[8];
      if ( v9 > v8 )
      {
        RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 3), v9, a3, 0LL, 0LL, 0x900u);
        *((_QWORD *)a4 + 3) += 2LL * v8;
        a4[8] -= v8;
      }
    }
  }
  return 0LL;
}
