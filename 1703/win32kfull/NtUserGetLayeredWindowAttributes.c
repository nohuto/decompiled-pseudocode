/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C01D9930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetLayeredWindowAttributes @ 0x1C011F04C (_GetLayeredWindowAttributes.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned int LayeredWindowAttributes; // eax
  __int64 v15; // rbx
  BYTE v17[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v19[6]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-18h] BYREF

  v18 = 0;
  v17[0] = 0;
  v19[0] = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v8 = ValidateHwnd(a1);
  v12 = v8;
  if ( !v8 )
    goto LABEL_2;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(v12 + 304) & 0x20) != 0 )
  {
    UserSetLastError(87LL);
LABEL_2:
    v13 = 0LL;
    goto LABEL_19;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v12, &v18, v17, v19);
  v13 = LayeredWindowAttributes;
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
    {
      v10 = W32UserProbeAddress;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = v18;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_BYTE *)W32UserProbeAddress;
      *a3 = v17[0];
    }
    if ( a4 )
    {
      v9 = v19[0] & 3;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v9;
    }
  }
LABEL_19:
  v15 = (int)v13;
  if ( !v20[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v20);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v13, v11);
  return v15;
}
