/*
 * XREFs of sub_1800822D0 @ 0x1800822D0
 * Callers:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800FF714 @ 0x1800FF714 (sub_1800FF714.c)
 */

__int64 __fastcall sub_1800822D0(__int64 a1, volatile signed __int64 *a2)
{
  unsigned int v4; // edi
  unsigned int v6; // r8d
  int v7; // edx
  signed __int32 v8; // ebx
  volatile signed __int64 *v9; // r8
  int v10; // edx
  signed __int64 v11; // rax
  int v12; // ecx
  int v13; // edx
  signed __int64 v14; // rax
  int v15; // ecx
  __int64 UserModeGlobalLogger; // rcx
  signed __int64 v17; // [rsp+40h] [rbp+8h]
  signed __int64 v18; // [rsp+40h] [rbp+8h]

  v4 = 1;
  if ( *(volatile signed __int64 **)a1 != a2 )
  {
    v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( v8 >= 0 )
      {
        if ( !(_WORD)v8 )
          return 0;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8 | 0x80000000, v8) )
          break;
      }
      if ( ++v7 > v6 )
      {
        v8 = -1;
        break;
      }
    }
    if ( v8 == -1 )
      return 0;
    if ( v8 )
    {
      v9 = *(volatile signed __int64 **)a1;
      v10 = -*(unsigned __int16 *)(a1 + 40);
      do
      {
        v11 = *((_QWORD *)v9 + 20);
        if ( v10 > 0 )
          v12 = HIDWORD(v11) + 1;
        else
          v12 = HIDWORD(v11) - 1;
        HIDWORD(v17) = v12;
        LODWORD(v17) = v11 + v10;
      }
      while ( v11 != _InterlockedCompareExchange64(v9 + 20, v17, v11) );
      v13 = *(unsigned __int16 *)(a1 + 40);
      do
      {
        v14 = *((_QWORD *)a2 + 20);
        if ( v13 )
          v15 = HIDWORD(v14) + 1;
        else
          v15 = HIDWORD(v14) - 1;
        HIDWORD(v18) = v15;
        LODWORD(v18) = v14 + v13;
      }
      while ( v14 != _InterlockedCompareExchange64(a2 + 20, v18, v14) );
      *(_QWORD *)a1 = a2;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FF714(
          *(_QWORD *)(*(_QWORD *)(*a2 + 24) + 24LL),
          *(_QWORD *)(a1 + 8),
          (unsigned int)LOWORD(NtCurrentTeb()->HeapData) - 1);
    }
    else
    {
      v4 = 0;
    }
    *(_DWORD *)(a1 + 32) = v8;
  }
  return v4;
}
