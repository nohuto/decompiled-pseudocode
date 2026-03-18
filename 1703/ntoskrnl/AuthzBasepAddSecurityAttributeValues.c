/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x14006593C
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14006589C (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400039E8 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140065AF0 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140065C2C (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140065C78 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  __int64 SecurityAttributeValue; // rdi
  int v5; // ebp
  __int64 i; // rsi
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // eax
  void *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  int v16; // eax
  unsigned int v17; // edx

  SecurityAttributeValue = 0LL;
  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v5 = 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
    {
      v7 = *(unsigned __int16 *)(a1 + 48);
      if ( *(_WORD *)(a1 + 48) )
      {
        if ( v7 <= 2 )
          goto LABEL_5;
        switch ( v7 )
        {
          case 3u:
LABEL_21:
            v8 = *(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i;
            goto LABEL_6;
          case 6u:
LABEL_5:
            v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * i);
LABEL_6:
            SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v8);
            goto LABEL_7;
          case 4u:
            v8 = *(_QWORD *)(a2 + 32) + 24 * i;
            goto LABEL_6;
          case 5u:
          case 0x10u:
            goto LABEL_21;
        }
      }
      v5 = -1073741811;
LABEL_7:
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( !SecurityAttributeValue )
      {
        v9 = 0;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 3:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
            break;
          case 4:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * i + 8);
            break;
          case 5:
          case 0x10:
            v9 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
            break;
        }
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(v9);
        if ( !SecurityAttributeValue )
          return (unsigned int)-1073741670;
        v11 = *(unsigned __int16 *)(a2 + 16);
        if ( *(_WORD *)(a2 + 16) )
        {
          if ( v11 <= 2 )
            goto LABEL_16;
          switch ( v11 )
          {
            case 3u:
              v13 = (void *)(SecurityAttributeValue + 64);
              v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
              *(_WORD *)(SecurityAttributeValue + 40) = v14;
              *(_WORD *)(SecurityAttributeValue + 42) = v14;
              *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
              goto LABEL_24;
            case 6u:
LABEL_16:
              *(_QWORD *)(SecurityAttributeValue + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * i);
              break;
            case 4u:
              *(_QWORD *)(SecurityAttributeValue + 40) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24 * i);
              v13 = (void *)(SecurityAttributeValue + 64);
              v17 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * i + 8);
              *(_WORD *)(SecurityAttributeValue + 48) = v17;
              v14 = v17;
              *(_QWORD *)(SecurityAttributeValue + 56) = SecurityAttributeValue + 64;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 24 * i + 16);
LABEL_24:
              memmove(v13, v15, v14);
              break;
            case 5u:
            case 0x10u:
              v13 = (void *)(SecurityAttributeValue + 64);
              v14 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
              *(_DWORD *)(SecurityAttributeValue + 48) = v14;
              *(_QWORD *)(SecurityAttributeValue + 40) = SecurityAttributeValue + 64;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
              goto LABEL_24;
          }
        }
        LOBYTE(v10) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(a1, SecurityAttributeValue, 0LL, v10);
        continue;
      }
      v16 = *(_DWORD *)(SecurityAttributeValue + 32);
      if ( (v16 & 4) == 0 )
        return (unsigned int)-1073741771;
      *(_DWORD *)(SecurityAttributeValue + 32) = v16 & 0xFFFFFFFB;
      AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, (__int64 *)SecurityAttributeValue, 0);
      --*(_DWORD *)(a1 + 64);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
