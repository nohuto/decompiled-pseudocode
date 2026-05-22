/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C
 * Callers:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180036FC8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18004A1A8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x180051E28 (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180053A9C (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x18005561C (--0MPCClickerProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm0
  MPCInputProviderBase *result; // rax
  __int128 v5; // xmm1
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 7) = 0LL;
  memset((char *)this + 64, 0, 0x140uLL);
  *((_BYTE *)this + 384) = 0;
  memset((char *)this + 392, 0, 0x30uLL);
  *((_DWORD *)this + 98) = 1106247680;
  *((_BYTE *)this + 396) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  v2 = operator new(0x10uLL);
  *((_QWORD *)this + 55) = v2;
  if ( v2 )
    *v2 = 0LL;
  **((_QWORD **)this + 55) = (char *)this + 440;
  *((_DWORD *)this + 121) = 3;
  memset(v6, 0, sizeof(v6));
  v3 = v6[0];
  *((_BYTE *)this + 520) = 0;
  result = this;
  v5 = v6[1];
  *((_DWORD *)this + 120) = 90;
  *(_OWORD *)((char *)this + 488) = v3;
  *(_OWORD *)((char *)this + 504) = v5;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_BYTE *)this + 552) = 0;
  *((_DWORD *)this + 139) = 1;
  return result;
}
