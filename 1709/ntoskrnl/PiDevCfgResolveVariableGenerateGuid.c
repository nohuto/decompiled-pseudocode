/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x1406C8F70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
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
