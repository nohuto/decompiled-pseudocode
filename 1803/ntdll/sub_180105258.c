/*
 * XREFs of sub_180105258 @ 0x180105258
 * Callers:
 *     sub_1801050FC @ 0x1801050FC (sub_1801050FC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180105258(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5, __int64 a6, _BYTE *a7)
{
  char v8; // cl
  int v9; // ebp
  __int64 v10; // r11
  __int64 v11; // r14
  signed __int16 *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rbx
  int v15; // r15d
  signed __int16 *v16; // r12
  signed __int16 v17; // dx
  bool v18; // zf
  signed __int16 v19; // ax
  unsigned int v20; // eax
  _DWORD *v22; // [rsp+68h] [rbp+20h]

  v22 = a4;
  v8 = *(_BYTE *)(a1 + 44);
  v9 = 0;
  v10 = a2 >> v8;
  v11 = 2 * v10;
  v12 = (signed __int16 *)(2 * v10 + a1 + *(unsigned __int16 *)(a1 + 46));
  _m_prefetchw(v12);
  v13 = -1;
  LODWORD(v14) = 0;
  v15 = 0;
  v16 = &v12[((a2 + a3 - 1) >> v8) - (unsigned int)v10 + 1];
  if ( v12 < v16 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *v12;
        while ( v17 > 0 )
        {
          v19 = _InterlockedCompareExchange16(v12, v17 + 1, v17);
          v18 = v17 == v19;
          v17 = v19;
          if ( v18 )
            goto LABEL_14;
        }
        if ( v9 )
          break;
        v9 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
      }
      if ( v17 == -1 )
      {
        v14 = v11 >> 1;
        v20 = v11 >> 1;
        if ( v13 != -1 )
          v20 = v13;
        v13 = v20;
      }
      else
      {
        ++v15;
      }
      *v12 = v17 + 1;
LABEL_14:
      ++v12;
      v11 += 2LL;
    }
    while ( v12 < v16 );
    a4 = v22;
  }
  if ( a5 )
    *a5 = v15;
  if ( v13 != -1 )
  {
    v9 = 0;
    *a4 = v14 - v13 + 1;
    *a7 = -1;
  }
  if ( v9 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  return v13;
}
