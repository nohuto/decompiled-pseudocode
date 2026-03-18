/*
 * XREFs of ProcessCompletionQueues @ 0x1C0011818
 * Callers:
 *     NVMeHwInterrupt @ 0x1C00027E0 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C0002840 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0011320 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  char v4; // di
  __int64 v5; // r10
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v8; // r10
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h]
  int *v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 16) || a3 || (v4 = 0, (*(_DWORD *)(a1 + 88) & 1) != 0) )
    v4 = 1;
  if ( a2 == 0xFFFF || *(_WORD *)(a1 + 200) <= 1u )
  {
    result = *(_QWORD *)(a1 + 376);
    if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 474) + 14) & 1) != *(_WORD *)(a1 + 476) )
    {
      if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL) = 1 << *(_BYTE *)(a1 + 472);
        _InterlockedOr(v9, 0);
        *(_BYTE *)(a1 + 18) = 1;
      }
      if ( v4 )
      {
        result = NVMeCompletionDpcRoutine(a1 + 400, a1, a1 + 376);
      }
      else
      {
        v12 = 0;
        v11 = &v12;
        v10 = 0LL;
        result = StorPortNotification(4098LL, a1, a1 + 400, a1 + 376);
      }
    }
    for ( i = 0; *(_QWORD *)(a1 + 552); ++i )
    {
      result = *(unsigned __int16 *)(a1 + 234);
      if ( i >= (unsigned int)result )
        break;
      v8 = *(_QWORD *)(a1 + 552) + 168LL * i;
      result = *(_QWORD *)v8;
      if ( (*(_WORD *)(*(_QWORD *)v8 + 16LL * *(unsigned __int16 *)(v8 + 98) + 14) & 1) != *(_WORD *)(v8 + 100) )
      {
        if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL) = 1 << *(_BYTE *)(v8 + 96);
          _InterlockedOr(v9, 0);
          *(_BYTE *)(a1 + 18) = 1;
        }
        if ( v4 )
        {
          result = NVMeCompletionDpcRoutine(v8 + 24, a1, v8);
        }
        else
        {
          v14 = 0;
          v11 = &v14;
          v10 = 0LL;
          result = StorPortNotification(4098LL, a1, v8 + 24, v8);
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v5 = 168LL * a2 + *(_QWORD *)(a1 + 552) - 168LL;
    else
      v5 = a1 + 376;
    if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL) = 1 << *(_BYTE *)(v5 + 96);
      _InterlockedOr(v9, 0);
      *(_BYTE *)(a1 + 18) = 1;
    }
    if ( v4 )
    {
      return NVMeCompletionDpcRoutine(v5 + 24, a1, v5);
    }
    else
    {
      v13 = 0;
      v11 = &v13;
      v10 = 0LL;
      return StorPortNotification(4098LL, a1, v5 + 24, v5);
    }
  }
  return result;
}
