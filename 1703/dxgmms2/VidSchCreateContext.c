/*
 * XREFs of VidSchCreateContext @ 0x1C006BDA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00100E0 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, int *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int *v9; // r10
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v13; // rax

  if ( a1 && a2 )
  {
    v3 = a2[2];
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
    v5 = (*a2 & 0xFFFFFFF6 | 8) ^ ((*(_BYTE *)a2 & 0xF6 | 8) ^ (unsigned __int8)~(unsigned __int8)((*a2 & 0xFFFFFFF6 | 8) >> 2)) & 0x10;
    v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 4)) & 4;
    v7 = a2[1];
    *a2 = v6;
    v8 = VidSchiDriverNodeEngineToSchedulerNode(*(_QWORD *)(v4 + 32), v7, v3);
    v9[1] = v8;
    return VidSchiCreateContextInternal(v10, v9, v11);
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
    return 0LL;
  }
}
