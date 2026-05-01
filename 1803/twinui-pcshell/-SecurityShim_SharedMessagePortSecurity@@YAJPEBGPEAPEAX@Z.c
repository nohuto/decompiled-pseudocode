/*
 * XREFs of ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x1802FB978
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1802FB758 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x18030B990 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1802FAF70 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?IsPhone@@YA_NXZ @ 0x1802FB940 (-IsPhone@@YA_NXZ.c)
 */

__int64 __fastcall SecurityShim_SharedMessagePortSecurity(const unsigned __int16 *a1, void **a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  SecurityDescriptor = 0LL;
  if ( IsPhone() )
  {
    v2 = QueryTransientObjectSecurityDescriptor(8LL, a1, &SecurityDescriptor);
  }
  else if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
               L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-419202"
                "8372-3968301570-1997628692-1435953622)",
               1u,
               &SecurityDescriptor,
               0LL) )
  {
    FailFastWithHR(-2147467259, retaddr, 0x66uLL);
  }
  result = v2;
  *a2 = SecurityDescriptor;
  return result;
}
