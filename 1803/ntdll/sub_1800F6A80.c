/*
 * XREFs of sub_1800F6A80 @ 0x1800F6A80
 * Callers:
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_1800F67A0 @ 0x1800F67A0 (sub_1800F67A0.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     sub_1800F6F90 @ 0x1800F6F90 (sub_1800F6F90.c)
 *     sub_1800F6FAC @ 0x1800F6FAC (sub_1800F6FAC.c)
 */

PSLIST_ENTRY __fastcall sub_1800F6A80(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v7; // rdx
  __int64 v8; // r8
  _QWORD **v9; // rdi
  _QWORD **v10; // r14
  __int16 v11; // cx
  __int16 v12; // ax
  _QWORD *v13; // rcx
  PSLIST_ENTRY result; // rax

  v2 = 0;
  v4 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    v8 = v4;
    do
    {
      v5 += *v7;
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
  v9 = (_QWORD **)(16LL * (v5 % *(_DWORD *)(a1 + 720)) + a1 + 728);
  v10 = v9 + 1;
  sub_1800F6F90(v9 + 1);
  v11 = *(_WORD *)(a2 + 8);
  if ( (v11 & 0x7FF) != 0x7FF )
  {
    v12 = v11 ^ (v11 ^ (v11 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v12;
    if ( (v12 & 0x7FF) == 0 )
    {
      v13 = *v9;
      if ( *v9 )
      {
        while ( v13 != (_QWORD *)a2 )
        {
          v9 = (_QWORD **)v13;
          v13 = (_QWORD *)*v13;
          if ( !v13 )
            goto LABEL_9;
        }
        *v9 = *(_QWORD **)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v2 = 1;
    }
  }
  result = (PSLIST_ENTRY)sub_1800F6FAC(v10);
  if ( v2 )
  {
    result = RtlInterlockedPushEntrySList_0(
               (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
