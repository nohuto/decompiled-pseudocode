/*
 * XREFs of sub_180080D00 @ 0x180080D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180080D00(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _RTL_SRWLOCK *v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (_RTL_SRWLOCK *)(a2 + 128);
  sub_18007358C((_RTL_SRWLOCK *)(a2 + 128), 1, 0);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    if ( !v11 )
    {
LABEL_3:
      sub_180016A78(Instance, v5);
      v12 = 2147353478LL;
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      else
        v13 = 2147353478LL;
      if ( *(_BYTE *)v13 )
        sub_180002FC8(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      sub_1800169EC(&v15, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      Instance[11] = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      Instance[12] = v14;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        Instance,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      if ( *(_BYTE *)v12 )
        sub_180002F48(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      sub_1800169B4(v15);
      return;
    }
    if ( LdrAddRefDll(0, *(PVOID *)(a2 + 208)) >= 0 )
    {
      *((_DWORD *)Instance + 36) |= 0x100u;
      Instance[21] = v11;
      goto LABEL_3;
    }
  }
  sub_18007358C(v9, -1, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
