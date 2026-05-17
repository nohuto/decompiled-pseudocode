/*
 * XREFs of RtlAddAtomToAtomTable_0 @ 0x18004D0E8
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x18004D0E0 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_18004D42C @ 0x18004D42C (sub_18004D42C.c)
 *     RtlGetIntegerAtom @ 0x18004D560 (RtlGetIntegerAtom.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     sub_18004D658 @ 0x18004D658 (sub_18004D658.c)
 *     sub_18004D8A0 @ 0x18004D8A0 (sub_18004D8A0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTable_0(__int64 a1, _WORD *a2, _WORD *a3, int a4)
{
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  __int16 v15; // ax
  _DWORD Size[3]; // [rsp+44h] [rbp-44h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-30h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a4;
  if ( (unsigned __int8)sub_18004D594() )
  {
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &v20) )
    {
      v15 = v20;
      if ( (unsigned __int16)v20 < 0xC000u )
      {
        v8 = 0;
      }
      else
      {
        v15 = 0;
        LOWORD(v20) = 0;
        v8 = -1073741811;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_26;
    }
    if ( !*a2 )
    {
      v8 = -1073741773;
      goto LABEL_26;
    }
    v8 = sub_18004D42C(a1, a2, v7, &v19, Size, &v18, &Size[1]);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)&Size[1];
      if ( *(_QWORD *)&Size[1] )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v9 + 10);
LABEL_11:
        *a3 = v14;
LABEL_12:
        v8 = 0;
        goto LABEL_26;
      }
      v10 = v19;
      if ( !v19 )
      {
        v8 = -1073741811;
        goto LABEL_26;
      }
      v8 = -1073741801;
      v11 = sub_18004D8A0(Size[0], &v18);
      v12 = v11;
      *(_QWORD *)&Size[1] = v11;
      if ( v11 )
      {
        v13 = Size[0];
        memmove((void *)(v11 + 18), a2, Size[0]);
        v13 >>= 1;
        *(_BYTE *)(v12 + 16) = v13;
        *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 18) = 0;
        if ( !(unsigned __int8)sub_18004D658(a1, v12) )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&Size[1]);
          v8 = -1073741801;
          goto LABEL_26;
        }
        *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
        *v10 = v12;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v12 + 10);
        goto LABEL_11;
      }
    }
LABEL_26:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
