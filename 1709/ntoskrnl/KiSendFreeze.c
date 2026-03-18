/*
 * XREFs of KiSendFreeze @ 0x140209BCC
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  unsigned __int16 *v2; // rax
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 **)(a1 + 8);
  v10 = 0;
  v9[1] = v2;
  v5 = 0;
  v9[0] = (unsigned __int16 *)a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v9);
    if ( (_DWORD)result )
      break;
    v7 = KiProcessorBlock[v11];
    v8 = 0;
    if ( a2 )
    {
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, v8) )
      {
        do
        {
          _mm_pause();
          v8 = *(_DWORD *)(v7 + 11656);
        }
        while ( v8 );
      }
LABEL_8:
      ++v5;
    }
    else
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, 0) )
        goto LABEL_8;
      KeRemoveProcessorAffinityEx((unsigned __int16 *)a1, v11);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
