/*
 * XREFs of NtManagePartition @ 0x14043C408
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(HANDLE Handle, __int64 a2, __int64 a3, unsigned __int64 a4, size_t a5)
{
  KPROCESSOR_MODE AccessMode; // r10
  unsigned __int64 v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode && (_DWORD)a5 )
  {
    if ( (a4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a4 + (unsigned int)a5;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(Size) = a5;
  return MiManagePartition(Handle, Size, AccessMode);
}
