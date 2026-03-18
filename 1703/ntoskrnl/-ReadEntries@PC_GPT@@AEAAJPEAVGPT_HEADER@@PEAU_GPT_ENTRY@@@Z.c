/*
 * XREFs of ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140268D80
 * Callers:
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x140268CE4 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x140269220 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14016206C (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall PC_GPT::ReadEntries(PC_DISK **this, struct GPT_HEADER *a2, struct _GPT_ENTRY *a3)
{
  ULONG v4; // esi
  int Sectors; // ebx

  v4 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  Sectors = PC_DISK::ReadSectors(
              *this,
              (~(*((_DWORD *)*this + 7) - 1) & (v4 + *((_DWORD *)*this + 7) - 1)) >> *((_DWORD *)*this + 10),
              *((_QWORD *)a2 + 9),
              a3);
  if ( Sectors >= 0 && RtlComputeCrc32(0, (PUCHAR)a3, v4) != *((_DWORD *)a2 + 22) )
    return (unsigned int)-1073741774;
  return (unsigned int)Sectors;
}
