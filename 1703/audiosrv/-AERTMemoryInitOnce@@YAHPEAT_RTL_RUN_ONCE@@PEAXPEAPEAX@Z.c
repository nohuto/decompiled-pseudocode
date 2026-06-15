/*
 * XREFs of ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180038520
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x18003857C (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800D90A4 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

__int64 __fastcall AERTMemoryInitOnce(unsigned __int64 InitOnce, unsigned __int64 Parameter, PVOID *Context)
{
  void *v4; // rax
  unsigned int v5; // ebx
  void *v6; // rdi
  void *v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v4 = AERTCreateHeap(InitOnce, Parameter, (unsigned __int64)Context);
  *Context = v4;
  v5 = 0;
  v6 = v4;
  AEWMILOG_MEMORY(v8, v7, 4u, 1u, 0LL, 0LL, 0LL, 0LL, v10, v11, 0LL);
  if ( v6 )
    return 1;
  else
    SetLastError(0xEu);
  return v5;
}
