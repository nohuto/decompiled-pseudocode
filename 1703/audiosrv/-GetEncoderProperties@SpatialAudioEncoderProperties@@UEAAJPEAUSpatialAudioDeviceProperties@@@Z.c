/*
 * XREFs of ?GetEncoderProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CB170
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderProperties(
        SpatialAudioEncoderProperties *this,
        struct SpatialAudioDeviceProperties *a2)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v8; // [rsp+30h] [rbp-39h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]

  v4 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 48, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 234);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 250);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 266);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 282);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 298);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 314);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 330);
    *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)this + 346);
    *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)this + 362);
    *((_WORD *)a2 + 72) = *((_WORD *)this + 189);
  }
  else
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioEncoderProperties::GetEncoderProperties");
      v8 = 403;
      v12 = &v8;
      p_lpCriticalSection = &lpCriticalSection;
      v13 = 4LL;
      LODWORD(lpCriticalSection) = -2147024809;
      v15 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v5, v6, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v4;
}
