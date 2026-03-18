/*
 * XREFs of NtUserBuildHimcList @ 0x1C0107CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _BuildHimcList @ 0x1C0107DC4 (_BuildHimcList.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v17; // rax
  _BYTE v18[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v15 = -1073741823;
    goto LABEL_7;
  }
  if ( a1 )
  {
    if ( a1 == -1 )
    {
      v8 = 0LL;
    }
    else
    {
      v17 = PtiFromThreadId(a1);
      v8 = v17;
      if ( !v17 || (v11 = *(_QWORD *)(v17 + 408)) == 0 )
      {
        v15 = -1073741811;
        goto LABEL_7;
      }
      v12 = gptiCurrent;
      if ( v11 != *(_QWORD *)(gptiCurrent + 408LL) )
      {
        v15 = -1073741790;
        goto LABEL_7;
      }
    }
  }
  else
  {
    v8 = gptiCurrent;
  }
  ProbeForWrite(a3, 8 * v6, 4u);
  v9 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v9 = (unsigned int *)W32UserProbeAddress;
  *v9 = *v9;
  v10 = BuildHimcList(v8, (unsigned int)v6, a3);
  v15 = (unsigned int)v6 < v10 ? 0xC0000023 : 0;
  *a4 = v10;
LABEL_7:
  if ( !v18[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v18);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
