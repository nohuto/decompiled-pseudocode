/*
 * XREFs of sub_14053B960 @ 0x14053B960
 * Callers:
 *     sub_1404412D8 @ 0x1404412D8 (sub_1404412D8.c)
 *     WbFindHeapExecutedBlock @ 0x1404413EC (WbFindHeapExecutedBlock.c)
 *     WbFindWarbirdProcess @ 0x140498938 (WbFindWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 *     sub_140549218 @ 0x140549218 (sub_140549218.c)
 *     sub_140549C58 @ 0x140549C58 (sub_140549C58.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14053B960(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v11; // ebx
  int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_9;
    }
    v12 = 0;
  }
LABEL_9:
  if ( a5 )
    *a5 = v11;
  result = (unsigned int)v12;
  if ( a4 )
  {
    if ( v12 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
