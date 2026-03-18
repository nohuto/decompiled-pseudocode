/*
 * XREFs of CreateSecurityDescriptor @ 0x1C0026A80
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C01DD348 (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v6; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  NTSTATUS v11; // ebx

  if ( AceListLength + 8 >= AceListLength )
  {
    v6 = AceListLength + 8;
    if ( AceListLength + 48 >= AceListLength + 8 )
    {
      v7 = (struct _ACL *)Win32AllocPoolWithQuota(AceListLength + 48, 1702064981LL);
      v8 = v7;
      if ( v7 )
      {
        RtlCreateSecurityDescriptor(v7, 1u);
        if ( RtlCreateAcl(v8 + 5, v6, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
        {
          v11 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, DaclDefaulted);
          RtlSetSaclSecurityDescriptor(v8, 0, 0LL, 0);
          RtlSetOwnerSecurityDescriptor(v8, 0LL, 0);
          RtlSetGroupSecurityDescriptor(v8, 0LL, 0);
          if ( v11 >= 0 )
            return v8;
        }
        Win32FreePool(v8, v9, v10);
      }
    }
  }
  return 0LL;
}
