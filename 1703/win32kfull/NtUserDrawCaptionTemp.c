/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01D7A50
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rdi
  int v18; // r15d
  void *v19; // r12
  void *v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+40h] [rbp-D8h]
  int v29; // [rsp+44h] [rbp-D4h]
  int v30; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-C8h]
  __int64 v32; // [rsp+58h] [rbp-C0h]
  __int64 v33; // [rsp+60h] [rbp-B8h]
  HDC v34; // [rsp+68h] [rbp-B0h]
  _QWORD v35[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v36[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v37[3]; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v38; // [rsp+C0h] [rbp-58h] BYREF

  v33 = a4;
  v34 = a2;
  v9 = a6;
  v28 = 0;
  EnterCrit(0LL, 1LL);
  v10 = gptiCurrent;
  v32 = gptiCurrent;
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_3:
      v16 = 0;
      goto LABEL_30;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( a5 )
  {
    v17 = HMValidateHandle(a5, 3);
    if ( !v17 )
      goto LABEL_3;
  }
  else
  {
    v17 = 0LL;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagRECT *)W32UserProbeAddress;
  v38 = *a3;
  if ( a6 >= W32UserProbeAddress )
    v9 = W32UserProbeAddress;
  v18 = *(_DWORD *)v9;
  v29 = *(_DWORD *)v9;
  v30 = *(_DWORD *)v9;
  v19 = *(void **)(v9 + 8);
  v20 = v19;
  v31 = (__int64)v19;
  if ( v19 )
  {
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (unsigned __int64)v19 + (unsigned __int16)v18 + 2;
    if ( v21 >= W32UserProbeAddress
      || (unsigned __int16)v18 > HIWORD(v29)
      || (v18 & 1) != 0
      || v21 <= (unsigned __int64)v19 )
    {
      *W32UserProbeAddress = 0;
    }
    v22 = Win32AllocPoolWithQuota((unsigned __int16)v18 + 2LL, 2020897621LL);
    v20 = (void *)v22;
    v31 = v22;
    if ( !v22 )
      ExRaiseStatus(-1073741801);
    v28 = 1;
    PushW32ThreadLock(v22, v37, (__int64)Win32FreePool);
    memmove(v20, v19, (unsigned __int16)v18);
    *((_WORD *)v20 + ((unsigned __int64)(unsigned __int16)v18 >> 1)) = 0;
    HIWORD(v30) = v18 + 2;
    v10 = v32;
  }
  v35[0] = *(_QWORD *)(v10 + 368);
  *(_QWORD *)(v10 + 368) = v35;
  v35[1] = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v36[0] = *(_QWORD *)(v10 + 368);
  *(_QWORD *)(v10 + 368) = v36;
  v36[1] = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v16 = xxxDrawCaptionTemp(
          v13,
          v34,
          &v38,
          v33,
          (struct tagCURSOR *)v17,
          (unsigned __int16 *)((unsigned __int64)&v30 & -(__int64)(v20 != 0LL)),
          a7);
  ThreadUnlock1(v24, v23);
  ThreadUnlock1(v26, v25);
  if ( v28 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v37);
LABEL_30:
  UserSessionSwitchLeaveCrit(v12, v11, v14, v15);
  return v16;
}
