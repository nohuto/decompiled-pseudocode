/*
 * XREFs of CmpInitializeSystemHive @ 0x1408B02A4
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x14062E43C (CmpSetupLoggingState.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 */

char __fastcall CmpInitializeSystemHive(ULONG_PTR BugCheckParameter3)
{
  unsigned __int16 Length; // bx
  __int64 v3; // rbx
  int v4; // eax
  ULONG_PTR v5; // rsi
  int v6; // ecx
  ACL *v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR v11; // [rsp+70h] [rbp-98h] BYREF
  _STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3a[44]; // [rsp+88h] [rbp-80h] BYREF

  LOBYTE(v10) = 0;
  v11 = 0LL;
  memset(BugCheckParameter3a, 0, sizeof(BugCheckParameter3a));
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(BugCheckParameter3 + 216));
  Length = DestinationString.Length;
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (DestinationString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                       PagedPool,
                                       2LL * ((unsigned int)DestinationString.Length + 1),
                                       0x20204D43u);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &DestinationString, 0);
  CmpLoadOptions.Buffer[Length] = 0;
  CmpLoadOptions.Length += 2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 168);
  memset(BugCheckParameter3a, 0, sizeof(BugCheckParameter3a));
  v4 = CmpCreateHive(
         &v11,
         1u,
         0x12u,
         2u,
         v3,
         0LL,
         (__int64)&CmpSystemFileName,
         589832,
         0LL,
         0LL,
         &v10,
         (__int64)BugCheckParameter3a);
  if ( v4 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)BugCheckParameter3a, v4);
  v5 = v11;
  CmpSetupLoggingState(v11, (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2564LL));
  if ( (_BYTE)v10 == 1 )
    CmpInitRmLogOnLoad = 1;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v5 + 160) |= 0x8000u;
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 160) & 0xFFFF7FFD | 0x8000;
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 64) + 4088LL);
  CmpBootType = v6;
  if ( !CmSelfHeal )
  {
    CmpSelfHeal = 0;
    if ( (v6 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 3uLL, v5, 0LL);
  }
  v7 = CmpHiveRootSecurityDescriptor();
  v8 = CmpLinkHiveToMaster(
         (__int64)&CmRegistryMachineSystemName,
         0LL,
         v5,
         0,
         dword_140396A90,
         0,
         0LL,
         (__int64)v7,
         0LL,
         0LL,
         1);
  ExFreePoolWithTag(v7, 0);
  if ( v8 < 0 )
    return 0;
  qword_140396A80 = v5;
  return 1;
}
