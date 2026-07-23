/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x1401F8550
 * Callers:
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoFillDumpHeader @ 0x1401F5874 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F8888 (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x14021B6A8 (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x140276D28 (VfDisableHalVerifier.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        int a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  char v7; // r14
  char *v8; // rsi
  bool result; // al
  __int64 v13; // r9
  int v14; // r10d
  int v15; // ebx
  __int64 v16; // rax
  int v17; // [rsp+38h] [rbp-81h]
  int v19; // [rsp+74h] [rbp-45h] BYREF
  __int64 v20; // [rsp+78h] [rbp-41h] BYREF
  void *v21; // [rsp+80h] [rbp-39h]
  __int64 v22; // [rsp+88h] [rbp-31h]
  _QWORD *v23; // [rsp+90h] [rbp-29h]
  _QWORD v24[4]; // [rsp+98h] [rbp-21h] BYREF

  v7 = 0;
  v8 = (char *)CapsuleTriageDumpBlock;
  v22 = a7;
  result = 0;
  v23 = a6;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( CapsuleTriageDumpBlock )
  {
    VfDisableHalVerifier();
    v24[3] = a5;
    v24[0] = a2;
    v24[1] = a3;
    v24[2] = v13;
    IopUpdateMinidumpContext(v14, a2, a3, v13, a5, a6);
    MmSnapTriageDumpInformation(a6, v24);
    IoFillDumpHeader((_NT_PRODUCT_TYPE *)v8 + 1031, 4, a1, a2, (__int64)a3, a4, a5, v22);
    v20 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
    v21 = &IopTriageDumpDataBlocks;
    v15 = IoFillTriageDumpBuffer(
            0x3E000u,
            (__int64 *)(v8 + 12316),
            1,
            3583,
            0LL,
            (__int64)v23,
            v22,
            v17,
            65,
            1u,
            (__int64)&v20,
            (__int64)&v20,
            &v19);
    memset(v8 + 4220, 0, 0x20uLL);
    *((_DWORD *)v8 + 2070) = 0;
    v16 = *((unsigned int *)v8 + 3080);
    *((_DWORD *)v8 + 2075) |= 0x88u;
    *(_QWORD *)(v8 + 8124) = v16;
    *((_DWORD *)v8 + 2069) = 3583;
    if ( v15 >= 0 )
      return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
    return v7;
  }
  return result;
}
