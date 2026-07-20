/*
 * XREFs of SmpDeleteSubSys @ 0x140013180
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140004120 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x14001223C (SmpLoadSubSystem.c)
 * Callees:
 *     SmpCompleteSubSysStatusChange @ 0x140003AB4 (SmpCompleteSubSysStatusChange.c)
 *     SmpUnlockKnownSubSysList @ 0x140004668 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140004A5C (SmpLockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x140004A94 (SmpDereferenceKnownSubSys.c)
 */

void __fastcall SmpDeleteSubSys(char *BaseAddress)
{
  BOOL v2; // edi
  char **v3; // rdx
  PVOID *v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (*((_DWORD *)BaseAddress + 2) & 4) == 0;
  if ( (*((_DWORD *)BaseAddress + 2) & 4) == 0 )
  {
    SmpLockKnownSubSysList(*((_DWORD *)BaseAddress + 16), 0, (__int64)v5);
    if ( (BaseAddress[8] & 4) != 0 )
    {
      v2 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)BaseAddress + 2, 4u);
      v3 = (char **)*((_QWORD *)BaseAddress + 9);
      if ( v3[1] != BaseAddress + 72 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 10), *v4 != BaseAddress + 72) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
    }
    SmpUnlockKnownSubSysList((__int64)v5);
  }
  if ( v2 )
  {
    SmpCompleteSubSysStatusChange((__int64)BaseAddress);
    SmpDereferenceKnownSubSys(BaseAddress);
  }
}
