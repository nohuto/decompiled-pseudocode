/*
 * XREFs of NtOpenSection @ 0x140434530
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r14d
  PHANDLE v5; // rbx
  unsigned __int8 v6; // si
  int v7; // edi
  unsigned __int64 CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = (int)ObjectAttributes;
  v5 = SectionHandle;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 )
  {
    if ( (unsigned __int64)SectionHandle >= 0x7FFFFFFF0000LL )
      SectionHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SectionHandle = *SectionHandle;
  }
  v7 = (int)MmSectionObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(v3, v7, v6, 0, DesiredAccess, 0LL, CurrentSilo, (__int64)&v10);
  *v5 = v10;
  return result;
}
