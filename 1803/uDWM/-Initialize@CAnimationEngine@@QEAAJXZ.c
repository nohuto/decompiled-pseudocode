/*
 * XREFs of ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180041828
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003ED94 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::Initialize(LPVOID *this)
{
  _QWORD *v1; // rsi
  HRESULT Instance; // eax
  int v4; // ebx
  LPVOID v6; // rcx
  LPVOID v7; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]

  v1 = this + 1;
  Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, this + 1);
  v4 = Instance;
  if ( Instance < 0 )
  {
    ppv = 89;
  }
  else
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 this + 2);
    v4 = Instance;
    if ( Instance < 0 )
    {
      ppv = 90;
    }
    else
    {
      Instance = CoCreateInstance(
                   &CLSID_UIAnimationTransitionFactory2,
                   0LL,
                   1u,
                   &GUID_937d4916_c1a6_42d5_88d8_30344d6efe31,
                   this + 3);
      v4 = Instance;
      if ( Instance >= 0 )
      {
        *((_BYTE *)this + 120) = 1;
        goto LABEL_5;
      }
      ppv = 91;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, ppv);
LABEL_5:
  if ( v4 < 0 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      *v1 = 0LL;
    }
    v6 = this[2];
    if ( v6 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
      this[2] = 0LL;
    }
    v7 = this[3];
    if ( v7 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
      this[3] = 0LL;
    }
  }
  return (unsigned int)v4;
}
