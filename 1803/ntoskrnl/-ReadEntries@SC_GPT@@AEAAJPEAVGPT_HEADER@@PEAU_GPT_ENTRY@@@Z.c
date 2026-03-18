/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1402C8880
 * Callers:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1402C87E8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1402C8D74 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14015D128 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_DISK **this, struct GPT_HEADER *a2, struct _GPT_ENTRY *a3)
{
  ULONG v4; // esi
  int Sectors; // ebx

  v4 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  Sectors = SC_DISK::ReadSectors(
              *this,
              (~(*((_DWORD *)*this + 41) - 1) & (v4 + *((_DWORD *)*this + 41) - 1)) >> *((_DWORD *)*this + 43),
              *((_QWORD *)a2 + 9),
              a3);
  if ( Sectors >= 0 && RtlComputeCrc32(0, (PUCHAR)a3, v4) != *((_DWORD *)a2 + 22) )
    return (unsigned int)-1073741774;
  return (unsigned int)Sectors;
}
