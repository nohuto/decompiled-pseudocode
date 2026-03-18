/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C0009AE0
 * Callers:
 *     VidSchiUpdatePriorityTables @ 0x1C0009A40 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // r14
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 result; // rax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  char v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v4 = (_DWORD *)a2;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(volatile signed __int32 **)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 948));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2788));
  _InterlockedIncrement(v6 + 299);
  if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 4) > 1 )
    _InterlockedIncrement(v6 + 300);
  if ( !*(_DWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 72) & 4) != 0 )
  {
    a2 = *(unsigned int *)(a1 + 176);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 104LL) + 32LL) + 8 * a2 + 3008);
    _InterlockedExchangeAdd(v6 + 737, 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 768));
  ++*(_DWORD *)(v2 + 764);
  ++*(_DWORD *)(v5 + 2784);
  ++*(_DWORD *)(v7 + 944);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2);
  v8[3] = a1;
  v8[4] = *(_QWORD *)(a1 + 112);
  v8[5] = v2;
  v8[6] = *(_QWORD *)(v2 + 136);
  v8[7] = *(_QWORD *)(v2 + 152);
  WdLogEvent5_WdEvent(v8);
  v10 = v2 + 648;
  v11 = *(__int64 **)(v2 + 656);
  result = a1 + 32;
  if ( *v11 != v2 + 648 )
    __fastfail(3u);
  *(_QWORD *)result = v10;
  *(_QWORD *)(a1 + 40) = v11;
  *v11 = result;
  *(_QWORD *)(v2 + 656) = result;
  if ( *(_DWORD *)(v2 + 764) == 1 )
  {
    v9 = 0;
    *(_QWORD *)(v2 + 632) = a1;
    v13 = ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1) | *(_DWORD *)(v2 + 628) & 0xFFFFFFFE;
    v14 = 0;
    *(_DWORD *)(v2 + 628) = v13;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v14 = 2;
    v15 = v13 & 0xFFFFFFFD | v14;
    v16 = 0;
    *(_DWORD *)(v2 + 628) = v15;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v16 = 4;
    v17 = v15 & 0xFFFFFFFB | v16;
    v18 = 0;
    *(_DWORD *)(v2 + 628) = v17;
    LODWORD(v10) = 8;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v18 = 8;
    LODWORD(v11) = v17 & 0xFFFFFFF7;
    *(_DWORD *)(v2 + 628) = (unsigned int)v11 | v18;
    result = *(unsigned int *)(v2 + 176);
    if ( (result & 0x200) == 0 )
    {
      result = *(unsigned int *)(v2 + 176);
      if ( (result & 8) == 0 )
      {
        result = *(unsigned int *)(v2 + 176);
        if ( (result & 4) == 0 )
        {
          result = *(unsigned int *)(v2 + 176);
          if ( (result & 0x10) == 0 )
          {
            result = *(unsigned int *)(v2 + 176);
            if ( (result & 0x40) == 0 )
            {
              result = *(unsigned int *)(v2 + 176);
              if ( (result & 0x80u) == 0LL )
              {
                result = *(unsigned int *)(v2 + 176);
                if ( (result & 0x100) == 0 )
                {
                  result = *(unsigned int *)(v2 + 176);
                  if ( (result & 0x20) == 0 )
                  {
                    if ( !*(_DWORD *)(v2 + 176)
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 428), 0, 0) >= 2 )
                    {
                      v20 = *(_QWORD *)(v2 + 96);
                      v21 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v20 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v20 + 24) + 32LL),
                        &v21);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 13907LL);
                    *v4 = result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( bTracingEnabled )
  {
    v19 = *(_QWORD *)(v2 + 56);
    if ( !v19 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v19) = v2;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      return McTemplateK0piixqq(
               v10,
               (_DWORD)v11,
               v9,
               v19,
               *(_QWORD *)(v2 + 440),
               *(_QWORD *)(v2 + 432),
               *(_QWORD *)(v5 + 1952),
               *(_DWORD *)(v2 + 428),
               3);
  }
  return result;
}
