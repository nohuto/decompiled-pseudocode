/*
 * XREFs of SepHasCriticalAcePresent @ 0x1405D5890
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405949E0 (RtlGetControlSecurityDescriptor.c)
 */

char __fastcall SepHasCriticalAcePresent(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Sid2,
        bool *a3,
        bool *a4,
        bool *Control)
{
  bool *v5; // r12
  char v10; // bl
  char v11; // r14
  PACL v12; // rbp
  PACL v13; // rdi
  unsigned int AceCount; // ebp
  bool v15; // cl
  unsigned int v16; // esi
  char result; // al
  ULONG Revision; // [rsp+70h] [rbp+18h] BYREF
  PACL v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = Control;
  *a3 = 0;
  *a4 = 0;
  v19 = 0LL;
  *v5 = 0;
  v10 = 16;
  v11 = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, (PBOOLEAN)&Control, &v19, (PBOOLEAN)&Revision) < 0 )
    return 0;
  if ( !(_BYTE)Control )
    return 0;
  v12 = v19;
  if ( !v19
    || RtlGetControlSecurityDescriptor(SecurityDescriptor, (PSECURITY_DESCRIPTOR_CONTROL)&Control, &Revision) < 0 )
  {
    return 0;
  }
  v13 = v12 + 1;
  AceCount = v12->AceCount;
  v15 = ((unsigned __int16)Control & 0x1000) != 0;
  *a4 = ((unsigned __int16)Control & 0x400) != 0;
  v16 = 0;
  for ( *v5 = v15; v16 < AceCount; v13 = (PACL)((char *)v13 + v13->AclSize) )
  {
    if ( v13->AclRevision <= 3u )
    {
      if ( RtlEqualSid(&v13[1], Sid2) )
      {
        v11 = 1;
        v10 &= v13->Sbz1;
        if ( (v10 & 0x10) == 0 )
          break;
      }
    }
    ++v16;
  }
  result = v11;
  *a3 = (v10 & 0x10) != 0;
  return result;
}
