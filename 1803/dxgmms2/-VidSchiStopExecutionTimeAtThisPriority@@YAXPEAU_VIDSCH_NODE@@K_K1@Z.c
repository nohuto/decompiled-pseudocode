/*
 * XREFs of ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000E0B4
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EA40 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EE80 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetPriorityContext @ 0x1C0012174 (VidSchiSetPriorityContext.c)
 * Callees:
 *     McTemplateK0pqxq @ 0x1C0029D5C (McTemplateK0pqxq.c)
 */

void __fastcall VidSchiStopExecutionTimeAtThisPriority(
        struct _VIDSCH_NODE *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8

  v7 = gulPriorityToYieldPriorityBand[a2];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned __int64 *)((char *)a1 + 8 * v7 + 1936);
    do
    {
      if ( *(v8 - 8) )
      {
        v9 = *v8 - *(v8 - 4);
        *(v8 - 4) = 0LL;
        v10 = a3 + v9;
        *v8 = v10;
        LODWORD(v11) = (_DWORD)Microsoft_Windows_DxgKrnlEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          if ( is_mul_ok(v10, 0x989680uLL) )
          {
            v12 = v10 * (unsigned __int128)0x989680uLL % a4;
            v13 = v10 * (unsigned __int128)0x989680uLL / a4;
          }
          else
          {
            v11 = v10 / a4;
            v12 = 10000000 * (v10 % a4) % a4;
            v13 = 10000000 * (v10 % a4) / a4 + 10000000 * (v10 / a4);
          }
          McTemplateK0pqxq(v11, v12, v13, *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL), v7, v13, *((_WORD *)a1 + 2));
        }
      }
      --v8;
      LODWORD(v7) = v7 - 1;
    }
    while ( (_DWORD)v7 );
  }
}
