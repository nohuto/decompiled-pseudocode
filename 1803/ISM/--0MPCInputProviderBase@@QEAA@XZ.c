/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800420F0
 * Callers:
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x180041A8C (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800453D0 (-Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180047B80 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1800493D8 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800930E8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x180096768 (--0MPCMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _OWORD *v2; // rax
  _OWORD v4[3]; // [rsp+28h] [rbp-30h] BYREF

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x140uLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v2 = operator new(0x10uLL);
  *((_QWORD *)this + 47) = v2;
  *v2 = 0LL;
  **((_QWORD **)this + 47) = (char *)this + 376;
  *((_DWORD *)this + 105) = 3;
  memset_0(v4, 0, 0x20uLL);
  *(_OWORD *)((char *)this + 424) = v4[0];
  *(_OWORD *)((char *)this + 440) = v4[1];
  *((_BYTE *)this + 456) = 0;
  *((_DWORD *)this + 104) = 90;
  memset_0((char *)this + 464, 0, 0x6C8uLL);
  *((_DWORD *)this + 122) = 1736;
  *((_WORD *)this + 1100) = 0;
  *((_BYTE *)this + 2202) = 0;
  memset_0((char *)this + 2208, 0, 0x30uLL);
  *((_DWORD *)this + 552) = 1106247680;
  *((_BYTE *)this + 2212) = 0;
  *((_QWORD *)this + 277) = 0LL;
  *((_DWORD *)this + 556) = 0;
  *((_QWORD *)this + 279) = 0LL;
  *((_QWORD *)this + 280) = 0LL;
  *((_QWORD *)this + 281) = 0LL;
  *((_QWORD *)this + 282) = 0LL;
  *((_QWORD *)this + 283) = 0LL;
  *((_QWORD *)this + 284) = 0LL;
  *((_BYTE *)this + 2280) = 0;
  *((_DWORD *)this + 571) = 1;
  return this;
}
