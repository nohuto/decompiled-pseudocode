/*
 * XREFs of PnpPrepareDriverLoading @ 0x1405445A8
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     PpCheckInDriverDatabase @ 0x14054466C (PpCheckInDriverDatabase.c)
 *     PnpSetBlockedDriverEvent @ 0x1406CAF90 (PnpSetBlockedDriverEvent.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  PVOID v12; // rcx
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  v7 = (int)a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, v9->OptionalHeader.SizeOfImage, a4, (__int64)v14);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(v14);
  if ( IopGetRegistryValue(a2, L"PnpFlags", 0, &P) >= 0 )
  {
    v12 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      *a5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v12, 0);
  }
  return v10;
}
