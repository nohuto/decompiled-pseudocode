/*
 * XREFs of EtwNotificationRegister @ 0x1800296B0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x1800099D0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 * Callees:
 *     sub_180008138 @ 0x180008138 (sub_180008138.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_1800298DC @ 0x1800298DC (sub_1800298DC.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 */

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  volatile signed __int64 *v14; // rsi

  if ( a1 && a5 )
  {
    v7 = *a1 - 0x4C8E042A3595AB5CLL;
    if ( *a1 == 0x4C8E042A3595AB5CLL )
      v7 = a1[1] + 0x4E4E0164FAD2BD47LL;
    if ( !v7 && qword_18015A418 )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *a5 = 0LL;
    v8 = 0;
    v9 = sub_1800298DC(a1, a3, a4, a2);
    v13 = v9;
    if ( !v9 )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v14 = (volatile signed __int64 *)(v9 + 64);
    RtlAcquireSRWLockExclusive(v9 + 64, v10, v11, v12);
    *(_DWORD *)(v13 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a2 != 10 && (v8 = sub_180029538(v13, a3, a2)) != 0 )
    {
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      sub_180008138((PSLIST_ENTRY)v13);
    }
    else
    {
      sub_1800241D0(v13);
      sub_1800299E8(v13);
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      *a5 = v13 | ((unsigned __int64)*(unsigned __int16 *)(v13 + 96) << 48);
    }
  }
  else
  {
    v8 = 87;
  }
  if ( v8 )
LABEL_14:
    RtlSetLastWin32Error(v8);
  return v8;
}
