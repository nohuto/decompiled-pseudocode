/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00C60EC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageBSM @ 0x1C00C9B50 (xxxSendMessageBSM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _DWORD v2[14]; // [rsp+30h] [rbp-38h] BYREF
  char v3; // [rsp+70h] [rbp+8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, _DWORD *, int))xxxSendMessageBSM)(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL),
    798LL,
    0LL,
    0LL,
    v2,
    1);
  if ( !v3 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v3);
  }
}
