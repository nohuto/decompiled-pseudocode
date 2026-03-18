/*
 * XREFs of NtUserGetIconInfo @ 0x1C0098EF0
 * Callers:
 *     <none>
 * Callees:
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C00992C0 (FindSystemDpiCursorSize.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        _OWORD *a3,
        struct _UNICODE_STRING *a4,
        _DWORD *a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  ULONG64 v12; // rcx
  __int64 SystemDpiCursorSize; // r13
  __int64 v14; // rax
  ULONG64 v15; // rdx
  _DWORD *v16; // rdx
  ULONG64 v17; // rcx
  _BYTE *v18; // rdx
  int IconInfo; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _UNICODE_STRING *v23; // [rsp+40h] [rbp-78h]
  int *v24; // [rsp+48h] [rbp-70h]
  char v25[8]; // [rsp+58h] [rbp-60h] BYREF
  int v26; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v27; // [rsp+68h] [rbp-50h]
  int v28; // [rsp+70h] [rbp-48h] BYREF
  volatile void *v29; // [rsp+78h] [rbp-40h]
  unsigned __int64 v30; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  LOBYTE(v10) = 3;
  v11 = HMValidateHandle(a1, v10);
  if ( v11 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v11);
    if ( a3 )
    {
      v17 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      v26 = *(_DWORD *)v17;
      v27 = *(volatile void **)(v17 + 8);
      ProbeForWrite(v27, HIWORD(v26), 2u);
      v24 = &v26;
    }
    else
    {
      v24 = 0LL;
    }
    if ( a4 )
    {
      v15 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v15 = MmUserProbeAddress;
      v28 = *(_DWORD *)v15;
      v29 = *(volatile void **)(v15 + 8);
      ProbeForWrite(v29, HIWORD(v28), 2u);
      v23 = (struct _UNICODE_STRING *)&v28;
    }
    else
    {
      v23 = 0LL;
    }
    if ( a5 )
    {
      v12 = MmUserProbeAddress;
      v16 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *v16;
    }
    v14 = -PsGetCurrentProcessWow64Process(v12);
    v30 = (-(__int64)(v14 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    if ( ((v14 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = *v18;
    v18[31] = v18[31];
    IconInfo = InternalGetIconInfo(SystemDpiCursorSize, a2, (__int64)v24, v23, a5, a6);
    if ( a3 )
    {
      v24[1] = 0;
      *a3 = *(_OWORD *)v24;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v23->MaximumLength + 1) = 0;
      *a4 = *v23;
    }
  }
  else
  {
    IconInfo = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v21, v20);
  return IconInfo;
}
