/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00CCBB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CCD08 (_ChangeWindowMessageFilterEx.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  int v13; // ebx
  __int64 v15; // rcx
  __int64 *v16; // rcx
  ULONG64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-38h]
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( !v8 )
  {
    v13 = 0;
    goto LABEL_17;
  }
  v19[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v19;
  v19[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( *(_QWORD *)(gptiCurrent + 400LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL) )
  {
    v15 = 5LL;
    goto LABEL_19;
  }
  if ( *(char *)(v8 + 60) < 0 || *(char *)(v8 + 59) < 0 )
  {
    v15 = 1400LL;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v15 = 87LL;
LABEL_19:
    v13 = 0;
    UserSetLastError(v15, gptiCurrent);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v18) = 8;
LABEL_10:
    v13 = ChangeWindowMessageFilterEx((struct tagWND *)v8, a2);
    if ( v13 && a4 )
    {
      v12 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v12 > MmUserProbeAddress )
      {
        v12 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v18;
    }
    goto LABEL_16;
  }
  v16 = a4;
  v17 = (ULONG64)(a4 + 1);
  if ( a4 + 1 < a4 || v17 > MmUserProbeAddress )
    v16 = (__int64 *)MmUserProbeAddress;
  v18 = *v16;
  if ( (unsigned int)*v16 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL, v17);
  v13 = 0;
LABEL_16:
  ThreadUnlock1(v12, v11);
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v13;
}
