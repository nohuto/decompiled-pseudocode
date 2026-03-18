/*
 * XREFs of PoTraceSystemTimerResolution @ 0x140561FFC
 * Callers:
 *     ExTraceTimerResolution @ 0x140453F58 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x140561E44 (NtSetTimerResolution.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rax
  REGHANDLE v6; // rdi
  unsigned __int16 *v7; // rdi
  _DWORD *v8; // rdx
  unsigned __int64 v9; // rax
  __int16 v10; // cx
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  int v13; // eax
  int v14; // ecx
  ULONG v15; // r9d
  const EVENT_DESCRIPTOR *v16; // rdx
  int *v17; // r8
  __int16 v19; // [rsp+30h] [rbp-A8h] BYREF
  int v20; // [rsp+34h] [rbp-A4h] BYREF
  int v21; // [rsp+38h] [rbp-A0h] BYREF
  int v22; // [rsp+3Ch] [rbp-9Ch] BYREF
  int v23; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-88h] BYREF
  int *v25; // [rsp+60h] [rbp-78h]
  int v26; // [rsp+68h] [rbp-70h]
  int v27; // [rsp+6Ch] [rbp-6Ch]
  __int16 *v28; // [rsp+70h] [rbp-68h]
  int v29; // [rsp+78h] [rbp-60h]
  int v30; // [rsp+7Ch] [rbp-5Ch]
  __int64 v31; // [rsp+80h] [rbp-58h]
  int v32; // [rsp+88h] [rbp-50h]
  int v33; // [rsp+8Ch] [rbp-4Ch]
  int *v34; // [rsp+90h] [rbp-48h]
  int v35; // [rsp+98h] [rbp-40h]
  int v36; // [rsp+9Ch] [rbp-3Ch]
  _DWORD *v37; // [rsp+A0h] [rbp-38h]
  int v38; // [rsp+A8h] [rbp-30h]
  int v39; // [rsp+ACh] [rbp-2Ch]

  if ( a1 )
  {
    v6 = PopDiagHandle;
    v4 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN)
      || EtwEventEnabled(v6, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN);
  }
  else
  {
    v4 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
  }
  LOBYTE(v5) = PopDiagHandleRegistered;
  if ( PopDiagHandleRegistered && v4 )
  {
    v7 = *(unsigned __int16 **)(a2 + 1128);
    v19 = *v7 >> 1;
    v21 = *(_DWORD *)(a2 + 1672);
    v20 = 0;
    if ( !a1 )
    {
      v8 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() ? 0LL : KeGetCurrentThread()->Teb;
      if ( v8 )
      {
        v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v9
          && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452)
          && (v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7]) != 0
          && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
        {
          v13 = v8[3032];
        }
        else
        {
          v13 = v8[1480];
        }
        v20 = v13;
      }
    }
    v22 = *(_DWORD *)(a2 + 736);
    UserData.Ptr = (ULONGLONG)&v21;
    UserData.Size = 4;
    UserData.Reserved = 0;
    v25 = &v22;
    v26 = 4;
    v27 = 0;
    v28 = &v19;
    v29 = 2;
    v30 = 0;
    v14 = *v7;
    v5 = *((_QWORD *)v7 + 1);
    v31 = v5;
    v32 = v14;
    v33 = 0;
    if ( a1 )
    {
      if ( (*(_DWORD *)(a2 + 772) & 0x1000) != 0 )
        LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 4u, &UserData);
      v17 = *(int **)(a2 + 1664);
      if ( !v17 || !*v17 )
        return v5;
      v21 = *(_DWORD *)(a2 + 1676);
      v23 = *v17;
      v34 = &v23;
      v37 = v17 + 2;
      v38 = 8 * v23;
      v39 = 0;
      v15 = 6;
      v16 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
    }
    else
    {
      v34 = &v20;
      v15 = 5;
      v16 = &POP_ETW_EVENT_STRS;
    }
    v35 = 4;
    v36 = 0;
    LOBYTE(v5) = EtwWrite(PopDiagHandle, v16, 0LL, v15, &UserData);
  }
  return v5;
}
