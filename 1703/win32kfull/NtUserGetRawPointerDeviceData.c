/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C01DA810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GetPointerRawDataInternal @ 0x1C01BB260 (GetPointerRawDataInternal.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        volatile void *Address)
{
  __int64 v6; // r15
  int PointerRawDataInternal; // ebx
  unsigned __int64 v10; // rsi
  SIZE_T v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v29 = EnterSharedCrit(0LL, 1LL);
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v10 = v6 * a2, v10 > 0xFFFFFFFF)
    || (v11 = 28LL * (unsigned int)v6, v11 > 0xFFFFFFFF) )
  {
    v12 = 87LL;
    goto LABEL_14;
  }
  if ( (unsigned int)v11 >= 0x2710000 || (v15 = (void *)Win32AllocPoolWithQuota((unsigned int)v11, 2020635477LL)) == 0LL )
  {
    v12 = 8LL;
LABEL_14:
    UserSetLastError(v12);
    goto LABEL_15;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13, v16, v17);
  ProbeForWrite(Address, 4LL * (unsigned int)v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  v23 = PsGetCurrentProcessWow64Process(v20, v19, v21, v22);
  ProbeForRead(a4, v11, v23 != 0 ? 1 : 4);
  memmove(v15, (const void *)a4, (unsigned int)v11);
  PointerRawDataInternal = GetPointerRawDataInternal(
                             v29,
                             a1,
                             a2,
                             v6,
                             (struct tagPOINTER_DEVICE_PROPERTY *)v15,
                             (unsigned int)v6 * a2,
                             (int *)Address);
  Win32FreePool(v15);
LABEL_15:
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return PointerRawDataInternal;
}
