/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x14077BB48
 * Callers:
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 *     VfNotifyVerifierExtensions @ 0x1407673BC (VfNotifyVerifierExtensions.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  __int64 i; // rbx

  VfDriverLock();
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), (PCUNICODE_STRING)(a1 + 88), 1u) )
    {
      ++dword_14034F694;
      ++*(_DWORD *)(i + 20);
      VfNotifyVerifierExtensions(2, a1);
      break;
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
