/*
 * XREFs of ?CopyDictionaryData@SpatialAudioMetadataDictionary@@UEAAJPEAEI@Z @ 0x1800D8480
 * Callers:
 *     ?CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z @ 0x180037540 (-CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::CopyDictionaryData(
        const void **this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  size_t v4; // r15
  unsigned int v7; // ebx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  int *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  v4 = a3;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a2 && v4 == 2LL * *((unsigned int *)this + 33) )
  {
    memcpy_0(a2, this[17], v4);
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::CopyDictionaryData");
      v11 = 349;
      v15 = &v11;
      v17 = &v12;
      v16 = 4LL;
      v12 = -2147024809;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v8, v9, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
