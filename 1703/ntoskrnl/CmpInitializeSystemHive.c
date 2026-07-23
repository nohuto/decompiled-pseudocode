/*
 * XREFs of CmpInitializeSystemHive @ 0x1408078A0
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpSetupLoggingState @ 0x1405A6ACC (CmpSetupLoggingState.c)
 */

char __fastcall CmpInitializeSystemHive(ULONG_PTR BugCheckParameter3)
{
  __int64 Length; // rbx
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
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * DestinationString.Length + 2, 0x20204D43u);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &DestinationString, 0);
  CmpLoadOptions.Buffer[Length] = 0;
  CmpLoadOptions.Length += 2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 168);
  memset(BugCheckParameter3a, 0, sizeof(BugCheckParameter3a));
  v4 = CmpInitializeHive(
         &v11,
         1u,
         dword_14033BE78 & 0x20000 | 0x12u,
         2u,
         v3,
         0LL,
         (__int64)&CmpSystemFileName,
         589832,
         0LL,
         0LL,
         (__int64)&v10,
         (__int64)BugCheckParameter3a);
  if ( v4 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)BugCheckParameter3a, v4);
  v5 = v11;
  CmpSetupLoggingState(v11, (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2564LL));
  if ( (_BYTE)v10 == 1 )
    CmpInitRmLogOnLoad = 1;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0xFFFD7FFE | 0x8001;
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
         dword_14033BE80,
         0,
         0LL,
         (__int64)v7,
         0LL,
         0LL,
         1);
  ExFreePoolWithTag(v7, 0);
  if ( v8 < 0 )
    return 0;
  qword_14033BE70 = v5;
  return 1;
}
