/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15___ @ 0x1800C74F8
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_04ea9bd14a26c12d050b221e58aed9d7_::operator() @ 0x1800C78EC (_lambda_04ea9bd14a26c12d050b221e58aed9d7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15___(
        _DWORD *a1,
        __int64 a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v11; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v11 = v4;
      v9[0] = a2;
      v9[1] = v4;
      v9[2] = &v11;
      v6 = (__int64 *)*((_QWORD *)v4 + 13);
      v7 = (__int64 *)v6[1];
      v8 = v6;
      while ( !*((_BYTE *)v7 + 25) )
      {
        if ( *((_DWORD *)v7 + 8) >= *a1 )
        {
          v8 = v7;
          v7 = (__int64 *)*v7;
        }
        else
        {
          v7 = (__int64 *)v7[2];
        }
      }
      if ( v8 == v6 || *a1 < *((_DWORD *)v8 + 8) )
        v8 = (__int64 *)*((_QWORD *)v4 + 13);
      if ( v8 != v6 )
      {
        lambda_04ea9bd14a26c12d050b221e58aed9d7_::operator()(v9, v8 + 5);
        v4 = v11;
      }
      if ( v4 )
        ReleaseSRWLockExclusive((PSRWLOCK)v4);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13F,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v5);
  }
}
