/*
 * XREFs of sub_1800132E0 @ 0x1800132E0
 * Callers:
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_18001327C @ 0x18001327C (sub_18001327C.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800132E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 UniqueThread_low; // rcx
  struct _TEB *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+38h] [rbp-30h] BYREF

  v4 = a4;
  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    sub_18001327C(a2, a4);
  UniqueThread_low = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    sub_18008A588();
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
  {
    UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    *(_DWORD *)(a2 + 88) = UniqueThread_low;
  }
  v7 = NtCurrentTeb();
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(UniqueThread_low, a2, a3, a4) )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_180002FC8(0LL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
  sub_1800169EC(v17, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v7->SubProcessTag);
  LOBYTE(v10) = v4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v10);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v16 = 0LL;
    ZwSetInformationThread(-2LL, 5LL, &v16);
  }
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    sub_18001327C(a2, v4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v8 )
    sub_180002F48(0LL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
  return sub_1800169B4(v17[0]);
}
