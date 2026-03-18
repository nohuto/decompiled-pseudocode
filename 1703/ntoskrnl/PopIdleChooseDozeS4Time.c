/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x140236FA8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     <none>
 */

char __fastcall PopIdleChooseDozeS4Time(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 v2; // r10
  char v3; // bl
  int v4; // r11d
  unsigned __int64 v5; // r9

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 10000000LL * *((unsigned int *)PopPolicy + 22);
  if ( dword_14034B0D0 )
  {
    v3 = 1;
    LOBYTE(v4) = dword_14034B0D0 != 1;
    v4 += 3;
  }
  else if ( qword_14034B0C8 > MEMORY[0xFFFFF78000000014] )
  {
    if ( MEMORY[0xFFFFF78000000008] - qword_14034B0F8 <= 10000000
                                                       * (unsigned __int64)(unsigned int)PopSmartUserPresenceGracePeriod )
      v2 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod - (MEMORY[0xFFFFF78000000008] - qword_14034B0F8);
    if ( (__int64)(v2 + MEMORY[0xFFFFF78000000014]) < qword_14034B0C8
                                                    - 10000000 * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL)
      && (!v2 || !v5 || v2 < v5) )
    {
      v3 = 1;
      v4 = 2;
    }
    v2 = -(__int64)v2;
  }
  if ( v5 && !v4 )
  {
    v3 = 1;
    v2 = -10000000LL * *((unsigned int *)PopPolicy + 22);
    v4 = 1;
  }
  *a1 = v2;
  if ( a2 )
    *a2 = v4;
  return v3;
}
