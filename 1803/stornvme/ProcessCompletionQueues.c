/*
 * XREFs of ProcessCompletionQueues @ 0x1C0011D00
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0002750 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C00027B0 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C00117F0 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  char v4; // di
  __int64 v5; // r8
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  int *v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 16) || a3 || (v4 = 0, (*(_DWORD *)(a1 + 88) & 1) != 0) )
    v4 = 1;
  if ( a2 == 0xFFFF || *(_WORD *)(a1 + 208) <= 1u )
  {
    result = *(_QWORD *)(a1 + 384);
    if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 482) + 14) & 1) != *(_WORD *)(a1 + 484) )
    {
      if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 120) + 12LL) = 1 << *(_BYTE *)(a1 + 480);
        _InterlockedOr(v10, 0);
        *(_BYTE *)(a1 + 18) = 1;
      }
      if ( v4 )
      {
        result = NVMeCompletionDpcRoutine(a1 + 408, a1, a1 + 384);
      }
      else
      {
        v13 = 0;
        v12 = &v13;
        v11 = 0LL;
        result = StorPortNotification(4098LL, a1, a1 + 408, a1 + 384);
      }
    }
    for ( i = 0; ; ++i )
    {
      v9 = *(_QWORD *)(a1 + 560);
      if ( !v9 )
        break;
      result = *(unsigned __int16 *)(a1 + 242);
      if ( i >= (unsigned int)result )
        break;
      v8 = v9 + 168LL * i;
      result = *(_QWORD *)v8;
      if ( (*(_WORD *)(*(_QWORD *)v8 + 16LL * *(unsigned __int16 *)(v8 + 98) + 14) & 1) != *(_WORD *)(v8 + 100) )
      {
        if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 120) + 12LL) = 1 << *(_BYTE *)(v8 + 96);
          _InterlockedOr(v10, 0);
          *(_BYTE *)(a1 + 18) = 1;
        }
        if ( v4 )
        {
          result = NVMeCompletionDpcRoutine(v8 + 24, a1, v8);
        }
        else
        {
          v15 = 0;
          v12 = &v15;
          v11 = 0LL;
          result = StorPortNotification(4098LL, a1, v8 + 24, v8);
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v5 = 168LL * a2 + *(_QWORD *)(a1 + 560) - 168LL;
    else
      v5 = a1 + 384;
    if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 120) + 12LL) = 1 << *(_BYTE *)(v5 + 96);
      _InterlockedOr(v10, 0);
      *(_BYTE *)(a1 + 18) = 1;
    }
    if ( v4 )
    {
      return NVMeCompletionDpcRoutine(v5 + 24, a1, v5);
    }
    else
    {
      v14 = 0;
      v12 = &v14;
      v11 = 0LL;
      return StorPortNotification(4098LL, a1, v5 + 24, v5);
    }
  }
  return result;
}
