/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C0139110
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax

  v8 = -1073741816;
  EnterCrit(0LL, 1LL);
  v11 = HMValidateHandle(a1, 6);
  if ( v11 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v9 = *(unsigned int *)(v11 + 16);
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v9;
    }
    if ( a2 && (v14 = *(_DWORD *)(v11 + 16), a3 >= v14) )
    {
      memmove((void *)a2, (const void *)(v11 + 20), v14);
      v8 = 0;
    }
    else
    {
      v8 = -1073741789;
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return v8;
}
