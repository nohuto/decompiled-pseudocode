/*
 * XREFs of NtUserBuildHimcList @ 0x1C0112B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _BuildHimcList @ 0x1C0112C78 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE v18[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v9 = 0LL;
      }
      else
      {
        v16 = PtiFromThreadId(a1);
        v9 = v16;
        if ( !v16 || (v17 = *(_QWORD *)(v16 + 432)) == 0 )
        {
          v12 = -1073741811;
          goto LABEL_7;
        }
        if ( v17 != *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v12 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v9 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = BuildHimcList(v9, (unsigned int)v6, a3);
    v12 = (unsigned int)v6 < v11 ? 0xC0000023 : 0;
    *a4 = v11;
  }
  else
  {
    UserSetLastError(120LL, v8);
    v12 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v14, v13);
  return v12;
}
