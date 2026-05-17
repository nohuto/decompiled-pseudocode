/*
 * XREFs of sub_1800389D0 @ 0x1800389D0
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18002E040 (LdrGetDllHandleByMapping.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     LdrGetDllHandleByName @ 0x1800772B0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_1800389D0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      *(_DWORD *)(v6 + 24) = v7 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v6 + 28);
    }
    else
    {
      v5 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  return v5;
}
