/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C01E5E1C
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C01E69E4 (-GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C01E6AE4 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        __int64 a2,
        __int64 a3,
        struct _ACL **a4)
{
  int v4; // esi
  NTSTATUS ObjectSecurity; // eax
  PSECURITY_DESCRIPTOR v8; // rcx
  NTSTATUS DaclSecurityDescriptor; // ebx
  DXGVAILOBJECT *v10; // rcx
  struct _ACL *v11; // rax
  WORD v12; // di
  ULONG v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _ACL *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  struct _ACL *v19; // rax
  unsigned __int16 v20; // r14
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-4Fh] BYREF
  unsigned __int8 MemoryAllocated[2]; // [rsp+32h] [rbp-4Eh] BYREF
  unsigned int v25; // [rsp+34h] [rbp-4Ch] BYREF
  PACL Dacl; // [rsp+38h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-40h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-38h] BYREF
  PSID SourceSid; // [rsp+50h] [rbp-30h]
  PSID v30; // [rsp+58h] [rbp-28h]
  _BYTE Sid[24]; // [rsp+60h] [rbp-20h] BYREF

  v25 = -1;
  SecurityDescriptor = 0LL;
  v4 = 0;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  SourceSid = 0LL;
  v30 = 0LL;
  ObjectSecurity = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  v8 = SecurityDescriptor;
  DaclSecurityDescriptor = ObjectSecurity;
  if ( !SecurityDescriptor )
    DaclSecurityDescriptor = -1073741786;
  if ( DaclSecurityDescriptor >= 0 )
  {
    DaclPresent = 0;
    DaclDefaulted = 0;
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( DaclSecurityDescriptor >= 0 )
    {
      if ( !DaclPresent || DaclDefaulted )
        DaclSecurityDescriptor = -1073741786;
      if ( DaclSecurityDescriptor >= 0 )
      {
        DaclSecurityDescriptor = DXGVAILOBJECT::GetHandleProcessSession(this, &v25);
        if ( DaclSecurityDescriptor >= 0 )
        {
          v11 = Dacl;
          v12 = 0;
          if ( Dacl->AceCount )
          {
            while ( 1 )
            {
              DaclSecurityDescriptor = RtlGetAce(v11, v12, &Ace);
              if ( DaclSecurityDescriptor < 0 )
                break;
              ++v12;
              v4 += RtlLengthSid((char *)Ace + 8) + 12;
              v11 = Dacl;
              if ( v12 >= Dacl->AceCount )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            DXGVAILOBJECT::InitializeDWMSid(v10, v25, Sid);
            v13 = v4 + RtlLengthSid(Sid) + 12;
            v16 = (struct _ACL *)operator new(v13 + 48, 0x4B677844u, 1, PagedPool);
            if ( !v16 )
            {
              DaclSecurityDescriptor = -1073741801;
              v18 = WdLogNewEntry5_WdWarning(v15, v14, v17);
              *(_QWORD *)(v18 + 24) = v13 + 48;
              *(_QWORD *)(v18 + 32) = -1073741801LL;
              WdLogEvent5_WdWarning(v18);
            }
            if ( DaclSecurityDescriptor >= 0 )
            {
              DaclSecurityDescriptor = RtlCreateSecurityDescriptor(v16, 1u);
              if ( DaclSecurityDescriptor >= 0 )
              {
                if ( SourceSid )
                {
                  RtlCopySid(0, &v16[5], SourceSid);
                  DaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(v16, &v16[5], 0);
                }
                if ( DaclSecurityDescriptor >= 0 )
                {
                  if ( v30 )
                  {
                    RtlCopySid(0, &v16[5], v30);
                    DaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(v16, &v16[5], 0);
                  }
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlCreateAcl(v16 + 5, v13, 4u);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      v19 = Dacl;
                      v20 = 0;
                      if ( Dacl->AceCount )
                      {
                        while ( 1 )
                        {
                          DaclSecurityDescriptor = RtlGetAce(v19, v20, &Ace);
                          if ( DaclSecurityDescriptor < 0 )
                            break;
                          DaclSecurityDescriptor = RtlAddAce(v16 + 5, 4u, 0, Ace, *((unsigned __int16 *)Ace + 1));
                          if ( DaclSecurityDescriptor < 0 )
                            break;
                          v19 = Dacl;
                          if ( ++v20 >= Dacl->AceCount )
                            goto LABEL_28;
                        }
                      }
                      else
                      {
LABEL_28:
                        DaclSecurityDescriptor = RtlAddAccessAllowedAce(v16 + 5, 4u, 0x10000000u, Sid);
                        if ( DaclSecurityDescriptor >= 0 )
                          DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(v16, 1u, v16 + 5, 0);
                      }
                    }
                  }
                }
              }
            }
            if ( v16 )
            {
              if ( DaclSecurityDescriptor < 0 )
                operator delete[](v16);
              else
                *a4 = v16;
            }
          }
        }
      }
    }
    v8 = SecurityDescriptor;
  }
  if ( v8 )
    ObReleaseObjectSecurity(v8, MemoryAllocated[0]);
  return (unsigned int)DaclSecurityDescriptor;
}
