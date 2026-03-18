/*
 * XREFs of EtwTiLogQueueApcThread @ 0x1404D9734
 * Callers:
 *     NtQueueApcThreadEx @ 0x1404D9590 (NtQueueApcThreadEx.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400A6800 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x14074C6F0 (EtwpTiFillVad.c)
 *     EtwpTiFillZeroVad @ 0x14074C798 (EtwpTiFillZeroVad.c)
 *     EtwpTiQueryVad @ 0x14074C920 (EtwpTiQueryVad.c)
 */

void EtwTiLogQueueApcThread(int a1, __int64 a2, __int64 a3, ...)
{
  const EVENT_DESCRIPTOR *v5; // r14
  _KPROCESS *v6; // rdi
  REGHANDLE v7; // r15
  _KPROCESS *Process; // rbx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int16 v17; // ax
  REGHANDLE v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  ULONG v24; // ebx
  int Vad; // esi
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  int v29; // r8d
  unsigned int v30; // ebx
  PVOID *v31; // rdi
  BOOLEAN UserData; // [rsp+20h] [rbp-E0h]
  _QWORD v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v39[68]; // [rsp+C0h] [rbp-40h] BYREF
  int v40; // [rsp+330h] [rbp+230h] BYREF
  __int64 v41; // [rsp+348h] [rbp+248h] BYREF
  va_list va; // [rsp+348h] [rbp+248h]
  __int64 v43; // [rsp+350h] [rbp+250h] BYREF
  va_list va1; // [rsp+350h] [rbp+250h]
  va_list va2; // [rsp+358h] [rbp+258h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  if ( a1 >= 0 )
  {
    v40 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x80uLL) )
      {
        v5 = (const EVENT_DESCRIPTOR *)&THREATINT_QUEUEUSERAPC_REMOTE;
        v6 = *(_KPROCESS **)(a2 + 544);
        v7 = EtwThreatIntProvRegHandle;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process == v6 )
          v5 = &THREATINT_QUEUEUSERAPC_LOCAL;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v5) && (Process != v6 || EtwProviderEnabled(v7, 0, 0x200uLL)) )
        {
          v38.Reserved = 0;
          v38.Ptr = (ULONGLONG)&v40;
          v38.Size = 4;
          v9 = EtwpTiFillProcessIdentity(v39, Process, v34);
          CurrentThread = KeGetCurrentThread();
          v11 = 2LL * (unsigned int)(v9 + 1);
          *(&v38.Reserved + 2 * v11) = 0;
          *(&v38.Ptr + v11) = (ULONGLONG)CurrentThread + 1600;
          *(&v38.Size + 2 * v11) = 4;
          HIDWORD(v39[v11 + 1]) = 0;
          v39[v11] = CurrentThread + 1;
          LODWORD(v39[v11 + 1]) = 8;
          v12 = EtwpTiFillProcessIdentity(&v38 + (unsigned int)(v9 + 3), v6, v35) + v9 + 3;
          v13 = 2LL * v12;
          v14 = v12 + 2;
          *(&v38.Reserved + 2 * v13) = 0;
          *(&v38.Ptr + v13) = a2 + 1600;
          *(&v38.Size + 2 * v13) = 4;
          HIDWORD(v39[v13 + 1]) = 0;
          v39[v13] = a2 + 1520;
          v15 = *(_QWORD *)(a2 + 544);
          LODWORD(v39[v13 + 1]) = 8;
          v16 = *(_QWORD *)(v15 + 1064);
          if ( !v16
            || (v17 = *(_WORD *)(v16 + 8), v17 != 332) && v17 != 452
            || (v33[0] = -(a3 >> 2), v33[0] > 0xFFFFFFFFuLL) )
          {
            v33[0] = a3;
          }
          v18 = EtwThreatIntProvRegHandle;
          v19 = 2LL * v14;
          *(&v38.Reserved + 2 * v19) = 0;
          *(&v38.Ptr + v19) = (ULONGLONG)v33;
          *(&v38.Size + 2 * v19) = 8;
          v20 = v14 + 1;
          v21 = v14 + 2;
          v20 *= 2LL;
          *(&v38.Reserved + 2 * v20) = 0;
          *(&v38.Ptr + v20) = (ULONGLONG)va;
          *(&v38.Size + 2 * v20) = 8;
          v22 = 2LL * v21;
          *(&v38.Reserved + 2 * v22) = 0;
          *(&v38.Ptr + v22) = (ULONGLONG)va1;
          *(&v38.Size + 2 * v22) = 8;
          v23 = v21 + 1;
          v24 = v21 + 2;
          v23 *= 2LL;
          *(&v38.Reserved + 2 * v23) = 0;
          *(&v38.Ptr + v23) = (ULONGLONG)va2;
          *(&v38.Size + 2 * v23) = 8;
          if ( EtwProviderEnabled(v18, 0, 0x800uLL) )
          {
            v33[1] = v41;
            UserData = EtwProviderEnabled(v18, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v36, v6, v33, 2LL, UserData);
          }
          else
          {
            Vad = 0;
          }
          v26 = 0LL;
          do
          {
            v27 = 16LL * v24;
            if ( _bittest(&Vad, v26) )
              v28 = EtwpTiFillVad((char *)&v38 + v27, &v36[3 * v26]);
            else
              v28 = EtwpTiFillZeroVad((char *)&v38 + v27);
            v24 += v28;
            v26 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v26 < 2 );
          EtwWrite(EtwThreatIntProvRegHandle, v5, 0LL, v24, &v38);
          v30 = 0;
          v31 = (PVOID *)&v37;
          do
          {
            if ( _bittest(&Vad, v30) )
            {
              if ( *v31 )
                ExFreePoolWithTag(*v31, 0x6E734954u);
            }
            ++v30;
            v31 += 6;
          }
          while ( v30 < 2 );
        }
      }
    }
  }
}
