/*
 * XREFs of ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000B2C0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C0029BF0 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiIsQuantumLeft @ 0x1C000CDC4 (VidSchiIsQuantumLeft.c)
 *     McTemplateK0qpiixi @ 0x1C00275D4 (McTemplateK0qpiixi.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  char v4; // r12
  int v6; // eax
  bool v7; // di
  __int64 v8; // r15
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  struct _VIDSCH_CONTEXT *result; // rax
  _QWORD *v13; // rbx
  int v14; // edx
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // [rsp+80h] [rbp+8h] BYREF
  char v21; // [rsp+88h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v20 = 0LL;
  v6 = (*(_DWORD *)(v3 + 2168) >> 2) & 1;
  v7 = v6 && a3;
  v8 = 2LL * a2;
  v9 = (_QWORD *)*((_QWORD *)a1 + 2 * a2 + 247);
  v10 = v9 - 1;
  v11 = *((_QWORD *)a1 + 2 * a2 + 248) - 8LL;
  if ( v9 - 1 == (_QWORD *)v11 )
  {
    if ( !v7 )
    {
      if ( !v6 || gulPriorityToYieldPriorityBand[*((unsigned int *)v10 + 99)] )
      {
        *((_BYTE *)v10 + 624) = 1;
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
      else
      {
        v18 = v10[12];
        v21 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v18 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          v9 - 1,
          *(unsigned int *)(*(_QWORD *)(v18 + 24) + 32LL),
          &v21);
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
    }
    if ( !(unsigned int)VidSchiIsQuantumLeft(v9 - 1, &v20) )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v17 = v10[7];
        if ( !v17 || (v10[14] & 0x40) != 0 )
          LODWORD(v17) = (_DWORD)v9 - 8;
        McTemplateK0qpiixi(v10[57], v17, v16, *((unsigned __int16 *)a1 + 2), v17, v10[57], v10[54], v10[56], v10[55]);
      }
      return 0LL;
    }
    return v20;
  }
  do
  {
    v13 = v9 - 1;
    v9 = (_QWORD *)*v9;
    if ( (unsigned int)VidSchiIsQuantumLeft(v13, &v20) )
      break;
    if ( v7 )
    {
      v4 = 0;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v19 = v13[7];
        if ( !v19 || (v13[14] & 0x40) != 0 )
          LODWORD(v19) = (_DWORD)v13;
        McTemplateK0qpiixi(v19, v14, v15, *((unsigned __int16 *)a1 + 2), v19, v13[57], v13[54], v13[56], v13[55]);
      }
    }
    else
    {
      v4 = 1;
    }
  }
  while ( v13 != (_QWORD *)v11 );
  if ( !v4 )
    return v20;
  result = v20;
  if ( !v20 )
    return (struct _VIDSCH_CONTEXT *)(*((_QWORD *)a1 + v8 + 247) - 8LL);
  return result;
}
