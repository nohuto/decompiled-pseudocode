/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x1C011E350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DpiSharedPowerRegister @ 0x1C01C5E78 (DpiSharedPowerRegister.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v4; // r14
  ULONG_PTR v5; // rbx
  int v6; // edi
  __int64 LowPart; // r12
  __int64 Length; // rdx
  __int64 Options; // r8
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 UserBuffer; // r9
  int v12; // eax
  int v13; // eax
  __int64 v14; // r13
  _QWORD *v15; // r12
  _QWORD *v16; // rsi
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // cl
  PRKMUTEX v21; // r14
  __int64 v22; // r12
  PRKMUTEX v23; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v25)(PRKMUTEX, ULONG_PTR *); // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  ULONG_PTR v31; // [rsp+80h] [rbp+40h] BYREF
  PRKMUTEX Mutex; // [rsp+88h] [rbp+48h]
  PERESOURCE Resource; // [rsp+90h] [rbp+50h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v31 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  UserBuffer = (__int64)a2->UserBuffer;
  v12 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2302031;
  if ( v12 )
  {
    v13 = v12 - 4;
    if ( v13 )
    {
      if ( v13 == 1972 )
      {
        v28 = DpiSharedPowerRegister(a1, Length, (_DWORD)Parameters, Options, UserBuffer, Length, (__int64)&v31);
        v5 = v31;
        v6 = v28;
      }
      else
      {
        v27 = WdLogNewEntry5_WdWarning(a1, Length, Options, UserBuffer);
        *(_QWORD *)(v27 + 24) = LowPart;
        WdLogEvent5_WdWarning(v27);
      }
      goto LABEL_22;
    }
    if ( (unsigned int)Options >= 0x10 && Parameters )
    {
      v6 = 0;
      v14 = *(_QWORD *)&Parameters->CompletionMode;
      Mutex = *(PRKMUTEX *)&Parameters->NamedPipeType;
      KeEnterCriticalRegion();
      Resource = (PERESOURCE)(v4 + 3144);
      ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3144), 1u);
      v15 = (_QWORD *)(v4 + 3304);
      v16 = *(_QWORD **)(v4 + 3304);
      while ( v16 != v15 )
      {
        v17 = v16 - 4;
        v16 = (_QWORD *)*v16;
        v31 = 0LL;
        if ( *(_DWORD *)v17 == 1 )
        {
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, ULONG_PTR *))v14)(Mutex, &v31);
          if ( v6 < 0 )
            break;
          v19 = *((unsigned int *)v17 + 4);
          if ( (_DWORD)v19 == 1 || (int)v19 > 2 && (int)v19 <= 4 )
          {
            *(_DWORD *)(v31 + 8) = v19;
          }
          else
          {
            v29 = WdLogNewEntry5_WdError(v19, v18);
            *(_QWORD *)(v29 + 24) = *((int *)v17 + 4);
            *(_QWORD *)(v29 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v29);
          }
          *(_DWORD *)v31 = *((_DWORD *)v17 + 6);
          *(_DWORD *)(v31 + 4) = *((_DWORD *)v17 + 1);
          *(_DWORD *)(v31 + 12) = *((_DWORD *)v17 + 2);
          v20 = *((_BYTE *)v17 + 12);
          v21 = Mutex;
          *(_BYTE *)(v31 + 16) = v20;
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, ULONG_PTR))(v14 + 8))(v21, v31);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(PRKMUTEX, ULONG_PTR))(v14 + 16))(v21, v31);
            break;
          }
        }
      }
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
LABEL_29:
    v6 = -1073741789;
    v30 = WdLogNewEntry5_WdError(a1, Length);
    *(_QWORD *)(v30 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_22;
  }
  if ( (unsigned int)Options < 0x10 || !Parameters )
    goto LABEL_29;
  Mutex = (PRKMUTEX)(v4 + 3392);
  KeWaitForSingleObject((PVOID)(v4 + 3392), Executive, 0, 0, 0LL);
  v6 = 0;
  v22 = *(_QWORD *)&Parameters->CompletionMode;
  v23 = *(PRKMUTEX *)&Parameters->NamedPipeType;
  for ( i = 0; i < *(_DWORD *)(v4 + 2548); ++i )
  {
    v25 = *(__int64 (__fastcall **)(PRKMUTEX, ULONG_PTR *))v22;
    v31 = 0LL;
    v6 = v25(v23, &v31);
    if ( v6 < 0 )
      break;
    *(_DWORD *)v31 = i;
    *(_DWORD *)(v31 + 4) = 0;
    v6 = (*(__int64 (__fastcall **)(PRKMUTEX, ULONG_PTR))(v22 + 8))(v23, v31);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(PRKMUTEX, ULONG_PTR))(v22 + 16))(v23, v31);
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
LABEL_22:
  a2->IoStatus.Status = v6;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v6;
}
