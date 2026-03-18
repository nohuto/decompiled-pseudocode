/*
 * XREFs of GetHDevName @ 0x1C00274F0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetHdevName @ 0x1C00274B0 (DrvGetHdevName.c)
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetHDevName(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  CTouchProcessor *v6; // rcx
  _OWORD v8[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v9; // [rsp+70h] [rbp-28h]

  v3 = 0;
  v4 = HMValidateSharedHandle();
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 128);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)DrvGetHdevName(v5, v8) )
  {
    HIWORD(v9) = 0;
    v3 = 1;
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (CTouchProcessor *)a2;
    if ( a2 >= (unsigned __int64)W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *((_BYTE *)v6 + 63) = *((_BYTE *)v6 + 63);
    *(_OWORD *)a2 = v8[0];
    *(_OWORD *)(a2 + 16) = v8[1];
    *(_OWORD *)(a2 + 32) = v8[2];
    *(_OWORD *)(a2 + 48) = v9;
  }
  return v3;
}
