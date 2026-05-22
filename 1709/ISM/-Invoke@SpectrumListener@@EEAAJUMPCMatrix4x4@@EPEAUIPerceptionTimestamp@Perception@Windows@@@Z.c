/*
 * XREFs of ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800685C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180067040 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall SpectrumListener::Invoke(__int64 a1, __int128 *a2, char a3)
{
  int v6; // eax
  __int128 v7; // xmm0
  MPCRawInputProvider *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  LARGE_INTEGER v14[356]; // [rsp+30h] [rbp-B48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+0h]

  memset(v14, 0, sizeof(v14));
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8u, *(_DWORD *)(a1 + 24), v14, 1);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *a2;
  v8 = *(MPCRawInputProvider **)(a1 + 16);
  v9 = a2[1];
  BYTE4(v14[84].QuadPart) = 1;
  *(_OWORD *)&v14[165].LowPart = v7;
  v10 = a2[2];
  *(_OWORD *)&v14[167].LowPart = v9;
  v11 = a2[3];
  *(_OWORD *)&v14[169].LowPart = v10;
  *(_OWORD *)&v14[171].LowPart = v11;
  LOBYTE(v14[173].LowPart) = a3 != 0;
  v12 = MPCRawInputProvider::QueueInput(v8, (struct InputInfo *)v14);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x1800686C0LL);
  }
  return 0LL;
}
