/*
 * XREFs of NtUserfnINOUTLPWINDOWPOS @ 0x1C0093DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPWINDOWPOS(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int128 v8; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-10h]

  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 32) = *(_QWORD *)(a4 + 32);
  v8 = *(_OWORD *)a4;
  v9 = *(_OWORD *)(a4 + 16);
  v10 = *(_QWORD *)(a4 + 32);
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  *(_OWORD *)a4 = v8;
  *(_OWORD *)(a4 + 16) = v9;
  *(_QWORD *)(a4 + 32) = v10;
  return result;
}
