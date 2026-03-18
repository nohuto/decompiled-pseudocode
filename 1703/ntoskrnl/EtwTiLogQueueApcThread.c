/*
 * XREFs of EtwTiLogQueueApcThread @ 0x1404C9900
 * Callers:
 *     NtQueueApcThreadEx @ 0x1404C9748 (NtQueueApcThreadEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x14070F99C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x14070FA50 (EtwpTiFillVad.c)
 *     EtwpTiFillZeroVad @ 0x14070FAF8 (EtwpTiFillZeroVad.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 */

void EtwTiLogQueueApcThread(int a1, __int64 a2, ...)
{
  const EVENT_DESCRIPTOR *v3; // rdi
  _KPROCESS *v4; // rsi
  REGHANDLE v5; // r14
  _KPROCESS *Process; // rbx
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  REGHANDLE v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG v17; // ebx
  int Vad; // esi
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // ebx
  PVOID *v24; // rdi
  BOOLEAN v25; // [rsp+28h] [rbp-E0h]
  _QWORD v26[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v32[68]; // [rsp+C8h] [rbp-40h] BYREF
  int v33; // [rsp+338h] [rbp+230h] BYREF
  __int64 v34; // [rsp+348h] [rbp+240h] BYREF
  va_list va; // [rsp+348h] [rbp+240h]
  __int64 v36; // [rsp+350h] [rbp+248h] BYREF
  va_list va1; // [rsp+350h] [rbp+248h]
  __int64 v38; // [rsp+358h] [rbp+250h] BYREF
  va_list va2; // [rsp+358h] [rbp+250h]
  va_list va3; // [rsp+360h] [rbp+258h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v34 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v36 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v38 = va_arg(va3, _QWORD);
  if ( a1 >= 0 )
  {
    v33 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10uLL) )
      {
        v3 = (const EVENT_DESCRIPTOR *)&THREATINT_QUEUEUSERAPC_REMOTE;
        v4 = *(_KPROCESS **)(a2 + 544);
        v5 = EtwThreatIntProvRegHandle;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process == v4 )
          v3 = &THREATINT_QUEUEUSERAPC_LOCAL;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v3) && (Process != v4 || EtwProviderEnabled(v5, 0, 0x200uLL)) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v33;
          UserData.Size = 4;
          v7 = EtwpTiFillProcessIdentity(v32, Process, v27);
          CurrentThread = KeGetCurrentThread();
          v9 = 2LL * (unsigned int)(v7 + 1);
          *(&UserData.Reserved + 2 * v9) = 0;
          *(&UserData.Ptr + v9) = (ULONGLONG)CurrentThread + 1600;
          *(&UserData.Size + 2 * v9) = 4;
          HIDWORD(v32[v9 + 1]) = 0;
          v32[v9] = CurrentThread + 1;
          LODWORD(v32[v9 + 1]) = 8;
          v10 = EtwpTiFillProcessIdentity(&UserData + (unsigned int)(v7 + 3), v4, v28) + v7 + 3;
          v11 = 2LL * v10;
          *(&UserData.Reserved + 2 * v11) = 0;
          *(&UserData.Ptr + v11) = a2 + 1600;
          *(&UserData.Size + 2 * v11) = 4;
          HIDWORD(v32[v11 + 1]) = 0;
          v12 = EtwThreatIntProvRegHandle;
          v32[v11] = a2 + 1512;
          LODWORD(v32[v11 + 1]) = 8;
          v13 = v10 + 2;
          v10 += 3;
          v13 *= 2LL;
          *(&UserData.Reserved + 2 * v13) = 0;
          *(&UserData.Ptr + v13) = (ULONGLONG)va;
          *(&UserData.Size + 2 * v13) = 8;
          v14 = 2LL * v10;
          *(&UserData.Reserved + 2 * v14) = 0;
          *(&UserData.Ptr + v14) = (ULONGLONG)va1;
          *(&UserData.Size + 2 * v14) = 8;
          v15 = v10 + 1;
          v10 += 2;
          v15 *= 2LL;
          *(&UserData.Reserved + 2 * v15) = 0;
          *(&UserData.Ptr + v15) = (ULONGLONG)va2;
          *(&UserData.Size + 2 * v15) = 8;
          v16 = v10;
          v17 = v10 + 1;
          v16 *= 2LL;
          *(&UserData.Reserved + 2 * v16) = 0;
          *(&UserData.Ptr + v16) = (ULONGLONG)va3;
          *(&UserData.Size + 2 * v16) = 8;
          if ( EtwProviderEnabled(v12, 0, 0x800uLL) )
          {
            v26[0] = v34;
            v26[1] = v36;
            v25 = EtwProviderEnabled(v12, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v29, v4, v26, 2LL, v25);
          }
          else
          {
            Vad = 0;
          }
          v19 = 0LL;
          do
          {
            v20 = 16LL * v17;
            if ( _bittest(&Vad, v19) )
              v21 = EtwpTiFillVad((char *)&UserData + v20, &v29[3 * v19]);
            else
              v21 = EtwpTiFillZeroVad((char *)&UserData + v20);
            v17 += v21;
            v19 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v19 < 2 );
          EtwWrite(EtwThreatIntProvRegHandle, v3, 0LL, v17, &UserData);
          v23 = 0;
          v24 = (PVOID *)&v30;
          do
          {
            if ( _bittest(&Vad, v23) )
            {
              if ( *v24 )
                ExFreePoolWithTag(*v24, 0x6E734954u);
            }
            ++v23;
            v24 += 6;
          }
          while ( v23 < 2 );
        }
      }
    }
  }
}
