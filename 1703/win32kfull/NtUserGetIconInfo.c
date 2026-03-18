/*
 * XREFs of NtUserGetIconInfo @ 0x1C00483C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     FindSystemDpiCursorSize @ 0x1C0049920 (FindSystemDpiCursorSize.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(__int64 a1, _BYTE *a2, _OWORD *a3, _OWORD *a4, unsigned __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int SystemDpiCursorSize; // r12d
  __int64 v21; // rax
  _OWORD *v22; // rdx
  _OWORD *v23; // rcx
  _BYTE *v24; // rdx
  int *v25; // rbx
  int *v26; // rsi
  __int64 v27; // rbx
  _BYTE v29[8]; // [rsp+40h] [rbp-78h] BYREF
  int *v30; // [rsp+48h] [rbp-70h]
  int *v31; // [rsp+50h] [rbp-68h]
  int v32; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v33; // [rsp+68h] [rbp-50h]
  int v34; // [rsp+70h] [rbp-48h] BYREF
  volatile void *v35; // [rsp+78h] [rbp-40h]
  unsigned __int64 v36; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v29[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v29);
  LOBYTE(v10) = 3;
  v11 = HMValidateHandle(a1, v10);
  if ( v11 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v11);
    if ( a3 )
    {
      v23 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v23 = (_OWORD *)W32UserProbeAddress;
      v32 = *(_DWORD *)v23;
      v33 = (volatile void *)*((_QWORD *)v23 + 1);
      ProbeForWrite(v33, HIWORD(v32), 2u);
      v31 = &v32;
    }
    else
    {
      v31 = 0LL;
    }
    if ( a4 )
    {
      v22 = a4;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        v22 = (_OWORD *)W32UserProbeAddress;
      v34 = *(_DWORD *)v22;
      v35 = (volatile void *)*((_QWORD *)v22 + 1);
      ProbeForWrite(v35, HIWORD(v34), 2u);
      v30 = &v34;
    }
    else
    {
      v30 = 0LL;
    }
    if ( a5 )
    {
      v16 = (_DWORD *)a5;
      if ( a5 >= W32UserProbeAddress )
        v16 = (_DWORD *)W32UserProbeAddress;
      *v16 = *v16;
    }
    v21 = -PsGetCurrentProcessWow64Process(v17, v16, v18, v19);
    v36 = (-(__int64)(v21 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    if ( ((v21 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v24 = (_BYTE *)W32UserProbeAddress;
    *v24 = *v24;
    v24[31] = v24[31];
    v25 = v30;
    v26 = v31;
    LODWORD(v11) = InternalGetIconInfo(SystemDpiCursorSize, (_DWORD)a2, (_DWORD)v31, (_DWORD)v30, a5, a6);
    if ( a3 )
    {
      v13 = 0LL;
      v26[1] = 0;
      *a3 = *(_OWORD *)v26;
    }
    if ( a4 )
    {
      v13 = 0LL;
      v25[1] = 0;
      *a4 = *(_OWORD *)v25;
    }
  }
  v27 = (int)v11;
  if ( !v29[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v29);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v27;
}
