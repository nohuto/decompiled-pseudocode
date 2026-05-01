/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18000C8F8
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000C7EC (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x18000CA0C (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180095590 (-Free@ARI@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        const UNICODE_STRING **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS InformationToken; // eax
  void *v8; // rax
  void *v9; // rdx
  ULONG v10; // edi
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  const UNICODE_STRING *v14; // rbp
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  Size = (size_t)a4;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    v8 = (void *)ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>((unsigned int)Size);
    v10 = 0;
    v11 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, (unsigned int)Size);
      v12 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v11, Size, (PULONG)&Size);
      if ( v12 < 0 )
      {
        v10 = RtlNtStatusToDosErrorNoTeb(v12);
      }
      else if ( *((_DWORD *)v11 + 1)
             && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v13 = 0, *((_DWORD *)v11 + 1)) )
      {
        while ( 1 )
        {
          v14 = (const UNICODE_STRING *)(*((_QWORD *)v11 + 1) + 40LL * v13);
          if ( !RtlCompareUnicodeString(&DestinationString, v14, 1u) )
            break;
          if ( ++v13 >= *((_DWORD *)v11 + 1) )
            goto LABEL_8;
        }
        *a3 = v14;
        *a2 = v11;
        v11 = 0LL;
      }
      else
      {
LABEL_8:
        v10 = 1168;
      }
    }
    else
    {
      v10 = 8;
    }
    ARI::Free(v11, v9);
    return v10;
  }
  else if ( InformationToken )
  {
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  }
  else
  {
    return 1359;
  }
}
