/*
 * XREFs of SmpUnhandledExceptionFilter @ 0x140013068
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 *     SmpApiCallback @ 0x140003BC0 (SmpApiCallback.c)
 *     SmpCreateInitialSession @ 0x14000C190 (SmpCreateInitialSession.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140012FDC (SmpTerminate.c)
 */

__int64 __fastcall SmpUnhandledExceptionFilter(int **a1)
{
  int *v3; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 2LL) != 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Unhandled Exception in Session Manager");
    v3 = *a1;
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = *v3;
    Parameters[2] = *((_QWORD *)v3 + 2);
    Parameters[3] = (unsigned __int64)a1[1];
    SmpTerminate(Parameters, 1u, 4u);
    JUMPOUT(0x1400130F0LL);
  }
  return 0LL;
}
