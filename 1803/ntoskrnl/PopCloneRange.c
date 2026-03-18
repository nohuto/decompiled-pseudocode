/*
 * XREFs of PopCloneRange @ 0x1404772D0
 * Callers:
 *     PopSetRange @ 0x140156C6C (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v8; // rsi
  _QWORD *i; // rbx
  unsigned __int64 v10; // rdx
  _DWORD *result; // rax
  _QWORD *v12; // rcx

  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = a2 + a3;
  for ( i = *(_QWORD **)(a1 + 64); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 64) )
    {
LABEL_11:
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70616D48u);
      if ( result )
      {
        result[4] = a4;
        *((_QWORD *)result + 3) = a2;
        *((_QWORD *)result + 4) = v8;
        v12 = (_QWORD *)i[1];
        if ( (_QWORD *)*v12 != i )
          __fastfail(3u);
        *(_QWORD *)result = i;
        *((_QWORD *)result + 1) = v12;
        *v12 = result;
        i[1] = result;
        ++*(_DWORD *)(a1 + 80);
      }
      else if ( *(int *)(a1 + 188) >= 0 )
      {
        *(_DWORD *)(a1 + 188) = -1073741670;
      }
      return result;
    }
    v10 = i[3];
    if ( a2 >= v10 )
    {
      result = (_DWORD *)i[4];
      if ( a2 <= (unsigned __int64)result )
        break;
    }
    if ( v8 >= v10 )
    {
      result = (_DWORD *)i[4];
      if ( v8 <= (unsigned __int64)result )
        break;
    }
    if ( a2 <= v10 )
    {
      result = (_DWORD *)i[4];
      if ( v8 >= (unsigned __int64)result )
        break;
      if ( v10 >= a2 )
        goto LABEL_11;
    }
  }
  if ( a2 < v10 )
    i[3] = a2;
  if ( v8 > (unsigned __int64)result )
    i[4] = v8;
  return result;
}
