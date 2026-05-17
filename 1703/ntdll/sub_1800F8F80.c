/*
 * XREFs of sub_1800F8F80 @ 0x1800F8F80
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_1800F8CA0 @ 0x1800F8CA0 (sub_1800F8CA0.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

PSLIST_ENTRY __fastcall sub_1800F8F80(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // eax
  __int64 v6; // r8
  _DWORD *v7; // rdx
  _QWORD **v8; // rdi
  _QWORD **v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rax
  PSLIST_ENTRY result; // rax

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v6 = *(unsigned __int16 *)(a2 + 14);
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  v8 = (_QWORD **)(16LL * (v5 % *(_DWORD *)(a1 + 720)) + a1 + 728);
  v9 = v8 + 1;
  sub_1800F948C(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      if ( *v8 )
      {
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 == (_QWORD *)a2 )
            break;
          v8 = (_QWORD **)*v8;
          if ( !*v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD **)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v4 = 1;
    }
  }
  result = (PSLIST_ENTRY)sub_1800F94A8(v9);
  if ( v4 )
  {
    result = RtlInterlockedPushEntrySList_0(
               (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
