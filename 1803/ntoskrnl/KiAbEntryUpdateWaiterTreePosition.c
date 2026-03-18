/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140064B24
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2)
{
  char v3; // r8
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax

  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
  result = (unsigned __int8)v3;
  if ( v3 > 15 )
    result = 15LL;
  if ( *(_BYTE *)(a1 + 48) != (_BYTE)result )
  {
    v5 = a2 + 64;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode(a2 + 64, a1);
    v6 = 0;
    v7 = *(_QWORD *)v5;
    if ( (*(_QWORD *)(v5 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v5;
      else
        v7 = 0LL;
    }
    v8 = *(_QWORD *)(v5 + 8) & 1LL;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v7 + 48) >= *(_BYTE *)(a1 + 48) )
        {
          v9 = *(_QWORD *)(v7 + 8);
          if ( (_DWORD)v8 )
          {
            if ( !v9 )
              goto LABEL_20;
            v9 ^= v7;
          }
          if ( !v9 )
          {
LABEL_20:
            v6 = 1;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)v7;
          if ( (_DWORD)v8 )
          {
            if ( !v9 )
              break;
            v9 ^= v7;
          }
          if ( !v9 )
            break;
        }
        v7 = v9;
      }
    }
    LOBYTE(v8) = v6;
    return RtlRbInsertNodeEx(v5, v7, v8, a1);
  }
  return result;
}
