/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C01E5CD0
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z @ 0x1C01E61C8 (-Create@DXGVAILOBJECT@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  NTSTATUS SecurityDescriptor; // ebx
  ULONG v5; // r15d
  struct _ACL *v6; // rdi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+28h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  SecurityDescriptor = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  if ( SecurityDescriptor >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v5 = RtlLengthSid(Sid);
    v6 = (struct _ACL *)operator new(v5 + 60, 0x4B677844u, 1, PagedPool);
    if ( !v6 )
      SecurityDescriptor = -1073741801;
    if ( SecurityDescriptor >= 0 )
    {
      SecurityDescriptor = RtlCreateSecurityDescriptor(v6, 1u);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = RtlCreateAcl(v6 + 5, v5 + 20, 4u);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = RtlAddAccessAllowedAce(v6 + 5, 4u, AccessMask, Sid);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = RtlSetDaclSecurityDescriptor(v6, 1u, v6 + 5, 0);
            if ( SecurityDescriptor >= 0 )
            {
              *a2 = v6;
              v6 = 0LL;
            }
          }
        }
      }
    }
    if ( v6 )
      operator delete[](v6);
  }
  return (unsigned int)SecurityDescriptor;
}
