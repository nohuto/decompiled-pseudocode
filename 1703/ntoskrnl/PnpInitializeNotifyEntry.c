/*
 * XREFs of PnpInitializeNotifyEntry @ 0x140571770
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     ZwOpenSession @ 0x140180360 (ZwOpenSession.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v11; // r14d
  int v12; // ebx
  struct _ERESOURCE *PoolWithTag; // rax
  unsigned int SessionId; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+58h] [rbp-A8h]
  wchar_t Dst[256]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0LL;
  v16 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( !MmIsSessionAddress(a3) )
    goto LABEL_2;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString, Dst);
  v19 = 0LL;
  p_DestinationString = &DestinationString;
  v18 = 48;
  v21 = 512;
  v22 = 0LL;
  v12 = ZwOpenSession((__int64)&v16, 0LL, (__int64)&v18);
  if ( v12 < 0 || (v7 = v16) == 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    *(_QWORD *)(a1 + 48) = a5;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x56706E50u);
    *(_QWORD *)(a1 + 72) = PoolWithTag;
    if ( PoolWithTag )
      ExInitializeResourceLite(PoolWithTag);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
