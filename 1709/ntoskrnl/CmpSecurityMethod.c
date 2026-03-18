/*
 * XREFs of CmpSecurityMethod @ 0x1404832A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall CmpSecurityMethod(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG_PTR v7; // rdi
  char v9; // si
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r9d
  int v12; // ecx
  int v13; // eax
  int KeySecurity; // eax
  unsigned int v15; // ebx
  int v16; // ecx
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-91h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-91h]
  __int64 v21; // [rsp+28h] [rbp-89h]
  _QWORD v22[2]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v23; // [rsp+50h] [rbp-61h]
  _QWORD v24[7]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v25[3]; // [rsp+90h] [rbp-21h] BYREF

  v7 = a2;
  memset(v25, 0, sizeof(v25));
  v23 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v25, 0x20000u);
  v22[1] = v22;
  v9 = 0;
  v22[0] = v22;
  memset(v24, 0, sizeof(v24));
  if ( CmpTraceRoutine && a1 )
    v23 = a1[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v24[3] = a5;
      v12 = 36;
      v21 = (__int64)a1;
      BugCheckParameter4a = 37;
    }
    else
    {
      if ( (_DWORD)v7 )
        goto LABEL_10;
      v12 = 38;
      v21 = (__int64)a1;
      BugCheckParameter4a = 39;
    }
    LOBYTE(v11) = 1;
    v24[0] = a1;
    v24[1] = a3;
    v24[2] = a4;
    v13 = CmpCallCallBacksEx(v12, (unsigned int)v24, 0, v11, BugCheckParameter4a, v21, (__int64)v22);
    if ( v13 < 0 )
    {
      v15 = 0;
      if ( v13 != -1073740541 )
        v15 = v13;
      goto LABEL_18;
    }
    v9 = 1;
  }
LABEL_10:
  if ( (_DWORD)v7 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5, BugCheckParameter4);
  }
  else if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 2 )
      goto LABEL_13;
    if ( (_DWORD)v7 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, a1[1], v7);
    KeySecurity = CmpAssignKeySecurity((__int64)a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4);
  }
  v15 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v15 = 0;
  if ( !v9 )
    goto LABEL_18;
  if ( (_DWORD)v7 == 1 )
  {
    v16 = 37;
LABEL_17:
    v15 = CmPostCallbackNotificationEx(v16, (_DWORD)a1, v15, (unsigned int)v24, 0LL, (__int64)v22);
    goto LABEL_18;
  }
  if ( !(_DWORD)v7 )
  {
    v16 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( CmpTraceRoutine )
  {
    LOBYTE(v17) = ((_DWORD)v7 != 0) + 28;
    CmpTraceRoutine(v17, v25, v15, 0LL, v23, 0LL);
  }
  return v15;
}
