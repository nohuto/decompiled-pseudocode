/*
 * XREFs of PspMapSystemDll @ 0x1404E9248
 * Callers:
 *     PsMapSystemDlls @ 0x1404E93D8 (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x14063B288 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MmMapViewOfSectionEx @ 0x140069F4C (MmMapViewOfSectionEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x1404E9390 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // edi
  __int64 result; // rax
  PVOID v12; // rsi
  PIMAGE_NT_HEADERS v13; // rax
  unsigned __int64 ImageBase_high; // rcx
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp+7h] BYREF
  __int64 v17; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp+17h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp+27h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+6Fh] BYREF

  v8 = PspReferenceSystemDll(a2);
  if ( !v8 )
    return 3221225473LL;
  BaseAddress = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v18[1] = v19;
  v19[0] = 0LL;
  v19[2] = 0LL;
  v18[0] = 1LL;
  if ( (*(_BYTE *)(a2 + 16) & 8) == 0 )
    v9 = 0x7FFFFFFEFFFFLL;
  v19[1] = v9;
  v10 = MmMapViewOfSectionEx(
          v8,
          (int)a1,
          (int)&BaseAddress,
          (__int64)&v17,
          (__int64)&v16,
          a3 != 0 ? 0x20000000 : 0,
          4,
          v18,
          v15,
          0,
          0LL);
  ObFastDereferenceObject((signed __int64 *)a2, v8);
  if ( v10 != 1073741827 )
  {
LABEL_5:
    if ( v10 < 0 )
      return (unsigned int)v10;
    goto LABEL_6;
  }
  if ( a1 != PsInitialSystemProcess )
  {
    v10 = -1073741800;
    goto LABEL_5;
  }
LABEL_6:
  if ( a4 )
  {
    v12 = BaseAddress;
    v10 = 0;
    v13 = RtlImageNtHeader(BaseAddress);
    if ( v13->OptionalHeader.Magic == 267 )
      ImageBase_high = HIDWORD(v13->OptionalHeader.ImageBase);
    else
      ImageBase_high = v13->OptionalHeader.ImageBase;
    *(_QWORD *)(a2 + 40) = ImageBase_high;
    *(_QWORD *)(a2 + 48) = v12;
  }
  else
  {
    result = 3221225473LL;
    if ( *(PVOID *)(a2 + 40) != BaseAddress )
      return result;
  }
  return (unsigned int)v10;
}
