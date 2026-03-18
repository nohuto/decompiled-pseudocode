/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C0007F80
 * Callers:
 *     VidSchiUpdatePriorityTables @ 0x1C0007EE0 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
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
  __int64 v19; // rax
  __int64 v20; // r9
  char v21; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v4 = (_DWORD *)a2;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(volatile signed __int32 **)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 948));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2764));
  _InterlockedIncrement(v6 + 299);
  if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 4) > 1 )
    _InterlockedIncrement(v6 + 300);
  if ( !*(_DWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 72) & 4) != 0 )
  {
    a2 = *(unsigned int *)(a1 + 152);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 104LL) + 32LL) + 8 * a2 + 2992);
    _InterlockedExchangeAdd(v6 + 578, 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 792));
  ++*(_DWORD *)(v2 + 788);
  ++*(_DWORD *)(v5 + 2760);
  ++*(_DWORD *)(v7 + 944);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2);
  v8[3] = a1;
  v8[4] = *(_QWORD *)(a1 + 104);
  v8[5] = v2;
  v8[6] = *(_QWORD *)(v2 + 136);
  v8[7] = *(_QWORD *)(v2 + 152);
  WdLogEvent5_WdEvent(v8);
  v10 = v2 + 672;
  v11 = *(__int64 **)(v2 + 680);
  result = a1 + 32;
  if ( *v11 != v2 + 672 )
    __fastfail(3u);
  *(_QWORD *)result = v10;
  *(_QWORD *)(a1 + 40) = v11;
  *v11 = result;
  *(_QWORD *)(v2 + 680) = result;
  if ( *(_DWORD *)(v2 + 788) == 1 )
  {
    v9 = 0;
    *(_QWORD *)(v2 + 656) = a1;
    v13 = ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1) | *(_DWORD *)(v2 + 652) & 0xFFFFFFFE;
    v14 = 0;
    *(_DWORD *)(v2 + 652) = v13;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v14 = 2;
    v15 = v13 & 0xFFFFFFFD | v14;
    v16 = 0;
    *(_DWORD *)(v2 + 652) = v15;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v16 = 4;
    v17 = v15 & 0xFFFFFFFB | v16;
    v18 = 0;
    *(_DWORD *)(v2 + 652) = v17;
    LODWORD(v10) = 8;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v18 = 8;
    LODWORD(v11) = v17 & 0xFFFFFFF7;
    *(_DWORD *)(v2 + 652) = (unsigned int)v11 | v18;
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
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 0, 0) >= 2 )
                    {
                      v19 = *(_QWORD *)(v2 + 96);
                      v21 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v19 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v19 + 24) + 32LL),
                        &v21);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 13597LL);
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
    v20 = *(_QWORD *)(v2 + 56);
    if ( !v20 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v20) = v2;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      return Template_piixqq(
               v10,
               (_DWORD)v11,
               v9,
               v20,
               *(_QWORD *)(v2 + 464),
               *(_QWORD *)(v2 + 456),
               *(_QWORD *)(v5 + 1936),
               *(_DWORD *)(v2 + 448),
               3);
  }
  return result;
}
