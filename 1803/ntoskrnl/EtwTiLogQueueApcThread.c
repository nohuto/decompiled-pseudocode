/*
 * XREFs of EtwTiLogQueueApcThread @ 0x1404D930C
 * Callers:
 *     NtQueueApcThreadEx @ 0x14056BB80 (NtQueueApcThreadEx.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140062600 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x1404D9FAC (EtwpTiFillVad.c)
 *     EtwpTiQueryVad @ 0x14056B8D4 (EtwpTiQueryVad.c)
 *     EtwpTiFillZeroVad @ 0x1407AE624 (EtwpTiFillZeroVad.c)
 */

void EtwTiLogQueueApcThread(int a1, __int64 a2, __int64 a3, ...)
{
  const EVENT_DESCRIPTOR *v5; // r14
  __int64 v6; // rdi
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
  REGHANDLE v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  ULONG v23; // ebx
  int Vad; // esi
  __int64 v25; // r11
  __int64 v26; // r8
  int v27; // eax
  int v28; // r11d
  unsigned int v29; // ebx
  PVOID *v30; // rdi
  __int16 v31; // ax
  BOOLEAN UserData; // [rsp+20h] [rbp-E0h]
  _QWORD v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
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
        v6 = *(_QWORD *)(a2 + 544);
        v7 = EtwThreatIntProvRegHandle;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process == (_KPROCESS *)v6 )
          v5 = &THREATINT_QUEUEUSERAPC_LOCAL;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v5)
          && (Process != (_KPROCESS *)v6 || EtwProviderEnabled(v7, 0, 0x200uLL)) )
        {
          v38.Reserved = 0;
          v38.Ptr = (ULONGLONG)&v40;
          v38.Size = 4;
          v9 = EtwpTiFillProcessIdentity((__int64)v39, (__int64)Process, &v34);
          CurrentThread = KeGetCurrentThread();
          v11 = 2LL * (unsigned int)(v9 + 1);
          *(&v38.Reserved + 2 * v11) = 0;
          *(&v38.Ptr + v11) = (ULONGLONG)CurrentThread + 1600;
          *(&v38.Size + 2 * v11) = 4;
          HIDWORD(v39[v11 + 1]) = 0;
          v39[v11] = CurrentThread + 1;
          LODWORD(v39[v11 + 1]) = 8;
          v12 = EtwpTiFillProcessIdentity((__int64)(&v38 + (unsigned int)(v9 + 3)), v6, &v35) + v9 + 3;
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
            || (v31 = *(_WORD *)(v16 + 8), v31 != 332) && v31 != 452
            || (v33[0] = -(a3 >> 2), v33[0] > 0xFFFFFFFFuLL) )
          {
            v33[0] = a3;
          }
          v17 = EtwThreatIntProvRegHandle;
          v18 = 2LL * v14;
          *(&v38.Reserved + 2 * v18) = 0;
          *(&v38.Ptr + v18) = (ULONGLONG)v33;
          *(&v38.Size + 2 * v18) = 8;
          v19 = v14 + 1;
          v20 = v14 + 2;
          v19 *= 2LL;
          *(&v38.Reserved + 2 * v19) = 0;
          *(&v38.Ptr + v19) = (ULONGLONG)va;
          *(&v38.Size + 2 * v19) = 8;
          v21 = 2LL * v20;
          *(&v38.Reserved + 2 * v21) = 0;
          *(&v38.Ptr + v21) = (ULONGLONG)va1;
          *(&v38.Size + 2 * v21) = 8;
          v22 = v20 + 1;
          v23 = v20 + 2;
          v22 *= 2LL;
          *(&v38.Reserved + 2 * v22) = 0;
          *(&v38.Ptr + v22) = (ULONGLONG)va2;
          *(&v38.Size + 2 * v22) = 8;
          if ( EtwProviderEnabled(v17, 0, 0x800uLL) )
          {
            v33[1] = v41;
            UserData = EtwProviderEnabled(v17, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v36, v6, v33, 2LL, UserData);
          }
          else
          {
            Vad = 0;
          }
          v25 = 0LL;
          do
          {
            v26 = 16LL * v23;
            if ( _bittest(&Vad, v25) )
              v27 = EtwpTiFillVad((char *)&v38 + v26, &v36[3 * v25]);
            else
              v27 = EtwpTiFillZeroVad((char *)&v38 + v26);
            v23 += v27;
            v25 = (unsigned int)(v28 + 1);
          }
          while ( (unsigned int)v25 < 2 );
          EtwWrite(EtwThreatIntProvRegHandle, v5, 0LL, v23, &v38);
          v29 = 0;
          v30 = (PVOID *)&v37;
          do
          {
            if ( _bittest(&Vad, v29) )
            {
              if ( *v30 )
                ExFreePoolWithTag(*v30, 0x6E734954u);
            }
            ++v29;
            v30 += 6;
          }
          while ( v29 < 2 );
        }
      }
    }
  }
}
