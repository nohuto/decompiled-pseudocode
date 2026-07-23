/*
 * XREFs of MiDriverLoadSucceeded @ 0x1404B317C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 * Callees:
 *     DbgLoadImageSymbolsUnicode @ 0x14007009C (DbgLoadImageSymbolsUnicode.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     MiSessionUpdateImageCharges @ 0x140144324 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCacheImageSymbols @ 0x1404B1270 (MiCacheImageSymbols.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     MiProtectSystemImage @ 0x1405A22B8 (MiProtectSystemImage.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbx
  wchar_t *PoolWithTag; // rbx
  __m128i v14; // xmm0
  PWSTR NtSystemRoot; // rax
  NTSTATUS v16; // eax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]

  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    v9 = (__int64 *)MiSectionControlArea(a2);
    v10 = *v9;
    v20 = 3;
    v20 = ((*(_BYTE *)(v10 + 15) & 0xF0) << 8) | 3;
    v11 = *(unsigned __int8 *)(v10 + 15);
    v22 = 0;
    v24 = 0;
    v20 = v20 ^ (v20 ^ (v11 << 15)) & 0x70000 | 0x100;
    v23 = *(unsigned int *)(a1 + 64);
    v21 = *(_QWORD *)(a1 + 48);
    v12 = MiReferenceControlAreaFile((__int64)v9);
    PsCallImageNotifyRoutines(a3, 0LL, v19, v12);
    MiDereferenceControlAreaFile((__int64)v9, v12);
    if ( MiCacheImageSymbols(*(void **)(a1 + 48)) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E4C6D4Du);
      if ( PoolWithTag )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v14 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v16 = RtlStringCbPrintfW(PoolWithTag, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, PoolWithTag);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(PVOID *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  result = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( (_DWORD)result == 1 )
    return MiSessionUpdateImageCharges(a1);
  return result;
}
