/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C00BBF68
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00BC094 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0012370 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C002A904 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0055818 (VidSchiSubmitPreemptionCommand.c)
 */

char __fastcall VidSchiPreemptEngineNodes(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 v9; // r10
  __int64 v10; // rax
  unsigned int v12; // esi
  char v13; // bp
  __int64 v14; // rcx
  unsigned int i; // ebx
  unsigned int v16; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *a4 = 0LL;
  v9 = 352LL * a2;
  v10 = *(_QWORD *)(v4 + 2360);
  v12 = *(unsigned __int16 *)(v10 + v9);
  if ( *(_WORD *)(v10 + v9) )
  {
    v13 = 0;
    do
    {
      LOBYTE(v10) = v5;
      if ( _bittest64(&a3, v5) )
      {
        v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2) + 440);
        LODWORD(v10) = *(_DWORD *)(v14 + 12);
        if ( (v10 & 2) == 0 )
        {
          if ( *(_DWORD *)(v14 + 2828) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 972));
            LODWORD(v10) = _InterlockedIncrement((volatile signed __int32 *)(v14 + 2832));
            if ( (_DWORD)v10 == 1 )
            {
              *(_QWORD *)(v14 + 232) = 0LL;
              VidSchiSubmitPreemptionCommand(v14);
              v10 = *a4 | (1LL << v13);
              *a4 = v10;
            }
            else
            {
              _InterlockedDecrement((volatile signed __int32 *)(v14 + 2832));
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 972));
            }
          }
        }
      }
      ++v5;
      ++v13;
    }
    while ( v5 < v12 );
  }
  for ( i = 0; i < v12; ++i )
  {
    v10 = *a4;
    if ( _bittest64(&v10, i) )
    {
      v16 = VidSchiDriverNodeEngineToSchedulerNode(a1, i, a2);
      VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * v16 + 440));
      LOBYTE(v10) = VidSchIsTDRPending(a1);
      if ( (_BYTE)v10 )
        break;
    }
  }
  return v10;
}
