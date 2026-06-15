/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x1800CB4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  __int64 v7; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // edi
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v18; // [rsp+30h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-39h] BYREF
  LPCRITICAL_SECTION *v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]

  v7 = a2;
  v10 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 48, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v11 = *((_QWORD *)this + 5);
  if ( !v11 )
  {
    v12 = -2147418113;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex");
      v18 = 438;
      v22 = (LPCRITICAL_SECTION *)&v18;
      p_lpCriticalSection = &lpCriticalSection;
      v23 = 4LL;
      LODWORD(lpCriticalSection) = -2147418113;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v13, v14, 5u, &pData);
    }
    return v12;
  }
  if ( !a3 || !a4 || !a5 || (unsigned int)v7 >= 0x11 )
  {
    v12 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex");
      LODWORD(lpCriticalSection) = 439;
      v22 = &lpCriticalSection;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v18;
      v23 = 4LL;
      v18 = -2147024809;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v15, v16, 5u, &pData);
    }
    return v12;
  }
  *(_DWORD *)a3 = *(_OWORD *)(v11 + 16 * v7);
  *a4 = *(float *)(*((_QWORD *)this + 5) + 16 * v7 + 4);
  *a5 = *(float *)(*((_QWORD *)this + 5) + 16 * v7 + 8);
  if ( a6 )
    *a6 = *(float *)(*((_QWORD *)this + 5) + 16 * v7 + 12);
  return v10;
}
