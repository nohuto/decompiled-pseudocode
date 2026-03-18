/*
 * XREFs of EtwTiLogReadWriteVm @ 0x14074B358
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1405082D0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400A6800 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 */

char __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _KTHREAD *CurrentThread; // rax
  REGHANDLE v10; // rbx
  ULONGLONG v11; // r8
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r13
  const EVENT_DESCRIPTOR *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdi
  int v16; // eax
  struct _KTHREAD *v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  REGHANDLE v22; // rcx
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+1A0h] [rbp+A0h] BYREF

  v28 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode == 1 )
  {
    v10 = EtwThreatIntProvRegHandle;
    v11 = 0x2000LL;
    if ( a4 != 16 )
      v11 = 0x4000LL;
    LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11);
    if ( (_BYTE)CurrentThread )
    {
      v12 = *(_BYTE *)(a3 + 1737);
      v13 = *(_BYTE *)(a2 + 1737);
      if ( a2 == a3 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&THREATINT_WRITEVM_LOCAL;
        v15 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_LOCAL;
      }
      else
      {
        v14 = &THREATINT_WRITEVM_REMOTE;
        v15 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_REMOTE;
      }
      if ( a4 != 16 )
        v15 = v14;
      LOBYTE(CurrentThread) = EtwEventEnabled(v10, v15);
      if ( (_BYTE)CurrentThread )
      {
        if ( a2 != a3 || (LOBYTE(CurrentThread) = EtwProviderEnabled(v10, 0, 0x200uLL), (_BYTE)CurrentThread) )
        {
          if ( v12 > v13 || (LOBYTE(CurrentThread) = EtwProviderEnabled(v10, 0, 0x8000uLL), (_BYTE)CurrentThread) )
          {
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v28;
            v16 = EtwpTiFillProcessIdentity((__int64)v27, a2, &v24);
            v17 = KeGetCurrentThread();
            v18 = 2LL * (unsigned int)(v16 + 1);
            *(&UserData.Ptr + v18) = (ULONGLONG)v17 + 1600;
            *((_QWORD *)&UserData.Size + v18) = 4LL;
            v27[v18] = v17 + 1;
            v27[v18 + 1] = 8LL;
            v19 = EtwpTiFillProcessIdentity((__int64)(&UserData + (unsigned int)(v16 + 3)), a3, &v25) + v16 + 3;
            v20 = 2LL * v19++;
            *(&UserData.Ptr + v20) = (ULONGLONG)&a5;
            *((_QWORD *)&UserData.Size + v20) = 8LL;
            v21 = 2LL * v19;
            *(&UserData.Ptr + v21) = (ULONGLONG)&a6;
            v22 = EtwThreatIntProvRegHandle;
            *((_QWORD *)&UserData.Size + v21) = 8LL;
            LOBYTE(CurrentThread) = EtwWrite(v22, v15, 0LL, v19 + 1, &UserData);
          }
        }
      }
    }
  }
  return (char)CurrentThread;
}
