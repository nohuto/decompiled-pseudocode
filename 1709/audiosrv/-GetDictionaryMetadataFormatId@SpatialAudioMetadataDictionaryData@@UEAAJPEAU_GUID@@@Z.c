/*
 * XREFs of ?GetDictionaryMetadataFormatId@SpatialAudioMetadataDictionaryData@@UEAAJPEAU_GUID@@@Z @ 0x1800D7D90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionaryData::GetDictionaryMetadataFormatId(
        struct _GUID *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *Data4; // rsi
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]

  Data4 = (struct _RTL_CRITICAL_SECTION *)this[3].Data4;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this[3].Data4);
  if ( Data4 )
    LeaveCriticalSection(Data4);
  if ( a2 )
  {
    *a2 = this[7];
  }
  else
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionaryData::GetDictionaryMetadataFormatId");
      v9 = 154;
      v13 = &v9;
      v15 = &v10;
      v14 = 4LL;
      v10 = -2147024809;
      v16 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
