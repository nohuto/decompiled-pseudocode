/*
 * XREFs of ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x180173800
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801734DC (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     ?IsOneCoreEdition@@YAHXZ @ 0x180173770 (-IsOneCoreEdition@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SecurityShim_SharedMessagePortSecurity(const unsigned __int16 *a1, void **a2)
{
  unsigned int v2; // ebx
  HMODULE Library; // rax
  HMODULE v6; // rdi
  FARPROC ProcAddress; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  SecurityDescriptor = 0LL;
  if ( (unsigned int)IsOneCoreEdition()
    || (Library = LoadLibraryExW(L"secruntime.dll", 0LL, 0x800u), (v6 = Library) == 0LL) )
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-419202837"
             "2-3968301570-1997628692-1435953622)",
            1u,
            &SecurityDescriptor,
            0LL) )
      MEMORY[0] = 161;
  }
  else
  {
    ProcAddress = GetProcAddress(Library, "QueryTransientObjectSecurityDescriptor");
    if ( !ProcAddress )
      MEMORY[0] = 170;
    v2 = ((__int64 (__fastcall *)(__int64, const unsigned __int16 *, PSECURITY_DESCRIPTOR *))ProcAddress)(
           8LL,
           a1,
           &SecurityDescriptor);
    FreeLibrary(v6);
  }
  *a2 = SecurityDescriptor;
  return v2;
}
