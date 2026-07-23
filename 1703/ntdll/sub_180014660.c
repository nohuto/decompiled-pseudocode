/*
 * XREFs of sub_180014660 @ 0x180014660
 * Callers:
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_180088940 @ 0x180088940 (sub_180088940.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014660(PTP_CALLBACK_INSTANCE Instance, char *a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  void (__fastcall *v9)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int); // rax
  _QWORD *v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = sub_180016D48(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *((_QWORD *)a2 + 17);
  if ( !v6 )
  {
LABEL_3:
    sub_180016A78(Instance);
LABEL_4:
    v7 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_180002FC8(
        *((_QWORD *)a2 + 18),
        (__int64)(a2 + 392),
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 11),
        *((_QWORD *)a2 + 13));
    sub_1800169EC(&v12, *((_QWORD *)a2 + 10), *((_QWORD *)a2 + 11), *((_QWORD *)a2 + 13));
    *((_QWORD *)Instance + 11) = *((_QWORD *)a2 + 10);
    *((_QWORD *)Instance + 12) = *((_QWORD *)a2 + 11);
    v9 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int))*((_QWORD *)a2 + 10);
    v10 = (_QWORD *)*((_QWORD *)a2 + 11);
    if ( v9 == sub_1800132E0 )
      sub_1800132E0(Instance, v10, (PTP_WAIT)a2, a3);
    else
      v9(Instance, v10, (PTP_WAIT)a2, a3);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v7 )
      sub_180002F48(
        *((_QWORD *)a2 + 18),
        (__int64)(a2 + 392),
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 11),
        *((_QWORD *)a2 + 13));
    return sub_1800169B4(v12);
  }
  if ( LdrAddRefDll(0, *((PVOID *)a2 + 17)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  sub_18007358C(a2 + 56, 0xFFFFFFFFLL, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**((__int64 (__fastcall ***)(char *))a2 + 1))(a2);
  return result;
}
