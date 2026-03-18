/*
 * XREFs of ?CheckPresentDurationSupport@CDWMSwapChain@@UEAAJIPEAI@Z @ 0x1801AFF00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckPresentDurationSupport(CDWMSwapChain *this, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  signed int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *))(**((_QWORD **)this + 52) + 192LL))(
         *((_QWORD *)this + 52),
         a2,
         &v9,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x4B8u);
  }
  else
  {
    v7 = v10;
    if ( (int)abs32(v4 - v9) < (int)abs32(v4 - v10) )
      v7 = v9;
    *a3 = v7;
  }
  return v6;
}
