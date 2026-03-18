/*
 * XREFs of PfpCopyEvent @ 0x140455440
 * Callers:
 *     PfpFlushEventBuffers @ 0x140455360 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140455670 (PfpFlushBuffers.c)
 * Callees:
 *     PfpIsProcessInfoPresent @ 0x140011D20 (PfpIsProcessInfoPresent.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PfpLogPageAccess @ 0x140455990 (PfpLogPageAccess.c)
 *     PfTReplaceCurrentBuffer @ 0x140456864 (PfTReplaceCurrentBuffer.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall PfpCopyEvent(_QWORD *Src)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  PEPROCESS v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  if ( (*Src & 0x1F000LL) == 0xA000 )
  {
    v2 = Src[4];
    v17 = 0LL;
    v3 = v2;
    if ( (v2 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
      v3 = -1;
    v4 = 2LL;
    if ( v2 >= 0 )
      v4 = 4098LL;
    v5 = *((unsigned int *)Src + 12);
    LODWORD(v17) = v3 | (*((_DWORD *)Src + 12) << 8);
    v6 = Src[5];
    v7 = Src[3] << 12;
    HIDWORD(Process) = HIDWORD(v7);
    v16 = v4 & 0xFFFFFFFF00FFFFFFuLL | v5 & 0xFFFFFFFFFF000000uLL;
    LODWORD(Process) = v7 & 0xFFFFFE00 | 1;
    v8 = PfpLogPageAccess(v6, (unsigned int)&Process, (unsigned int)&v16, (int)Src + 24, 1);
    if ( v8 )
    {
      v9 = ((qword_1403878D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
         + 40LL * (*(unsigned __int16 *)(v8 + 10) - (unsigned int)*(unsigned __int16 *)(qword_1403878D8 + 36));
      if ( (*(_BYTE *)(v9 + 8) & 4) != 0
        && PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) >= 0 )
      {
        v14 = Process;
        if ( (((unsigned __int64)Process ^ (unsigned __int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
          && PfpIsProcessInfoPresent((__int64)Process) )
        {
          v15 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
          *(_QWORD *)(v9 + 8) = v15;
          *(_QWORD *)(v9 + 8) = v15 & 7 | (8 * ((unsigned __int64)v14 ^ (unsigned __int64)v14[1].ThreadListHead.Flink));
          *(_DWORD *)(v9 + 28) = v14[1].ThreadSeed[1];
          *(_DWORD *)(v9 + 24) = v14[1].Header.WaitListHead.Flink;
          *(_QWORD *)(v9 + 16) = v14;
        }
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      }
      return 0LL;
    }
    else
    {
      return 3221225864LL;
    }
  }
  else
  {
    v11 = qword_1403878B0;
    v12 = (*Src >> 2) & 0x3FFLL;
    if ( (unsigned int)(v12 + *(_DWORD *)(qword_1403878B0 + 16)) > *(_DWORD *)(qword_1403878B0 + 20) )
    {
      while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140387898, v11) != -1073741823 )
      {
        v11 = qword_1403878B0;
        if ( (unsigned int)(v12 + *(_DWORD *)(qword_1403878B0 + 16)) <= *(_DWORD *)(qword_1403878B0 + 20) )
          goto LABEL_10;
      }
      return 3221225626LL;
    }
    else
    {
LABEL_10:
      v13 = *(unsigned int *)(v11 + 16);
      *(_DWORD *)(v11 + 16) = v13 + v12;
      memmove((void *)(((v11 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16 * v13), Src, (unsigned int)(16 * v12));
      return 0LL;
    }
  }
}
