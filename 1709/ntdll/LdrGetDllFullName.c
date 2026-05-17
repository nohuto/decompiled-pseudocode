/*
 * XREFs of LdrGetDllFullName @ 0x180079D70
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180067534 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     RtlCopyUnicodeString @ 0x18002DA90 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllFullName(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // esi
  unsigned __int16 *v4; // rdi
  __int64 v5; // rbx
  void *SubSystemTib; // rcx
  unsigned int LoadedDllByHandle; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v10, &v9);
    v5 = v10;
    v2 = LoadedDllByHandle;
    if ( !v10 )
      return v2;
    v4 = (unsigned __int16 *)(v10 + 72);
  }
  else
  {
    v10 = LdrpImageEntry;
    v4 = (unsigned __int16 *)(LdrpImageEntry + 72);
    v5 = LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v4 = (unsigned __int16 *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(a2, v4);
    if ( *v4 > a2[1] )
      v2 = -1073741789;
    if ( v5 != LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v2;
}
