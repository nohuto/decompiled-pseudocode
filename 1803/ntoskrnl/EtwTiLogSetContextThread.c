/*
 * XREFs of EtwTiLogSetContextThread @ 0x14056B5D8
 * Callers:
 *     NtSetContextThread @ 0x14056B4B0 (NtSetContextThread.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140062600 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x1404D9FAC (EtwpTiFillVad.c)
 *     EtwpTiQueryVad @ 0x14056B8D4 (EtwpTiQueryVad.c)
 *     EtwpTiParseContextRecord @ 0x14056BA30 (EtwpTiParseContextRecord.c)
 *     EtwpTiFillZeroVad @ 0x1407AE624 (EtwpTiFillZeroVad.c)
 */

void __fastcall EtwTiLogSetContextThread(int a1, __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v5; // rsi
  __int64 v6; // r14
  REGHANDLE v7; // rdi
  _KPROCESS *Process; // rbx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int16 v17; // ax
  __int64 v18; // rdx
  char v19; // r8
  _BYTE *v20; // rax
  __int64 v21; // rcx
  REGHANDLE v22; // rdi
  char Vad; // di
  __int64 v24; // rax
  int v25; // edi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
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
          *(&v34.Ptr + v13) = a2 + 1600;
          *(&v34.Size + 2 * v13) = 4;
          HIDWORD(v35[v13 + 1]) = 0;
          v35[v13] = a2 + 1520;
          v14 = v12 + 2;
          v15 = v12 + 3;
          LODWORD(v35[v13 + 1]) = 8;
          v16 = 2LL * v14;
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x400uLL) )
          {
            v17 = EtwpTiParseContextRecord(v36, a3);
            *(&v34.Reserved + 2 * v16) = 0;
            v18 = 12LL;
            v19 = v17;
            v30 = v17;
            *(&v34.Size + 2 * v16) = 2;
            *(&v34.Ptr + v16) = (ULONGLONG)&v30;
            v20 = v36;
            do
            {
              v21 = v15++;
              v21 *= 2LL;
              *(&v34.Reserved + 2 * v21) = 0;
              *(&v34.Ptr + v21) = (ULONGLONG)v20;
              v20 += 8;
              *(&v34.Size + 2 * v21) = 8;
              --v18;
            }
            while ( v18 );
          }
          else
          {
            v19 = 0;
            *(&v34.Size + 2 * v16) = 2;
            *(&v34.Reserved + 2 * v16) = 0;
            v30 = 0;
            *(&v34.Ptr + v16) = (ULONGLONG)&unk_140319198;
            v27 = 12LL;
            do
            {
              v28 = v15++;
              v28 *= 2LL;
              *(&v34.Reserved + 2 * v28) = 0;
              *(&v34.Ptr + v28) = (ULONGLONG)&unk_140319198;
              *(&v34.Size + 2 * v28) = 8;
              --v27;
            }
            while ( v27 );
          }
          if ( (v19 & 1) != 0
            && (v22 = EtwThreatIntProvRegHandle, EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x800uLL)) )
          {
            UserData = EtwProviderEnabled(v22, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v33, v6, v36, 1LL, UserData);
          }
          else
          {
            Vad = 0;
            memset(v33, 0, 0x30uLL);
          }
          v24 = 16LL * v15;
          v25 = Vad & 1;
          if ( v25 )
            v26 = EtwpTiFillVad((__int64)&v34 + v24, (__int64)v33);
          else
            v26 = EtwpTiFillZeroVad((char *)&v34 + v24);
          EtwWrite(EtwThreatIntProvRegHandle, v5, 0LL, v26 + v15, &v34);
          if ( v25 )
          {
            if ( v33[5] )
              ExFreePoolWithTag(v33[5], 0x6E734954u);
          }
        }
      }
    }
  }
}
