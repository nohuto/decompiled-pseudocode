/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x1800DA214
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x18009D08C (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_c447e8a4e728711a505eb4f690ea7de9_::operator() @ 0x1800DA6B8 (_lambda_c447e8a4e728711a505eb4f690ea7de9_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
        unsigned int *a1,
        __int64 a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  __int64 *v10; // r10
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v13; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v13 = v4;
      v11[0] = a2;
      v11[1] = v4;
      v11[2] = &v13;
      v6 = (__int64 *)*((_QWORD *)v4 + 13);
      v7 = (__int64 *)v6[1];
      v8 = v6;
      if ( *((_BYTE *)v7 + 25) )
        goto LABEL_13;
      v9 = *a1;
      do
      {
        v10 = v7;
        v5 = (const char *)*((unsigned int *)v7 + 8);
        if ( (unsigned int)v5 >= v9 )
          v7 = (__int64 *)*v7;
        else
          v7 = (__int64 *)v7[2];
        if ( (unsigned int)v5 >= v9 )
          v8 = v10;
      }
      while ( !*((_BYTE *)v7 + 25) );
      if ( v8 == v6 || v9 < *((_DWORD *)v8 + 8) )
LABEL_13:
        v8 = (__int64 *)*((_QWORD *)v4 + 13);
      if ( v8 != v6 )
      {
        lambda_c447e8a4e728711a505eb4f690ea7de9_::operator()(v11, v8 + 5);
        v4 = v13;
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
