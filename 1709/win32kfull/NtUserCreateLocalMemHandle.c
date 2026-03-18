/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C013F930
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // eax

  EnterCrit(0LL, 1LL);
  LOBYTE(v8) = 6;
  v13 = HMValidateHandle(a1, v8, v9, v10);
  v14 = 0;
  if ( v13 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v11 = *(unsigned int *)(v13 + 16);
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v11;
    }
    if ( a2 && (v15 = *(_DWORD *)(v13 + 16), a3 >= v15) )
      memmove((void *)a2, (const void *)(v13 + 20), v15);
    else
      v14 = -1073741789;
  }
  else
  {
    v14 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v14;
}
