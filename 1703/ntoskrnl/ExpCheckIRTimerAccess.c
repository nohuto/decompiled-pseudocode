/*
 * XREFs of ExpCheckIRTimerAccess @ 0x14045BCD8
 * Callers:
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 * Callees:
 *     ExCheckValidIRTimerId @ 0x14003B174 (ExCheckValidIRTimerId.c)
 *     RtlCheckTokenMembership @ 0x1400674A0 (RtlCheckTokenMembership.c)
 *     ExpCheckWakeTimerAccess @ 0x140586274 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpCheckIRTimerAccess(int a1, char a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  void *v5; // rax
  unsigned int v6; // edi
  BOOLEAN v7; // al
  unsigned __int16 v9; // [rsp+32h] [rbp+Ah]
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF

  v9 = HIWORD(a1);
  if ( (unsigned int)(unsigned __int16)a1 - 1 > 0xC )
    return 3221225485LL;
  v3 = 3LL * (unsigned __int16)a1;
  v4 = LOBYTE((&ExpIRTimerDescs)[3 * (unsigned __int16)a1 + 1]);
  if ( HIWORD(a1) > (unsigned __int16)v4 )
    return 3221225485LL;
  v5 = *(&ExpIRTimerDescs + v3 + 1);
  v6 = 0;
  if ( a2 )
  {
    IsMember = 0;
    if ( v5 )
    {
      if ( RtlCheckTokenMembership(0LL, v5, &IsMember) < 0 )
        v7 = 0;
      else
        v7 = IsMember;
    }
    else
    {
      LOBYTE(v4) = a2;
      if ( (int)ExpCheckWakeTimerAccess(v4) < 0 || !ExCheckValidIRTimerId(a1, v9) )
        return (unsigned int)-1073741790;
      v7 = 1;
    }
    if ( v7 )
      return v6;
    return (unsigned int)-1073741790;
  }
  if ( v5 || !ExCheckValidIRTimerId(a1, v9) )
    __fastfail(5u);
  return 0LL;
}
