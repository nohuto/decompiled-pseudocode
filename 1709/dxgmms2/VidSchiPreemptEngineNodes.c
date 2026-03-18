/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C00B3568
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00B368C (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00110F0 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0027C08 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0071AE8 (VidSchiSubmitPreemptionCommand.c)
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
  v10 = *(_QWORD *)(v4 + 2216);
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
        v13 = *(_QWORD *)(a1 + 8LL * (unsigned int)v10 + 424);
        if ( *(_DWORD *)(v13 + 2796) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 956));
          LODWORD(v10) = _InterlockedIncrement((volatile signed __int32 *)(v13 + 2800));
          if ( (_DWORD)v10 == 1 )
          {
            *(_QWORD *)(v13 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v13);
            v10 = *a4 | (1LL << v12);
            *a4 = v10;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v13 + 2800));
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
      VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * v15 + 424));
      LOBYTE(v10) = VidSchIsTDRPending(a1);
      if ( (_BYTE)v10 )
        break;
    }
  }
  return v10;
}
