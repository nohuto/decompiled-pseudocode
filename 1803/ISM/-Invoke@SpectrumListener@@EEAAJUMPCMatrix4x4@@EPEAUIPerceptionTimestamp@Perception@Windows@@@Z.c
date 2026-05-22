/*
 * XREFs of ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x18005FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18005E2EC (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall SpectrumListener::Invoke(__int64 a1, __int128 *a2, char a3)
{
  int v6; // r9d
  int v7; // eax
  __int128 v8; // xmm0
  MPCRawInputProvider *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  int v15[125]; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+224h] [rbp+124h]
  __int128 v17; // [rsp+4A8h] [rbp+3A8h]
  __int128 v18; // [rsp+4B8h] [rbp+3B8h]
  __int128 v19; // [rsp+4C8h] [rbp+3C8h]
  __int128 v20; // [rsp+4D8h] [rbp+3D8h]
  bool v21; // [rsp+4E8h] [rbp+3E8h]
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+628h]

  if ( *(_BYTE *)(a1 + 80) )
  {
    memset_0(v15, 0, 0x6C8uLL);
    v6 = *(_DWORD *)(a1 + 28);
    v15[6] = 1736;
    v7 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, v6, (__int64)v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = *a2;
    v9 = *(MPCRawInputProvider **)(a1 + 16);
    v10 = a2[1];
    v16 = 1;
    v17 = v8;
    v11 = a2[2];
    v18 = v10;
    v12 = a2[3];
    v19 = v11;
    v20 = v12;
    v21 = a3 != 0;
    v13 = MPCRawInputProvider::QueueInput(v9, (struct InputInfo *)v15);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x18005FD62LL);
    }
  }
  return 0LL;
}
