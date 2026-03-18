/*
 * XREFs of EtwTiLogSetContextThread @ 0x14070F650
 * Callers:
 *     NtSetContextThread @ 0x1406E2E60 (NtSetContextThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x14070F99C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillVad @ 0x14070FA50 (EtwpTiFillVad.c)
 *     EtwpTiFillZeroVad @ 0x14070FAF8 (EtwpTiFillZeroVad.c)
 *     EtwpTiParseContextRecord @ 0x14070FB60 (EtwpTiParseContextRecord.c)
 *     EtwpTiQueryVad @ 0x14070FC80 (EtwpTiQueryVad.c)
 */

void __fastcall EtwTiLogSetContextThread(int a1, __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v5; // rsi
  _KPROCESS *v6; // r14
  REGHANDLE v7; // rdi
  _KPROCESS *Process; // rbx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  REGHANDLE v15; // rdi
  __int16 v16; // ax
  _BYTE *v17; // r8
  __int64 v18; // rcx
  char v19; // dl
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  char Vad; // di
  int v27; // edi
  int v28; // eax
  BOOLEAN UserData; // [rsp+20h] [rbp-E0h]
  __int16 v30; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v32[8]; // [rsp+40h] [rbp-C0h] BYREF
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
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10uLL) )
      {
        v5 = (const EVENT_DESCRIPTOR *)&THREATINT_SETTHREADCONTEXT_REMOTE;
        v6 = *(_KPROCESS **)(a2 + 544);
        v7 = EtwThreatIntProvRegHandle;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process == v6 )
          v5 = &THREATINT_SETTHREADCONTEXT_LOCAL;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v5) && (Process != v6 || EtwProviderEnabled(v7, 0, 0x200uLL)) )
        {
          v34.Reserved = 0;
          v34.Ptr = (ULONGLONG)&v37;
          v34.Size = 4;
          v9 = EtwpTiFillProcessIdentity(v35, Process, v31);
          CurrentThread = KeGetCurrentThread();
          v11 = 2LL * (unsigned int)(v9 + 1);
          *(&v34.Reserved + 2 * v11) = 0;
          *(&v34.Ptr + v11) = (ULONGLONG)CurrentThread + 1600;
          *(&v34.Size + 2 * v11) = 4;
          HIDWORD(v35[v11 + 1]) = 0;
          v35[v11] = CurrentThread + 1;
          LODWORD(v35[v11 + 1]) = 8;
          v12 = EtwpTiFillProcessIdentity(&v34 + (unsigned int)(v9 + 3), v6, v32) + v9 + 3;
          v13 = 2LL * v12;
          v14 = v12 + 2;
          *(&v34.Reserved + 2 * v13) = 0;
          *(&v34.Ptr + v13) = a2 + 1600;
          *(&v34.Size + 2 * v13) = 4;
          HIDWORD(v35[v13 + 1]) = 0;
          v15 = EtwThreatIntProvRegHandle;
          LODWORD(v35[v13 + 1]) = 8;
          v35[v13] = a2 + 1512;
          if ( EtwProviderEnabled(v15, 0, 0x400uLL) )
          {
            v16 = EtwpTiParseContextRecord(v36, a3);
            v17 = v36;
            v18 = 2LL * v14;
            v30 = v16;
            v19 = v16;
            *(&v34.Reserved + 2 * v18) = 0;
            *(&v34.Ptr + v18) = (ULONGLONG)&v30;
            v20 = v14 + 1;
            *(&v34.Size + 2 * v18) = 2;
            v21 = 12LL;
            do
            {
              v22 = v20++;
              v22 *= 2LL;
              *(&v34.Reserved + 2 * v22) = 0;
              *(&v34.Ptr + v22) = (ULONGLONG)v17;
              v17 += 8;
              *(&v34.Size + 2 * v22) = 8;
              --v21;
            }
            while ( v21 );
            v15 = EtwThreatIntProvRegHandle;
          }
          else
          {
            v19 = 0;
            v23 = 2LL * v14;
            v30 = 0;
            v24 = 12LL;
            *(&v34.Reserved + 2 * v23) = 0;
            v20 = v14 + 1;
            *(&v34.Ptr + v23) = (ULONGLONG)&unk_1402BFE38;
            *(&v34.Size + 2 * v23) = 2;
            do
            {
              v25 = v20++;
              v25 *= 2LL;
              *(&v34.Reserved + 2 * v25) = 0;
              *(&v34.Ptr + v25) = (ULONGLONG)&unk_1402BFE38;
              *(&v34.Size + 2 * v25) = 8;
              --v24;
            }
            while ( v24 );
          }
          if ( (v19 & 1) != 0 && EtwProviderEnabled(v15, 0, 0x800uLL) )
          {
            UserData = EtwProviderEnabled(v15, 0, 0x1000uLL);
            Vad = EtwpTiQueryVad(v33, v6, v36, 1LL, UserData);
          }
          else
          {
            Vad = 0;
            memset(v33, 0, 0x30uLL);
          }
          v27 = Vad & 1;
          if ( v27 )
            v28 = EtwpTiFillVad(&v34 + v20, v33);
          else
            v28 = EtwpTiFillZeroVad(&v34 + v20);
          EtwWrite(EtwThreatIntProvRegHandle, v5, 0LL, v28 + v20, &v34);
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
