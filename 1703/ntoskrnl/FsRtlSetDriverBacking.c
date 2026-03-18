/*
 * XREFs of FsRtlSetDriverBacking @ 0x14059D440
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x14059D290 (IoRegisterFileSystem.c)
 * Callees:
 *     MmBackSystemImageWithPagefile @ 0x14059D470 (MmBackSystemImageWithPagefile.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // rcx

  result = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
      return MmBackSystemImageWithPagefile(v3);
    else
      return 3221226083LL;
  }
  return result;
}
