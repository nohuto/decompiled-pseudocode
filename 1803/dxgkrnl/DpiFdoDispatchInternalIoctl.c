/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x1C01F2D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiSharedPowerRegister @ 0x1C01FBA3C (DpiSharedPowerRegister.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r13
  _QWORD *v16; // r12
  _QWORD *v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // cl
  PRKMUTEX v22; // r14
  __int64 v23; // r12
  PRKMUTEX v24; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v26)(PRKMUTEX, __int64 *); // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+80h] [rbp+40h] BYREF
  PRKMUTEX Mutex; // [rsp+88h] [rbp+48h]
  PERESOURCE Resource; // [rsp+90h] [rbp+50h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v29 = 0LL;
  v7 = *(unsigned int *)(v2 + 24);
  v8 = *(unsigned int *)(v2 + 8);
  v9 = *(unsigned int *)(v2 + 16);
  v10 = *(_QWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v2 + 24) - 2302031;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      if ( v12 == 1972 )
      {
        v14 = DpiSharedPowerRegister(a1, v8, v10, v9, *(_QWORD *)(a2 + 112), v8, (__int64)&v29);
        v5 = v29;
        v6 = v14;
      }
      else
      {
        v13 = WdLogNewEntry5_WdWarning(a1, v8, v9);
        *(_QWORD *)(v13 + 24) = v7;
        WdLogEvent5_WdWarning(v13);
      }
      goto LABEL_31;
    }
    if ( (unsigned int)v9 >= 0x10 && v10 )
    {
      v6 = 0;
      v15 = *(_QWORD *)(v10 + 8);
      Mutex = *(PRKMUTEX *)v10;
      KeEnterCriticalRegion();
      Resource = (PERESOURCE)(v4 + 3168);
      ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3168), 1u);
      v16 = (_QWORD *)(v4 + 3328);
      v17 = *(_QWORD **)(v4 + 3328);
      while ( v17 != v16 )
      {
        v18 = v17 - 4;
        v17 = (_QWORD *)*v17;
        v29 = 0LL;
        if ( *(_DWORD *)v18 == 1 )
        {
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v15)(Mutex, &v29);
          if ( v6 < 0 )
            break;
          v19 = *((unsigned int *)v18 + 4);
          if ( (_DWORD)v19 == 1 || (int)v19 > 2 && (int)v19 <= 4 )
          {
            *(_DWORD *)(v29 + 8) = v19;
          }
          else
          {
            v20 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v20 + 24) = *((int *)v18 + 4);
            *(_QWORD *)(v20 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v20);
          }
          *(_DWORD *)v29 = *((_DWORD *)v18 + 6);
          *(_DWORD *)(v29 + 4) = *((_DWORD *)v18 + 1);
          *(_DWORD *)(v29 + 12) = *((_DWORD *)v18 + 2);
          v21 = *((_BYTE *)v18 + 12);
          v22 = Mutex;
          *(_BYTE *)(v29 + 16) = v21;
          v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v15 + 8))(v22, v29);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(PRKMUTEX, __int64))(v15 + 16))(v22, v29);
            break;
          }
        }
      }
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      goto LABEL_31;
    }
LABEL_30:
    v6 = -1073741789;
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_31;
  }
  if ( (unsigned int)v9 < 0x10 || !v10 )
    goto LABEL_30;
  Mutex = (PRKMUTEX)(v4 + 3416);
  KeWaitForSingleObject((PVOID)(v4 + 3416), Executive, 0, 0, 0LL);
  v6 = 0;
  v23 = *(_QWORD *)(v10 + 8);
  v24 = *(PRKMUTEX *)v10;
  for ( i = 0; i < *(_DWORD *)(v4 + 2548); ++i )
  {
    v26 = *(__int64 (__fastcall **)(PRKMUTEX, __int64 *))v23;
    v29 = 0LL;
    v6 = v26(v24, &v29);
    if ( v6 < 0 )
      break;
    *(_DWORD *)v29 = i;
    *(_DWORD *)(v29 + 4) = 0;
    v6 = (*(__int64 (__fastcall **)(PRKMUTEX, __int64))(v23 + 8))(v24, v29);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(PRKMUTEX, __int64))(v23 + 16))(v24, v29);
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
LABEL_31:
  *(_DWORD *)(a2 + 48) = v6;
  *(_QWORD *)(a2 + 56) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return (unsigned int)v6;
}
