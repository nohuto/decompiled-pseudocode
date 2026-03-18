/*
 * XREFs of VslConnectSwInterrupt @ 0x140856048
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1408453D8 (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x14086B660 (KiConnectSwInterrupt.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeInitializeEnumerationContext @ 0x1400901A0 (KeInitializeEnumerationContext.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlIsCoreSharingPossible @ 0x14017AB04 (HvlIsCoreSharingPossible.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v4; // ecx
  int v6; // eax
  __int64 Prcb; // rax
  ULONG_PTR v8; // rsi
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  ULONG v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v12[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[14]; // [rsp+A0h] [rbp-60h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v6 = VslpLockPagesForTransfer((__int64)v12, BugCheckParameter2, BugCheckParameter3, 0, v4 & BugCheckParameter4);
    if ( v6 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v6);
  }
  else
  {
    memset(v12, 0, 0x48uLL);
  }
  memset(v13, 0, 0x68uLL);
  v13[1] = v12[0];
  v13[2] = v12[7];
  KeInitializeEnumerationContext((__int64)v11, (__int64)KeActiveProcessors);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v11) )
  {
    Prcb = KeGetPrcb(v10);
    if ( ((*(_QWORD *)(Prcb + 24920) - 1LL) & *(_QWORD *)(Prcb + 24920)) != 0 )
    {
      LODWORD(v13[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v13[3]) |= 1u;
  v8 = VslpEnterIumSecureMode(2u, 45LL, 0, (__int64)v13);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer((__int64)v12);
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, v8);
  return (unsigned int)v8;
}
