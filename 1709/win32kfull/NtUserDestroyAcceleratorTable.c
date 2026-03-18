/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C0117290
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 8;
  v5 = HMValidateHandle(a1, v2, v3, v4);
  v8 = 0LL;
  v9 = v5;
  if ( v5 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v5) )
      HMFreeObject(v9);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
