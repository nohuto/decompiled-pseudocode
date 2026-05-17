/*
 * XREFs of sub_180109250 @ 0x180109250
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180108B30 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     RtlSplay @ 0x180066960 (RtlSplay.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 */

__int64 __fastcall sub_180109250(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  unsigned __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180160910, a2, a3, a4);
  v8 = qword_180160928;
  if ( qword_180160928 )
  {
    while ( 1 )
    {
      v10 = v8 - 96;
      v15 = v8 - 96;
      v11 = *(_QWORD *)(v8 - 96);
      if ( a2 == v11 )
        break;
      if ( a2 >= v11 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        if ( !v12 )
        {
          v9 = sub_180108CB4(&v15, a2, (__int64)a3);
          v10 = v15;
          if ( !v15 )
            goto LABEL_14;
          v13 = (__int64 *)(v15 + 96);
          *(_QWORD *)(v8 + 16) = v15 + 96;
          goto LABEL_13;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
        {
          v9 = sub_180108CB4(&v15, a2, (__int64)a3);
          v10 = v15;
          if ( !v15 )
            goto LABEL_14;
          v13 = (__int64 *)(v15 + 96);
          *(_QWORD *)(v8 + 8) = v15 + 96;
LABEL_13:
          *v13 = v8;
          goto LABEL_14;
        }
      }
      v8 = v12;
    }
    v9 = sub_18005756C((__int64)a3, v10 + 8, *(struct _PEB_LDR_DATA **)(v10 + 80), v7);
    if ( v9 >= 0 )
      ++*(_DWORD *)(v10 + 88);
  }
  else
  {
    v9 = sub_180108CB4(&v15, a2, (__int64)a3);
    v10 = v15;
  }
LABEL_14:
  if ( v10 && qword_180160928 != v10 + 96 )
    qword_180160928 = (__int64)RtlSplay((_QWORD *)(v10 + 96));
  RtlReleaseSRWLockExclusive(&qword_180160910);
  *a1 = v10;
  return (unsigned int)v9;
}
