/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x14003F560
 * Callers:
 *     NtAddAtomEx @ 0x14056890C (NtAddAtomEx.c)
 *     RtlAddAtomToAtomTable @ 0x14057FC80 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpReferenceAtom @ 0x14003FA68 (RtlpReferenceAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14006A0A8 (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlGetIntegerAtom @ 0x1404B61A0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1404B6290 (RtlpHashStringToAtom.c)
 *     RtlpUnlockAtomTable @ 0x1404B7B6C (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x1404EAF6C (RtlpFreeAtom.c)
 *     RtlpInsertStringAtom @ 0x140571CA4 (RtlpInsertStringAtom.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, WCHAR *a2, USHORT *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  USHORT v15; // ax
  USHORT IntegerAtom[2]; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+44h] [rbp-44h]
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-30h] BYREF

  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(a2, IntegerAtom) )
    {
      v15 = IntegerAtom[0];
      if ( IntegerAtom[0] >= 0xC000u )
      {
        v15 = 0;
        IntegerAtom[0] = 0;
        v8 = -1073741811;
        v18 = -1073741811;
      }
      else
      {
        v8 = 0;
        v18 = 0;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_27;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(a1, a2, 0LL, &v21, IntegerAtom, &v19, &v20);
      v18 = v8;
      if ( v8 < 0 )
      {
LABEL_27:
        RtlpUnlockAtomTable(a1);
        return (unsigned int)v8;
      }
      if ( v20 )
      {
        RtlpReferenceAtom(v20, v19);
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 10);
        v8 = 0;
        v18 = 0;
        goto LABEL_27;
      }
      v10 = v21;
      if ( v21 )
      {
        v8 = -1073741801;
        v18 = -1073741801;
        v11 = RtlpAllocateAtomTableEntry(*(unsigned int *)IntegerAtom, &v19, a4);
        v12 = v11;
        v20 = v11;
        if ( v11 )
        {
          v13 = *(unsigned int *)IntegerAtom;
          memmove((void *)(v11 + 42), a2, *(unsigned int *)IntegerAtom);
          v14 = (unsigned __int8)(v13 >> 1);
          *(_BYTE *)(v12 + 40) = v14;
          *(_WORD *)(v12 + 2 * v14 + 42) = 0;
          if ( (unsigned __int8)RtlpInsertStringAtom(a1, v12) )
          {
            *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
            *v10 = v12;
            if ( a3 )
              *a3 = *(_WORD *)(v12 + 10);
            v8 = 0;
            v18 = 0;
          }
          else
          {
            if ( v19 && v19 != v12 + 16 )
              ((void (*)(void))RtlpFreeAtom)();
            RtlpFreeAtom(v12);
          }
        }
        goto LABEL_27;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741773;
    }
    v18 = v8;
    goto LABEL_27;
  }
  return 3221225485LL;
}
