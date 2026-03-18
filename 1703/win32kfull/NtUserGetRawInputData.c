/*
 * XREFs of NtUserGetRawInputData @ 0x1C0002540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetRawInputData(__int64 a1, int a2, _QWORD *a3, unsigned int *a4, int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // r15
  unsigned int *v13; // rax
  int v14; // esi
  _BYTE v16[56]; // [rsp+48h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v10 = 24;
  if ( a5 != 24 )
    goto LABEL_22;
  LOBYTE(v9) = 18;
  v11 = HMValidateHandle(a1, v9);
  if ( !v11 || (v12 = (_QWORD *)(v11 + 32), *(_DWORD *)(v11 + 32) > 2u) )
  {
    UserSetLastError(6LL);
    v10 = -1;
    goto LABEL_16;
  }
  if ( a2 == 268435459 )
  {
    v10 = *(_DWORD *)(v11 + 36);
    goto LABEL_6;
  }
  if ( a2 != 268435461 )
  {
LABEL_22:
    v10 = -1;
    UserSetLastError(87LL);
    goto LABEL_16;
  }
LABEL_6:
  if ( a3 )
  {
    v13 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v13 = (unsigned int *)W32UserProbeAddress;
    if ( *v13 < v10 )
    {
      v10 = -1;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      *a4 = *v13;
      UserSetLastError(122LL);
    }
    else
    {
      v14 = a2 - 268435459;
      if ( v14 )
      {
        if ( v14 == 2 )
        {
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            a3 = (_QWORD *)W32UserProbeAddress;
          *(_OWORD *)a3 = *(_OWORD *)v12;
          a3[2] = v12[2];
        }
      }
      else
      {
        ProbeForWrite(a3, v10, 4u);
        memmove(a3, v12, v10);
      }
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v10;
    v10 = 0;
  }
LABEL_16:
  if ( !v16[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v16);
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
