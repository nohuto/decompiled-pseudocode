/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01E4270
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  ULONG_PTR v14; // r14
  unsigned int v15; // edi
  __int64 v16; // rsi
  int v17; // ecx
  void *v18; // r12
  void *v19; // rdi
  size_t v20; // r15
  ULONG64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // [rsp+40h] [rbp-D8h]
  int v32; // [rsp+48h] [rbp-D0h]
  __int16 v33; // [rsp+48h] [rbp-D0h]
  int v34; // [rsp+50h] [rbp-C8h] BYREF
  void *v35; // [rsp+58h] [rbp-C0h]
  __int64 v36; // [rsp+60h] [rbp-B8h]
  HDC v37; // [rsp+68h] [rbp-B0h]
  _QWORD v38[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v39[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v40[3]; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v41; // [rsp+C0h] [rbp-58h] BYREF

  v36 = a4;
  v37 = a2;
  v9 = a6;
  v31 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
LABEL_3:
      v15 = 0;
      goto LABEL_30;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( a5 )
  {
    LOBYTE(v10) = 3;
    v16 = HMValidateHandle(a5, v10, v11, v12);
    if ( !v16 )
      goto LABEL_3;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v41 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v17 = *(_DWORD *)v9;
  v32 = *(_DWORD *)v9;
  v34 = *(_DWORD *)v9;
  v18 = *(void **)(v9 + 8);
  v19 = v18;
  v35 = v18;
  if ( v18 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v17;
    v21 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    if ( v21 >= MmUserProbeAddress
      || (unsigned __int16)v17 > HIWORD(v32)
      || (v17 & 1) != 0
      || v21 <= (unsigned __int64)v18 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v33 = v17 + 2;
    v22 = Win32AllocPoolWithQuota((unsigned __int16)v17 + 2LL, 2020897621LL);
    v19 = (void *)v22;
    v35 = (void *)v22;
    if ( !v22 )
      ExRaiseStatus(-1073741801);
    v31 = 1;
    PushW32ThreadLock(v22, v40, (__int64)Win32FreePool, v23);
    memmove(v19, v18, v20);
    *((_WORD *)v19 + (v20 >> 1)) = 0;
    HIWORD(v34) = v33;
  }
  v38[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v38;
  v38[1] = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v19 = v35;
  }
  v39[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v39;
  v39[1] = v16;
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v19 = v35;
  }
  v15 = xxxDrawCaptionTemp(
          v14,
          v37,
          &v41,
          v36,
          (struct tagCURSOR *)v16,
          (unsigned __int16 *)((unsigned __int64)&v34 & -(__int64)(v19 != 0LL)),
          a7);
  ThreadUnlock1(v25, v24);
  ThreadUnlock1(v27, v26);
  if ( v31 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v40, v10, v28, v29);
LABEL_30:
  UserSessionSwitchLeaveCrit(v13, v10);
  return v15;
}
