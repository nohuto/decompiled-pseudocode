/*
 * XREFs of EtwTiLogSetContextThread @ 0x14074B560
 * Callers:
 *     NtSetContextThread @ 0x140719430 (NtSetContextThread.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400A6800 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x14074C6F0 (EtwpTiFillVad.c)
 *     EtwpTiFillZeroVad @ 0x14074C798 (EtwpTiFillZeroVad.c)
 *     EtwpTiParseContextRecord @ 0x14074C800 (EtwpTiParseContextRecord.c)
 *     EtwpTiQueryVad @ 0x14074C920 (EtwpTiQueryVad.c)
 */

void __fastcall EtwTiLogSetContextThread(int a1, __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v5; // rsi
  __int64 v6; // rdi
  REGHANDLE v7; // r14
  _KPROCESS *Process; // rbx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int16 v15; // ax
  _BYTE *v16; // r8
  __int64 v17; // rcx
  char v18; // dl
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  REGHANDLE v25; // r14
  char Vad; // di
  int v27; // edi
  int v28; // eax
  BOOLEAN UserData; // [rsp+20h] [rbp-E0h]
  __int16 v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v33[7]; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[72]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v36[96]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v37; // [rsp+370h] [rbp+270h] BYREF

  if ( a1 >= 0 )
  {
    v37 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x100uLL) )
      {
        v5 = (const EVENT_DESCRIPTOR *)&THREATINT_SETTHREADCONTEXT_REMOTE;
        v6 = *(_QWORD *)(a2 + 544);
        v7 = EtwThreatIntProvRegHandle;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process == (_KPROCESS *)v6 )
          v5 = &THREATINT_SETTHREADCONTEXT_LOCAL;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v5)
          && (Process != (_KPROCESS *)v6 || EtwProviderEnabled(v7, 0, 0x200uLL)) )
        {
          v34.Reserved = 0;
          v34.Ptr = (ULONGLONG)&v37;
          v34.Size = 4;
          v9 = EtwpTiFillProcessIdentity((__int64)v35, (__int64)Process, &v31);
          CurrentThread = KeGetCurrentThread();
          v11 = 2LL * (unsigned int)(v9 + 1);
          *(&v34.Reserved + 2 * v11) = 0;
          *(&v34.Ptr + v11) = (ULONGLONG)CurrentThread + 1600;
          *(&v34.Size + 2 * v11) = 4;
          HIDWORD(v35[v11 + 1]) = 0;
          v35[v11] = CurrentThread + 1;
          LODWORD(v35[v11 + 1]) = 8;
          v12 = EtwpTiFillProcessIdentity((__int64)(&v34 + (unsigned int)(v9 + 3)), v6, &v32) + v9 + 3;
          v13 = 2LL * v12;
          *(&v34.Reserved + 2 * v13) = 0;
          *(&v34.Size + 2 * v13) = 4;
          *(&v34.Ptr + v13) = a2 + 1600;
          HIDWORD(v35[v13 + 1]) = 0;
          v35[v13] = a2 + 1520;
          LODWORD(v35[v13 + 1]) = 8;
          v14 = v12 + 2;
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x400uLL) )
          {
            v15 = EtwpTiParseContextRecord(v36, a3);
            v16 = v36;
            v17 = 2LL * v14;
            v30 = v15;
            v18 = v15;
            *(&v34.Reserved + 2 * v17) = 0;
            *(&v34.Ptr + v17) = (ULONGLONG)&v30;
            v19 = v14 + 1;
            *(&v34.Size + 2 * v17) = 2;
            v20 = 12LL;
            do
            {
              v21 = v19++;
              v21 *= 2LL;
              *(&v34.Reserved + 2 * v21) = 0;
              *(&v34.Ptr + v21) = (ULONGLONG)v16;
              v16 += 8;
              *(&v34.Size + 2 * v21) = 8;
              --v20;
            }
            while ( v20 );
          }
          else
          {
            v18 = 0;
            v22 = 2LL * v14;
            v30 = 0;
            v23 = 12LL;
            *(&v34.Reserved + 2 * v22) = 0;
            v19 = v14 + 1;
            *(&v34.Ptr + v22) = (ULONGLONG)&unk_1402DE3A0;
            *(&v34.Size + 2 * v22) = 2;
            do
            {
              v24 = v19++;
              v24 *= 2LL;
              *(&v34.Reserved + 2 * v24) = 0;
              *(&v34.Ptr + v24) = (ULONGLONG)&unk_1402DE3A0;
              *(&v34.Size + 2 * v24) = 8;
              --v23;
            }
            while ( v23 );
          }
          if ( (v18 & 1) != 0
            && (v25 = EtwThreatIntProvRegHandle, EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x800uLL)) )
          {
            UserData = EtwProviderEnabled(v25, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v33, v6, v36, 1LL, UserData);
          }
          else
          {
            Vad = 0;
            memset(v33, 0, 0x30uLL);
          }
          v27 = Vad & 1;
          if ( v27 )
            v28 = EtwpTiFillVad(&v34 + v19, v33);
          else
            v28 = EtwpTiFillZeroVad(&v34 + v19);
          EtwWrite(EtwThreatIntProvRegHandle, v5, 0LL, v28 + v19, &v34);
          if ( v27 )
          {
            if ( v33[5] )
              ExFreePoolWithTag(v33[5], 0x6E734954u);
          }
        }
      }
    }
  }
}
