/*
 * XREFs of NtUserBuildPropList @ 0x1C01001B0
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C01002A0 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // ebx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v11 = gptiCurrent;
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v12 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = *v12;
      v13 = BuildPropList(v10, a3, a2, a4);
    }
    else
    {
      v13 = -1073741816;
    }
    ThreadUnlock1(v11, v8);
  }
  else
  {
    v13 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v13;
}
