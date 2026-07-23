/*
 * XREFs of sub_18002C774 @ 0x18002C774
 * Callers:
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_180082B10 @ 0x180082B10 (sub_180082B10.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002C774(_DWORD *Instance, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    if ( !(unsigned int)sub_180025ACC(Instance, a2, 0) )
      return;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    sub_180025A28(Instance, a2);
LABEL_4:
    v7 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_180001FD0(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_18002567C(&v9, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(a2 + 80))(Instance, *(_QWORD *)(a2 + 88), a2, a3);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v7 )
      sub_180002050(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_180025644(v9);
    return;
  }
  if ( LdrAddRefDll(0, *(PVOID *)(a2 + 136)) >= 0 )
  {
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  sub_180055584(a2 + 56, 0xFFFFFFFFLL);
  if ( !_InterlockedDecrement((volatile signed __int32 *)a2) )
    (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
}
