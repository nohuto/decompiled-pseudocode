/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x14069DA70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax
  PVOID v7; // rbp
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UUID v10; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&v10);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&v10.Data1, (__int64)&DestinationString, 1);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v5 = DestinationString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x63647050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, DestinationString.Buffer, v5);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v5;
          *(_QWORD *)(a3 + 40) = v7;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v4;
}
