/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x180029BB0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x180081A68 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     LdrpCompareModuleBaseAddresses @ 0x1800297E8 (LdrpCompareModuleBaseAddresses.c)
 *     LdrpCompareModuleMappingInfo @ 0x180029E04 (LdrpCompareModuleMappingInfo.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v4; // eax
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v7 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v7;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  v5 = LdrpMappingInfoIndex;
  v6 = byte_1801602D0 & 1;
  v14 = v7;
  LOBYTE(v7) = 0;
  v15 = v4;
  if ( LdrpMappingInfoIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v14, v5, v7) < 0 )
      {
        v8 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_8:
            LOBYTE(v7) = 0;
            break;
          }
          v8 ^= v5;
        }
        if ( !v8 )
          goto LABEL_8;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_9:
            LOBYTE(v7) = 1;
            break;
          }
          v8 ^= v5;
        }
        if ( !v8 )
          goto LABEL_9;
      }
      v5 = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v5, v7, a1 + 224);
  v10 = LdrpModuleBaseAddressIndex;
  v11 = byte_1801602C0 & 1;
  if ( LdrpModuleBaseAddressIndex )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), v10) >= 0 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
          {
LABEL_17:
            v2 = 1;
            break;
          }
          v12 ^= v10;
        }
        if ( !v12 )
          goto LABEL_17;
      }
      else
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= v10;
        }
        if ( !v12 )
          break;
      }
      v10 = v12;
    }
  }
  LOBYTE(v9) = v2;
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v10, v9, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
