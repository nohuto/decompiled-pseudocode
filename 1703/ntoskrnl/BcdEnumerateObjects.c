/*
 * XREFs of BcdEnumerateObjects @ 0x1407349D0
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x1405898C0 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x140734F14 (BiIsEnumerateMatch.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PCWSTR *v5; // rdi
  PULONG v6; // r14
  GUID *v7; // r13
  char v9; // si
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r14
  const WCHAR **v15; // rsi
  int ObjectDescription; // ebx
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  ULONG v21; // r14d
  ULONG i; // esi
  int v23; // ebx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  ULONG v26; // [rsp+20h] [rbp-40h] BYREF
  HANDLE v27; // [rsp+28h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+58h] [rbp-8h]
  char IsOfflineHandle; // [rsp+B0h] [rbp+50h]

  v5 = 0LL;
  v6 = BufferSize;
  v7 = (GUID *)Buffer;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v9 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v27 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v11 = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v27);
    if ( v11 >= 0 )
    {
      v12 = BiEnumerateSubKeys(v27, &DestinationString, &v26);
      v5 = *(PCWSTR **)&DestinationString.Length;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = 0LL;
        if ( v26 )
        {
          v14 = v26;
          v15 = *(const WCHAR ***)&DestinationString.Length;
          do
          {
            if ( (int)BiOpenKey((__int64)v27, *v15, 0x20019u, &Handle) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)Handle, &v29);
              BiCloseKey(Handle);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v29)) )
                  v13 = (unsigned int)(v13 + 1);
              }
            }
            ++v15;
            --v14;
          }
          while ( v14 );
          v5 = *(PCWSTR **)&DestinationString.Length;
          v6 = BufferSize;
        }
        v17 = 0xFFFFFFFFLL;
        v11 = -1073741675;
        if ( (unsigned __int64)(24 * v13) <= 0xFFFFFFFF )
        {
          v18 = 8LL * (unsigned int)v13;
          v19 = (24 * v13 + 7) & 0xFFFFFFF8;
          v31 = (_QWORD *)((char *)&v7->Data1 + v19);
          if ( v18 <= 0xFFFFFFFF )
          {
            v20 = v19 + ((v18 + 7) & 0xFFFFFFF8);
            if ( v20 >= v19 )
              v17 = v20;
            v11 = v20 < v19 ? 0xC0000095 : 0;
            v32 = v17;
            if ( v20 >= v19 )
            {
              if ( (unsigned int)v17 <= *v6 )
              {
                *(_DWORD *)&DestinationString.Length = 0;
                v21 = 0;
                if ( v26 )
                {
                  for ( i = *(_DWORD *)&DestinationString.Length; i < v26; ++i )
                  {
                    if ( v21 >= (unsigned int)v13 )
                      break;
                    if ( (int)BiOpenKey((__int64)v27, v5[i], 0x20019u, &Handle) >= 0 )
                    {
                      v23 = BiGetObjectDescription((__int64)Handle, &v29);
                      BiCloseKey(Handle);
                      if ( v23 >= 0 )
                      {
                        if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v29)) )
                        {
                          RtlInitUnicodeString(&DestinationString, v5[i]);
                          if ( RtlGUIDFromString(&DestinationString, v7) >= 0 )
                          {
                            v24 = v31;
                            v25 = v29;
                            *(_QWORD *)&v7[1].Data1 = v31;
                            v7 = (GUID *)((char *)v7 + 24);
                            *v24 = v25;
                            v31 = v24 + 1;
                            ++v21;
                          }
                        }
                      }
                    }
                  }
                  LODWORD(v17) = v32;
                }
                v11 = 0;
                *BufferSize = v17;
                *ObjectCount = v21;
              }
              else
              {
                v11 = -1073741789;
                *v6 = v17;
                *ObjectCount = v13;
              }
            }
          }
        }
        v9 = IsOfflineHandle;
      }
    }
    if ( v27 )
      BiCloseKey(v27);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    BiReleaseBcdSyncMutant(v9);
    return v11;
  }
  return result;
}
