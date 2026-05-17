/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1800721A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800729B0 @ 0x1800729B0 (sub_1800729B0.c)
 *     sub_1800729D8 @ 0x1800729D8 (sub_1800729D8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _snwprintf_s @ 0x1800A0600 (_snwprintf_s.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  if ( (unsigned __int8)sub_1800729B0() )
  {
    if ( a2 < 0xC000u )
    {
      if ( !a2 )
      {
        v10 = -1073741811;
        goto LABEL_31;
      }
      v10 = 0;
      if ( a3 )
        *a3 = 1;
      if ( a4 )
        *a4 = 1;
      if ( !a5 )
        goto LABEL_31;
      v14 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", a2);
      v17 = *a6;
      if ( v14 >= *a6 )
      {
        v14 = v17 - 2;
        if ( v17 < 2 )
          v14 = 0;
      }
      if ( v14 )
      {
        memmove(a5, Buffer, v14);
        v16 = (unsigned __int64)v14 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = -1073741816;
      v11 = sub_1800729D8(a1, a2 & 0x3FFF);
      v12 = v11;
      if ( !v11 )
        goto LABEL_31;
      if ( *(_WORD *)(v11 + 10) != a2 )
        goto LABEL_31;
      v13 = (unsigned __int16 *)(v11 + 12);
      if ( !v13 )
        goto LABEL_31;
      v10 = 0;
      if ( a3 )
        *a3 = *v13;
      if ( a4 )
        *a4 = *(unsigned __int16 *)(v12 + 14);
      if ( !a5 )
        goto LABEL_31;
      v14 = 2 * *(unsigned __int8 *)(v12 + 16);
      v15 = *a6;
      if ( v14 >= *a6 )
      {
        if ( v15 < 2 )
        {
          *a6 = v14;
          v14 = 0;
        }
        else
        {
          v14 = v15 - 2;
        }
      }
      if ( v14 )
      {
        memmove(a5, (const void *)(v12 + 18), v14);
        v16 = (unsigned __int64)v14 >> 1;
LABEL_14:
        *((_WORD *)a5 + v16) = 0;
        *a6 = v14;
LABEL_31:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
        return v10;
      }
    }
    v10 = -1073741789;
    goto LABEL_31;
  }
  return 3221225485LL;
}
