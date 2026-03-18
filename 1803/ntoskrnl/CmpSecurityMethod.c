/*
 * XREFs of CmpSecurityMethod @ 0x1404A6510
 * Callers:
 *     <none>
 * Callees:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpSecurityMethod(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG_PTR v10; // rsi
  char v12; // di
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int KeySecurity; // eax
  int v20; // ecx
  __int64 v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E8h]
  _QWORD v24[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _QWORD v26[7]; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v27[4]; // [rsp+90h] [rbp-78h] BYREF

  v10 = a2;
  memset(v27, 0, sizeof(v27));
  v25 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v27, 0x20000u);
  v24[1] = v24;
  v12 = 0;
  v24[0] = v24;
  memset(v26, 0, sizeof(v26));
  if ( CmpTraceRoutine && a1 )
    v25 = a1[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    if ( (_DWORD)v10 == 1 )
    {
      v15 = 36;
      v26[3] = a5;
      v16 = 37;
    }
    else
    {
      if ( (_DWORD)v10 )
        goto LABEL_10;
      v15 = 38;
      v16 = 39;
    }
    v26[2] = a4;
    LOBYTE(v13) = 1;
    v26[1] = a3;
    v26[0] = a1;
    v17 = CmpCallCallBacksEx(v15, (unsigned int)v26, 0, v13, v16, (__int64)a1, (__int64)v24);
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073740541 )
        v18 = 0;
      goto LABEL_18;
    }
    v12 = 1;
  }
LABEL_10:
  if ( (_DWORD)v10 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5, BugCheckParameter4);
  }
  else if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == 2 )
      goto LABEL_13;
    if ( (_DWORD)v10 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, a1[1], v10);
    KeySecurity = CmpAssignKeySecurity((__int64)a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4, v13, a7, a8);
  }
  v18 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v18 = 0;
  if ( !v12 )
    goto LABEL_18;
  if ( (_DWORD)v10 == 1 )
  {
    v20 = 37;
LABEL_17:
    v18 = CmPostCallbackNotificationEx(v20, (__int64)a1, v18, (__int64)v26, 0LL, v24);
    goto LABEL_18;
  }
  if ( !(_DWORD)v10 )
  {
    v20 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( CmpTraceRoutine )
  {
    LOBYTE(v21) = ((_DWORD)v10 != 0) + 28;
    CmpTraceRoutine(v21, v27, v18, 0LL, v25, 0LL);
  }
  return v18;
}
