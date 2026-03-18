/*
 * XREFs of bConstructGET @ 0x1C009F900
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C009F9FC (-AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bConstructGET(__int64 a1, __int64 a2, struct EDGE *a3, struct _RECTL *a4)
{
  struct _POINTFIX *v5; // r12
  struct _KTHREAD *CurrentThread; // rdx
  struct _POINTFIX *v9; // rbp
  struct _POINTFIX *v10; // rbx
  struct EDGE *v11; // rax
  struct _POINTFIX *v12; // rdi
  unsigned __int64 v13; // r14
  struct _KTHREAD *v15; // [rsp+60h] [rbp+8h]

  *(_QWORD *)a2 = a2;
  *(_DWORD *)(a2 + 16) = 0x7FFFFFFF;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v15 = CurrentThread;
  v10 = *(struct _POINTFIX **)(*(_QWORD *)(a1 + 8) + 32LL);
  while ( 1 )
  {
    if ( !v10 )
      return 1LL;
    if ( PsIsThreadTerminating(CurrentThread) )
      break;
    v12 = v10 + 3;
    if ( (v10[2].x & 1) != 0 )
    {
      v5 = v10 + 3;
      v9 = v10 + 3;
      v12 = v10 + 4;
    }
    v13 = (unsigned __int64)&v10[(unsigned int)v10[2].y + 3];
    while ( (unsigned __int64)v12 < v13 )
    {
      v11 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v12, a4);
      v9 = v12;
      a3 = v11;
      ++v12;
    }
    if ( (v10[2].x & 2) != 0 )
    {
      a3 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v5, a4);
      v9 = 0LL;
    }
    v10 = (struct _POINTFIX *)*v10;
    CurrentThread = v15;
  }
  return 0LL;
}
