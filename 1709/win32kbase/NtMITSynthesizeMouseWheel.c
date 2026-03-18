/*
 * XREFs of NtMITSynthesizeMouseWheel @ 0x1C00E6D80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C013BBFC (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall NtMITSynthesizeMouseWheel(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int128 v6; // xmm1
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD v13[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v14; // [rsp+60h] [rbp-48h]
  __int128 v15; // [rsp+70h] [rbp-38h]
  __m128i v16; // [rsp+80h] [rbp-28h]
  __int128 v17; // [rsp+90h] [rbp-18h]
  __int64 v18; // [rsp+C0h] [rbp+18h] BYREF

  v4 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v18, a2, a3, a4);
  if ( a1 + 32 < a1 || a1 + 32 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v14 = *(__m128i *)a1;
  v6 = *(_OWORD *)(a1 + 16);
  v15 = v6;
  v16 = v14;
  v17 = v6;
  if ( (_mm_srli_si128(v14, 8).m128i_i32[1] & 0x1800) != 0 )
  {
    v13[0] = v14;
    v13[1] = v6;
    v7 = ApiSetEditionSynthesizeMouseWheel(v13, v4);
  }
  else
  {
    v7 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
