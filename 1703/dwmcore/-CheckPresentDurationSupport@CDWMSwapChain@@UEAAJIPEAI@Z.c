/*
 * XREFs of ?CheckPresentDurationSupport@CDWMSwapChain@@UEAAJIPEAI@Z @ 0x18019D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckPresentDurationSupport(CDWMSwapChain *this, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v6; // esi
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 38);
  v4 = 0;
  v6 = a2;
  v7 = 0;
  if ( v3 )
  {
    v11 = 0;
    v12 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 192LL))(
           v3,
           a2,
           &v11,
           &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5B5u);
      return v7;
    }
    v9 = v12;
    if ( (int)abs32(v6 - v11) < (int)abs32(v6 - v12) )
      v9 = v11;
    v4 = v9;
  }
  *a3 = v4;
  return v7;
}
