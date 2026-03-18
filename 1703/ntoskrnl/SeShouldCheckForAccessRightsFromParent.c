/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x14050C420
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140044710 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SeGetTrustLabelAce @ 0x140093830 (SeGetTrustLabelAce.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  char v6; // bl
  __int64 TrustLabelAce; // rax
  _DWORD *v8; // r8
  __int64 v10; // r14
  __int64 TokenTrustLevel; // rax
  char v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 1;
  v6 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v10 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v12 = 0;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v10, &v12);
      v5 = v12;
    }
  }
  v8 = *(_DWORD **)(a3 + 32);
  if ( !v8 )
    v8 = *(_DWORD **)(a3 + 48);
  SepFilterCheck(a2, 0LL, v8, 1, (int *)&v13);
  if ( ((unsigned int)v13 & *(_DWORD *)(a3 + 16)) == *(_DWORD *)(a3 + 16) )
    v6 = 1;
  return v5 && v6;
}
