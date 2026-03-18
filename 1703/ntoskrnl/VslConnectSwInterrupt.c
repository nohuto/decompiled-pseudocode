/*
 * XREFs of VslConnectSwInterrupt @ 0x1407F6C58
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1407F8640 (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x140834498 (KiConnectSwInterrupt.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeInitializeEnumerationContext @ 0x1400460B0 (KeInitializeEnumerationContext.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlIsCoreSharingPossible @ 0x14017B2CC (HvlIsCoreSharingPossible.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  char v4; // cl
  int v6; // eax
  __int64 Prcb; // rax
  ULONG_PTR v8; // rsi
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  ULONG v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[14]; // [rsp+90h] [rbp-70h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v6 = VslpLockPagesForTransfer(v12, BugCheckParameter2, BugCheckParameter3, 0, v4 & BugCheckParameter4);
    if ( v6 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v6);
  }
  else
  {
    memset(v12, 0, sizeof(v12));
  }
  memset(v13, 0, 0x68uLL);
  v13[1] = v12[0];
  v13[2] = v12[7];
  KeInitializeEnumerationContext((__int64)v11, (__int64)KeActiveProcessors);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v11) )
  {
    Prcb = KeGetPrcb(v10);
    if ( ((*(_QWORD *)(Prcb + 25176) - 1LL) & *(_QWORD *)(Prcb + 25176)) != 0 )
    {
      LODWORD(v13[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v13[3]) |= 1u;
  v8 = VslpEnterIumSecureMode(1, 39LL, 0LL, (__int64)v13);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer((__int64)v12);
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, v8);
  return (unsigned int)v8;
}
