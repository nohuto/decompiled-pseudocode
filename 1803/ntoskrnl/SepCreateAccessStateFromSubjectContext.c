/*
 * XREFs of SepCreateAccessStateFromSubjectContext @ 0x1401052E0
 * Callers:
 *     SeCreateAccessStateFromSubjectContext @ 0x140489AB4 (SeCreateAccessStateFromSubjectContext.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     SeCreateAccessStateEx @ 0x1405626A0 (SeCreateAccessStateEx.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlMapGenericMask @ 0x1404C8DF0 (RtlMapGenericMask.c)
 */

__int64 __fastcall SepCreateAccessStateFromSubjectContext(
        _OWORD *a1,
        int *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        PGENERIC_MAPPING GenericMapping)
{
  PGENERIC_MAPPING v5; // rbp
  ACCESS_MASK v6; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // eax
  __int64 result; // rax
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp+20h] BYREF

  v5 = GenericMapping;
  v6 = a4;
  AccessMask = a4;
  if ( (a4 & 0xF0000000) != 0 && GenericMapping )
  {
    RtlMapGenericMask(&AccessMask, GenericMapping);
    v6 = AccessMask;
  }
  memset(a2, 0, 0xA0uLL);
  memset(a3, 0, 0xE0uLL);
  *((_QWORD *)a2 + 9) = a3;
  *((_OWORD *)a2 + 2) = *a1;
  *((_OWORD *)a2 + 3) = a1[1];
  v10 = *((_QWORD *)a2 + 4);
  if ( v10 )
    v11 = *((_QWORD *)a2 + 4);
  else
    v11 = *((_QWORD *)a2 + 6);
  if ( (*(_DWORD *)(v11 + 64) & *(_DWORD *)(v11 + 72) & 0x800000) != 0 )
  {
    v12 = 1;
    a2[3] = 1;
  }
  else
  {
    v12 = a2[3];
  }
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 6);
  v13 = *(_DWORD *)(v10 + 200);
  a2[4] = v6;
  a2[3] = v12 | v13 & 0x810;
  a2[6] = v6;
  *a3 = a2 + 20;
  *(_QWORD *)a2 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = 0LL;
  if ( v5 )
    *(GENERIC_MAPPING *)(a3 + 1) = *v5;
  return result;
}
