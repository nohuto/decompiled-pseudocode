/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x140036DC8
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x1400367C0 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct CpuSet *a1, struct CpuGroupMask *a2, unsigned int *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  NTSTATUS result; // eax
  DWORD v16; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rax
  unsigned __int16 *v19; // rbx
  BOOL LogicalProcessorInformation; // r12d
  int v21; // ecx
  char v22; // r10
  unsigned int v23; // r8d
  __int128 v24; // xmm0
  __int64 v25; // r15
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // r14
  HANDLE v30; // rax
  __int64 v31; // rcx
  int v33; // edx
  unsigned int v34; // edx
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+30h] [rbp-D0h]
  _OWORD v37[11]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SystemInformation[11]; // [rsp+F0h] [rbp-10h] BYREF

  LODWORD(SystemInformation[0]) = 0;
  memset((char *)SystemInformation + 8, 0, 0xA0uLL);
  LOWORD(v36) = 0;
  v6 = SystemInformation[1];
  *(_OWORD *)a1 = SystemInformation[0];
  v7 = SystemInformation[2];
  *((_OWORD *)a1 + 1) = v6;
  v8 = SystemInformation[3];
  *((_OWORD *)a1 + 2) = v7;
  v9 = SystemInformation[4];
  *((_OWORD *)a1 + 3) = v8;
  v10 = SystemInformation[5];
  *((_OWORD *)a1 + 4) = v9;
  v11 = SystemInformation[6];
  *((_OWORD *)a1 + 5) = v10;
  v12 = SystemInformation[8];
  *((_OWORD *)a1 + 6) = v11;
  *((_OWORD *)a1 + 7) = SystemInformation[7];
  v13 = SystemInformation[9];
  v14 = *(_QWORD *)&SystemInformation[10];
  *((_OWORD *)a1 + 8) = v12;
  *((_OWORD *)a1 + 9) = v13;
  *((_QWORD *)a1 + 20) = v14;
  *((_QWORD *)&v36 + 1) = 0LL;
  *(_OWORD *)a2 = (unsigned __int64)v36;
  *a3 = -1;
  memset(v37, 0, 0xA8uLL);
  SystemInformation[0] = v37[0];
  SystemInformation[1] = v37[1];
  SystemInformation[2] = v37[2];
  SystemInformation[3] = v37[3];
  SystemInformation[4] = v37[4];
  SystemInformation[5] = v37[5];
  SystemInformation[6] = v37[6];
  SystemInformation[7] = v37[7];
  SystemInformation[8] = v37[8];
  SystemInformation[9] = v37[9];
  *(_QWORD *)&SystemInformation[10] = *(_QWORD *)&v37[10];
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL);
  if ( result < 0 )
    return result;
  ReturnedLength[0] = 0;
  GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
  v16 = ReturnedLength[0];
  ProcessHeap = GetProcessHeap();
  v18 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v16);
  v19 = (unsigned __int16 *)v18;
  if ( !v18 )
    return -1073741670;
  LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v18, ReturnedLength);
  if ( !LogicalProcessorInformation )
    goto LABEL_22;
  v21 = v19[5];
  *((_QWORD *)&v36 + 1) = 0LL;
  v22 = 0;
  LOWORD(v36) = 0;
  v23 = 0;
  v24 = (unsigned __int64)v36;
  *(_DWORD *)a1 = v21;
  if ( !v21 )
    goto LABEL_20;
  v25 = *((_QWORD *)&v36 + 1);
  do
  {
    v26 = *(_QWORD *)&v19[24 * v23 + 36];
    *((_QWORD *)a1 + v23 + 1) = v26;
    if ( v22 )
      goto LABEL_17;
    v27 = 1LL;
    v28 = 0;
    if ( (v26 & 1) == 0 )
      goto LABEL_17;
    v29 = qword_140086288;
    while ( 1 )
    {
      if ( !v25 )
      {
        v25 = v27;
        *((_QWORD *)&v36 + 1) = v27;
        LOWORD(v36) = v23;
      }
      if ( v29 )
        break;
      *((_QWORD *)a2 + 1) = v27;
      if ( (v27 & *((_QWORD *)SystemInformation + v23 + 1)) == 0 )
        goto LABEL_16;
      v29 = qword_140086288;
LABEL_29:
      ++v28;
      v26 &= ~v27;
      v27 = 1LL << v28;
      if ( ((1LL << v28) & v26) == 0 )
        goto LABEL_17;
    }
    if ( v23 != g_UserConfiguredAudioReservedCpu || (v29 & v27) == 0 )
      goto LABEL_29;
    *((_QWORD *)a2 + 1) = v27;
LABEL_16:
    v22 = 1;
    *(_WORD *)a2 = v23;
LABEL_17:
    ++v23;
  }
  while ( v23 < *(_DWORD *)a1 );
  if ( !v22 )
  {
    v24 = v36;
LABEL_20:
    *(_OWORD *)a2 = v24;
  }
  *((_QWORD *)a1 + *(unsigned __int16 *)a2 + 1) &= ~*((_QWORD *)a2 + 1);
LABEL_22:
  v30 = GetProcessHeap();
  HeapFree(v30, 0, v19);
  if ( !LogicalProcessorInformation )
    return -1073741823;
  v31 = *((_QWORD *)a2 + 1);
  if ( !v31 )
    return -1073741823;
  if ( !_BitScanForward((unsigned int *)&v33, v31) )
  {
    _BitScanForward(&v34, HIDWORD(v31));
    v33 = v34 + 32;
  }
  *a3 = v33 | (*(unsigned __int16 *)a2 << 16) | 0x100;
  return 0;
}
