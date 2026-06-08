/*
 * XREFs of RegisterKernelCap @ 0x1C0030F10
 * Callers:
 *     PccCapWorker @ 0x1C000EB50 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     CalculatePercentageCap @ 0x1C0023D00 (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x1C0034A78 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r11
  int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 1168);
  v2 = a1;
  v3 = 2;
  if ( v1 )
  {
    v3 = PepTranslateLimitReason(*(unsigned int *)(v1 + 24), *(unsigned int *)(v1 + 32));
  }
  else if ( *(_QWORD *)(a1 + 232) || *(_QWORD *)(a1 + 240) )
  {
    v4 = *(_DWORD *)(a1 + 708);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 24), *(_DWORD *)(v2 + 432), *(_DWORD *)(v2 + 480));
  }
  v9 = 56LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_BYTE *)(v2 + 78) )
  {
    v6 = *(_DWORD *)(v2 + 80);
    BYTE4(v11) = 1;
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 56);
  }
  HIDWORD(v9) = v6;
  HIDWORD(v10) = *(_DWORD *)(v2 + 704);
  v7 = v11;
  if ( v4 < 0x64 )
    v7 = v3;
  LODWORD(v10) = v4;
  LODWORD(v11) = v7;
  ((void (__fastcall *)(__int64 *))qword_1C001A7E8)(&v9);
  return 0LL;
}
