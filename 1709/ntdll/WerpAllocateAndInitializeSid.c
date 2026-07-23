/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x18000265C
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 * Callees:
 *     WerpFreeSid @ 0x180002620 (WerpFreeSid.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PSID *a11)
{
  NTSTATUS v12; // ebx
  PSID Sid; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR Size[3]; // [rsp+40h] [rbp-18h] BYREF

  Size[0] = 12LL;
  Sid = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Sid, 0LL, Size, 0x1000u, 4u);
  if ( v12 < 0 )
    goto LABEL_9;
  if ( Sid )
  {
    memset(Sid, 0, Size[0]);
    v12 = RtlInitializeSid(Sid, IdentifierAuthority, 1u);
    if ( v12 >= 0 )
    {
      *((_DWORD *)Sid + 2) = 18;
      *a11 = Sid;
      v12 = 0;
    }
  }
  if ( v12 < 0 )
  {
LABEL_9:
    if ( Sid )
      WerpFreeSid(Sid);
  }
  return (unsigned int)v12;
}
