/*
 * XREFs of sub_18006CEA4 @ 0x18006CEA4
 * Callers:
 *     RtlpInitializeLangRegistryInfo @ 0x18006CE80 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006D210 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     sub_18006E66C @ 0x18006E66C (sub_18006E66C.c)
 *     sub_18006E8F4 @ 0x18006E8F4 (sub_18006E8F4.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A7090 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800FA9D0 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall sub_18006CEA4(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 Heap; // rax
  unsigned __int64 v4; // rsi
  int v5; // edi
  int v6; // r8d
  int v7; // r9d
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  v1 = 0LL;
  v17 = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  v16 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v16, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v17 = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( v16 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16);
    v1 = v17;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v16, v4) < 0
    || (int)sub_18006E8F4(v4, v16, &v17) < 0
    || (v1 = v17, v5 = sub_18006E66C(v17), v5 < 0) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v1 + 40) && (int)sub_18006E330(0x2000000, 0, v6, v7, (__int64)&v19) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    v18 = 0LL;
    v12 = v19;
    v11 = 48;
    p_DestinationString = &DestinationString;
    v14 = 64;
    v15 = 0LL;
    if ( (int)ZwOpenKey(&v18, 131097LL, &v11) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      ZwClose(v18);
    }
    sub_18006E310(v19);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
