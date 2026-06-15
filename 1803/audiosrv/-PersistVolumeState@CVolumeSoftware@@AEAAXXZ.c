/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800A34B0
 * Callers:
 *     ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800A3460 (-OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800A37E0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18004E374 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800A4F68 (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeSoftware::PersistVolumeState(const wchar_t **this)
{
  LPVOID v2; // rdx
  __int64 i; // rdi
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  float DB; // xmm0_4
  __int64 v7; // rdx
  __int64 v8; // r10
  double v9; // [rsp+28h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  LPVOID v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
      this[8]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[8],
         &v14) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 1LL, &v13) >= 0 )
  {
    pvar = (PROPVARIANT)65;
    v11 = 0LL;
    v12 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
        this[8]);
    }
    LODWORD(v11) = 4 * *((_DWORD *)this + 31);
    v2 = CoTaskMemAlloc((unsigned int)v11);
    v12 = v2;
    if ( v2 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 31); i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= (unsigned __int64)this[12] )
          ATL::AtlThrowImpl(-2147024809);
        DB = CVolumeUnit::GetDB((CVolumeUnit *)&this[11][28 * (unsigned int)i]);
        *(float *)(v7 + 4 * i) = DB;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          if ( v4 >= (unsigned __int64)this[12] )
            ATL::AtlThrowImpl(-2147024809);
          v9 = CVolumeUnit::GetDB((CVolumeUnit *)((char *)this[11] + v5));
          WPP_SF_Sdg(
            *(_QWORD *)(v8 + 16),
            45,
            (unsigned int)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
            (unsigned int)this[8],
            i,
            SLOBYTE(v9));
        }
      }
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v13 + 48LL))(
        v13,
        &PKEY_APO_MasterVolumeLevel,
        &pvar);
      PropVariantClear(&pvar);
      *((_BYTE *)this + 300) = 0;
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v13 + 16LL))(v13, v2);
  if ( v14 )
    (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v14 + 16LL))(v14, v2);
}
