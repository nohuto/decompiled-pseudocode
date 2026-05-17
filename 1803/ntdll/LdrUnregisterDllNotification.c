/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800CAE90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v7; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&off_1801564C0);
  v4 = off_180156618;
  if ( off_180156618 != (_UNKNOWN *)&off_180156618 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      v2 = (unsigned __int64)v4;
      if ( v4 == a1 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == &off_180156618 )
        goto LABEL_4;
    }
    if ( (_QWORD *)v5[1] != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v5;
    v3 = 0;
    v5[1] = v7;
  }
LABEL_4:
  RtlLeaveCriticalSection((__int64)&off_1801564C0);
  if ( v3 >= 0 )
    RtlFreeHeap(qword_18015C288, 0, v2);
  return (unsigned int)v3;
}
