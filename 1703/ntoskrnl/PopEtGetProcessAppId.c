/*
 * XREFs of PopEtGetProcessAppId @ 0x1406D27C0
 * Callers:
 *     PoEnergyContextStart @ 0x1406D0244 (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopEtAppIdDereference @ 0x1406D0D30 (PopEtAppIdDereference.c)
 *     PopEtAppIdIntern @ 0x1406D0D60 (PopEtAppIdIntern.c)
 *     PopEtGetProcessImageInfo @ 0x1406D294C (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406D29A8 (PopEtGetProcessSidAndPackageIdentity.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  unsigned __int8 *v5; // rcx
  WCHAR *v6; // rdx
  WCHAR v7; // ax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[10]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[80]; // [rsp+90h] [rbp-70h] BYREF
  int v16; // [rsp+E0h] [rbp-20h] BYREF
  char v17; // [rsp+E4h] [rbp-1Ch] BYREF
  char v18; // [rsp+1E4h] [rbp+E4h] BYREF
  WCHAR SourceString[16]; // [rsp+270h] [rbp+170h] BYREF

  p_DestinationString = *(UNICODE_STRING **)(a1 + 1128);
  v11 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    v5 = (unsigned __int8 *)(a1 + 1104);
    v6 = SourceString;
    do
    {
      v7 = *v5;
      *v6 = v7;
      if ( !(_BYTE)v7 )
        break;
      ++v5;
      ++v6;
    }
    while ( (unsigned __int64)&v5[-1104 - a1] < 0xF );
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, v12);
  PopEtGetProcessSidAndPackageIdentity(a1, v15, &v16);
  memset(v13, 0, sizeof(v13));
  v13[4] = v12;
  v13[8] = v15;
  HIWORD(v13[9]) = 4 * (v15[1] + 2);
  v13[5] = p_DestinationString->Buffer;
  LOWORD(v13[9]) = p_DestinationString->Length >> 1;
  v13[6] = &v17;
  *(_DWORD *)((char *)&v13[9] + 2) = v16;
  v13[7] = &v18;
  v8 = PopEtAppIdIntern((__int64)v13, &v11);
  if ( v8 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v9 = 0LL;
    *a2 = v11;
    v8 = 0;
  }
  if ( v9 )
    PopEtAppIdDereference(v9);
  return (unsigned int)v8;
}
