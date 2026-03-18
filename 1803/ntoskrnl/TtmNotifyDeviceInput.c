/*
 * XREFs of TtmNotifyDeviceInput @ 0x140770870
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14077133C (TtmpFindDeviceByToken.c)
 *     TtmiGetTerminalById @ 0x140771C48 (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x140771D4C (TtmiResetTerminalTimeouts.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 *     TtmiLogDeviceInputNotified @ 0x140775A88 (TtmiLogDeviceInputNotified.c)
 */

_QWORD *__fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char DeviceByToken; // di
  char v7; // r15
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rbx
  _QWORD *result; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  int TerminalById; // eax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v7 = 0;
  v8 = TtmiAcquireCurrentSession(&v18);
  if ( v8 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceInput", 734, v8, -1);
LABEL_3:
    v10 = v18;
    goto LABEL_4;
  }
  v10 = v18;
  if ( (*(_DWORD *)(v18 + 4) & 4) != 0 )
  {
    v12 = 742;
    v13 = -1073740715;
LABEL_9:
    TtmiLogError("TtmNotifyDeviceInput", v12, v13, -1);
    goto LABEL_4;
  }
  DeviceByToken = TtmpFindDeviceByToken(v18, a1, a2, &v16);
  if ( !DeviceByToken )
  {
    v12 = 759;
    v13 = -1073741275;
    goto LABEL_9;
  }
  v14 = v16;
  *(_QWORD *)(v16 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v14 + 596) == -1 )
    goto LABEL_3;
  v10 = v18;
  TerminalById = TtmiGetTerminalById(v17, v18);
  if ( TerminalById < 0 )
  {
    v13 = TerminalById;
    v12 = 778;
    goto LABEL_9;
  }
  v7 = TtmiResetTerminalTimeouts(v10, v17[0], 4, 1414809921, a3 & 1);
LABEL_4:
  LOBYTE(v9) = DeviceByToken;
  result = (_QWORD *)TtmiLogDeviceInputNotified(a1, a2, a3, v9, v7);
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
