/*
 * XREFs of MiMapImageInSystemSpace @ 0x140497368
 * Callers:
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiMapViewInSystemSpace @ 0x140497594 (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemProcess @ 0x1406B306C (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // edx
  __int64 v9; // r12
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 SessionId; // rax
  unsigned int v14; // r15d
  int v15; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  int v18; // r14d
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v20[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v20, 0, sizeof(v20));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  v7 = MiControlAreaRequiresCharge();
  v9 = (unsigned int)(v8 - 3);
  if ( v7 == (_DWORD)v9 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 128, 0x288u, 0x11u);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a3 + 8) = a1;
  }
  if ( ((unsigned __int8)a2 & (unsigned __int8)v9) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v10 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v20[6] = (unsigned __int64)v10 << 12;
  v11 = MiReferenceControlAreaFile(a1);
  v12 = v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 52LL) & 0x10) != 0 )
    v20[5] = v9 | v11;
  else
    v20[5] = a1;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  LODWORD(v20[7]) |= 0x20u;
  v22 = 0LL;
  v14 = a2 | 8;
  HIDWORD(v20[7]) = HIDWORD(v20[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v23 = v10 << 12;
  v15 = MiMapViewInSystemSpace(
          (unsigned int)v20,
          (unsigned int)&unk_14036C0F8,
          (unsigned int)&v21,
          (unsigned int)&v23,
          (__int64)&v22,
          v9,
          v14);
  MiDereferenceControlAreaFile(a1, v12);
  if ( v15 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v21;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v10;
    return result;
  }
  if ( (v14 & 2) != 0 )
  {
    v19 = 0LL;
    KiStackAttachProcess(PsInitialSystemProcess, 0, a3 + 32);
    v18 = MiMapImageInSystemProcess(a1, v14 | 8, &v21, &v19);
    if ( v18 >= 0 )
    {
      AnyMultiplexedVm = (char *)&PsInitialSystemProcess[1].IdealNode[12];
      goto LABEL_10;
    }
    KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)(a3 + 32), 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges(a1);
    return (unsigned int)v18;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges(a1);
    return (unsigned int)v15;
  }
}
