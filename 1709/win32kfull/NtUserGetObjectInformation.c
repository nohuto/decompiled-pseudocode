/*
 * XREFs of NtUserGetObjectInformation @ 0x1C00F0ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1C00F1074 (_GetUserObjectInformation.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetObjectInformation(HANDLE Handle, int a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  SIZE_T v5; // r15
  __int64 v9; // rcx
  ULONG v10; // r8d
  _DWORD *v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  int UserObjectInformation; // edi
  char *v15; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  int v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF

  v5 = a4;
  v20 = 0;
  EnterCrit(0LL, 1LL);
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v9) )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v21 = ++gdwAtomicCheckSerial;
        v17 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v17 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v17 >= gdwAtomicCheckLogSize )
              goto LABEL_4;
          }
          v18 = (unsigned __int64)v17 << 6;
          *(_DWORD *)(v18 + gpAtomickCheckStacks) = v21;
          *(_DWORD *)(v18 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(v18 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v18 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_4:
  v10 = 4;
  if ( a2 != 1 )
    v10 = 2;
  ProbeForWrite(a3, v5, v10);
  if ( a5 )
  {
    v11 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
  }
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)&v20);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v20;
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL, v13);
  }
  v15 = (char *)Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v15) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v19 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v12 = v19;
            v15 = (char *)((unsigned __int64)v19 << 6);
            if ( *(_DWORD *)&v15[gpAtomickCheckStacks] == v21 )
              break;
            if ( ++v19 >= gdwAtomicCheckLogSize )
              goto LABEL_19;
          }
          v12 = (unsigned __int64)v19 << 6;
          *(_DWORD *)(v12 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v15, v12);
  return UserObjectInformation;
}
