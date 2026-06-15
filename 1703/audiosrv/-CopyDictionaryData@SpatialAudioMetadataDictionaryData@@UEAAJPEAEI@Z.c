/*
 * XREFs of ?CopyDictionaryData@SpatialAudioMetadataDictionaryData@@UEAAJPEAEI@Z @ 0x1800CC100
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionaryData::CopyDictionaryData(
        const void **this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  size_t v4; // r14
  unsigned int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v10; // [rsp+30h] [rbp-49h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]

  v4 = a3;
  v6 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)(this + 5), (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a2 && v4 == 2LL * *((unsigned int *)this + 22) )
  {
    memcpy_0(a2, this[10], v4);
  }
  else
  {
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionaryData::CopyDictionaryData");
      v10 = 195;
      v14 = &v10;
      p_lpCriticalSection = &lpCriticalSection;
      v15 = 4LL;
      LODWORD(lpCriticalSection) = -2147024809;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v7, v8, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v6;
}
