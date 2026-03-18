/*
 * XREFs of MiMapImageInSystemSpace @ 0x1404F7424
 * Callers:
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiParseComImage @ 0x1404FB3CC (MiParseComImage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemProcess @ 0x1406DF038 (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // esi
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // r14
  __int64 SessionId; // rax
  unsigned int v11; // r15d
  int v12; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _KPROCESS *v15; // r13
  int v16; // r14d
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v18[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v18, 0, sizeof(v18));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)MiControlAreaRequiresCharge((__int64)a1) == 1 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 16, 648, 0x11u);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a3 + 8) = a1;
  }
  if ( (a2 & 1) != 0 )
    v7 = *(_DWORD *)(*a1 + 8);
  else
    v7 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v18[6] = (unsigned __int64)v7 << 12;
  v8 = MiReferenceControlAreaFile((__int64)a1);
  v9 = v8;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 52LL) & 0x10) != 0 )
    v18[5] = v8 | 1;
  else
    v18[5] = a1;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  LODWORD(v18[7]) |= 0x20u;
  v20 = 0LL;
  v11 = a2 | 8;
  HIDWORD(v18[7]) = HIDWORD(v18[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v21 = v7 << 12;
  v12 = MiMapViewInSystemSpace(
          (unsigned int)v18,
          (unsigned int)&unk_140388438,
          (unsigned int)&v19,
          (unsigned int)&v21,
          (__int64)&v20,
          1LL,
          v11);
  MiDereferenceControlAreaFile((__int64)a1, v9);
  if ( v12 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v19;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v7;
    return result;
  }
  if ( (v11 & 2) != 0 )
  {
    v17 = 0LL;
    v15 = *(_KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 168) + 104LL);
    KiStackAttachProcess(v15, 0, a3 + 32);
    v16 = MiMapImageInSystemProcess(a1, v11, &v19, &v17);
    if ( v16 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v15[1].IdealNode[12];
      goto LABEL_10;
    }
    KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)(a3 + 32), 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v16;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v12;
  }
}
