/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C00AAC54
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00AAD78 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00100E0 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0025B64 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C006CE6C (VidSchiSubmitPreemptionCommand.c)
 */

char __fastcall VidSchiPreemptEngineNodes(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  char v12; // bp
  __int64 v13; // rcx
  unsigned int i; // ebx
  unsigned int v15; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *a4 = 0LL;
  v10 = *(_QWORD *)(v4 + 2192);
  v11 = *(unsigned __int16 *)(v10 + 48LL * a2);
  if ( *(_WORD *)(v10 + 48LL * a2) )
  {
    v12 = 0;
    do
    {
      LOBYTE(v10) = v5;
      if ( _bittest64(&a3, v5) )
      {
        LODWORD(v10) = VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2);
        v13 = *(_QWORD *)(a1 + 8LL * (unsigned int)v10 + 416);
        if ( *(_DWORD *)(v13 + 2772) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 956));
          LODWORD(v10) = _InterlockedIncrement((volatile signed __int32 *)(v13 + 2776));
          if ( (_DWORD)v10 == 1 )
          {
            *(_QWORD *)(v13 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v13);
            v10 = *a4 | (1LL << v12);
            *a4 = v10;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v13 + 2776));
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 956));
          }
        }
      }
      ++v5;
      ++v12;
    }
    while ( v5 < v11 );
  }
  for ( i = 0; i < v11; ++i )
  {
    v10 = *a4;
    if ( _bittest64(&v10, i) )
    {
      v15 = VidSchiDriverNodeEngineToSchedulerNode(a1, i, a2);
      VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * v15 + 416));
      LOBYTE(v10) = VidSchIsTDRPending(a1);
      if ( (_BYTE)v10 )
        break;
    }
  }
  return v10;
}
