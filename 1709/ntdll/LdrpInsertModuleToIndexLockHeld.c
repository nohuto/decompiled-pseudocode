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

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  BOOLEAN v2; // bl
  int v4; // eax
  _RTL_BALANCED_NODE *Root; // rdi
  int v6; // esi
  __int64 v7; // r8
  _RTL_BALANCED_NODE *v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  unsigned __int64 v11; // rax
  BOOLEAN result; // al
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v7 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v7;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  Root = LdrpMappingInfoIndex.Root;
  v6 = *(_BYTE *)&LdrpMappingInfoIndex.0 & 1;
  v13 = v7;
  LOBYTE(v7) = 0;
  v14 = v4;
  if ( LdrpMappingInfoIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleMappingInfo(&v13, Root, v7) < 0 )
      {
        v8 = Root->Children[0];
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_8:
            LOBYTE(v7) = 0;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_8;
      }
      else
      {
        v8 = Root->Children[1];
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_9:
            LOBYTE(v7) = 1;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_9;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = (__int64)LdrpModuleBaseAddressIndex.Root;
  v10 = *(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1;
  if ( LdrpModuleBaseAddressIndex.Root )
  {
    while ( 1 )
    {
      if ( (int)LdrpCompareModuleBaseAddresses(*(_QWORD *)(a1 + 48), v9) >= 0 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          if ( !v11 )
          {
LABEL_17:
            v2 = 1;
            break;
          }
          v11 ^= v9;
        }
        if ( !v11 )
          goto LABEL_17;
      }
      else
      {
        v11 = *(_QWORD *)v9;
        if ( v10 )
        {
          if ( !v11 )
            break;
          v11 ^= v9;
        }
        if ( !v11 )
          break;
      }
      v9 = v11;
    }
  }
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)v9, v2, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
