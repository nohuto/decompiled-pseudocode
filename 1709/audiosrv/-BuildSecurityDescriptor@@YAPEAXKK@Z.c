/*
 * XREFs of ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x1800A0B38
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x1800A1110 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

void *__fastcall BuildSecurityDescriptor()
{
  __int64 v0; // rdi
  void *v1; // r14
  struct _ACL *v2; // rbx
  char v3; // r12
  void *v4; // rax
  void *v5; // rsi
  CAudioDGProcess *v6; // rcx
  unsigned __int16 v7; // dx
  DWORD LastError; // eax
  unsigned __int16 v9; // dx
  DWORD v10; // eax
  unsigned __int16 v11; // dx
  DWORD LengthSid; // ebx
  DWORD v13; // r15d
  struct _ACL *v14; // rax
  void *v15; // rax
  DWORD dwBufferLength; // [rsp+60h] [rbp-20h] BYREF
  PSID pSid; // [rsp+68h] [rbp-18h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  v0 = 0LL;
  pSid = 0LL;
  v1 = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
  v3 = 0;
  v4 = HeapAlloc(hHeap, 0, 0x28uLL);
  v5 = v4;
  if ( !v4 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = 10;
LABEL_6:
      WPP_SF_(*((_QWORD *)v6 + 2), v7, (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids);
      goto LABEL_55;
    }
    goto LABEL_55;
  }
  if ( !InitializeSecurityDescriptor(v4, 1u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    LastError = GetLastError();
    v9 = 11;
    goto LABEL_54;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    v10 = GetLastError();
    v11 = 12;
    goto LABEL_17;
  }
  LengthSid = GetLengthSid(AudiosrvSid);
  v13 = LengthSid + GetLengthSid(pSid) + 24;
  v14 = (struct _ACL *)HeapAlloc(hHeap, 0, v13);
  v2 = v14;
  if ( !v14 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = 13;
      goto LABEL_6;
    }
    goto LABEL_55;
  }
  if ( !InitializeAcl(v14, v13, 2u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    v10 = GetLastError();
    v11 = 14;
LABEL_17:
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids, v10);
    goto LABEL_55;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 0xF001Fu, AudiosrvSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    LastError = GetLastError();
    v9 = 15;
    goto LABEL_54;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 4u, pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    LastError = GetLastError();
    v9 = 16;
    goto LABEL_54;
  }
  if ( !SetSecurityDescriptorDacl(v5, 1, v2, 0) )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_55;
    }
    LastError = GetLastError();
    v9 = 17;
LABEL_54:
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v9,
      (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids,
      LastError);
    goto LABEL_55;
  }
  dwBufferLength = GetSecurityDescriptorLength(v5);
  v15 = HeapAlloc(hHeap, 0, dwBufferLength);
  v1 = v15;
  if ( !v15 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = 18;
      goto LABEL_6;
    }
    goto LABEL_55;
  }
  if ( MakeSelfRelativeSD(v5, v15, &dwBufferLength) )
  {
    v3 = 1;
    goto LABEL_55;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    v9 = 19;
    goto LABEL_54;
  }
LABEL_55:
  if ( pSid )
    FreeSid(pSid);
  if ( v2 )
    HeapFree(hHeap, 0, v2);
  if ( v5 )
    HeapFree(hHeap, 0, v5);
  if ( v3 )
    return v1;
  if ( v1 )
    HeapFree(hHeap, 0, v1);
  return (void *)v0;
}
