/*
 * XREFs of MiAddToReservationCluster @ 0x1401509A0
 * Callers:
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 * Callees:
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v10; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  unsigned int v14; // edi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r14
  __int64 PteTimeStamp; // rax
  _WORD *v18; // rdx
  int *v19; // r8
  __int64 v20; // r9
  const signed __int64 *v21; // rcx
  int v22; // r10d
  int *v23; // rdx
  bool v24; // zf
  bool i; // zf
  int v26; // ecx
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 256);
  v8 = 0;
  v29 = v7;
  v10 = 5LL * (*(_WORD *)(a1 + 204) & 0xF);
  v28 = v10;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v7 + 8 * v10 + 2768);
      if ( v12 == 0xFFFFFFFFFLL )
        break;
      v13 = 48 * v12 - 0x58000000000LL;
      v14 = 0;
      v15 = MiLockPageInline(v13);
      v7 = v29;
      v16 = v15;
      if ( v12 == *(_QWORD *)(v29 + 8 * v28 + 2768) )
      {
        PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v13 + 16));
        v20 = PteTimeStamp;
        if ( (_DWORD)PteTimeStamp != a4 )
        {
          v14 = PteTimeStamp - a4;
          if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET((__int64)v19, v18)
            || (unsigned int)v20 < a4
            || v14 > 0x1F
            || v14 + v8 >= a3 )
          {
            goto LABEL_33;
          }
        }
        v21 = *(const signed __int64 **)(a2 + 8);
        if ( _bittest64(v21, (unsigned int)v20) )
          goto LABEL_33;
        if ( v14 )
        {
          v20 = v14 + a4 - 1;
          if ( (unsigned int)v20 >= *(_DWORD *)a2 )
            goto LABEL_33;
          if ( v14 > 1 )
          {
            v19 = (int *)v21 + ((unsigned __int64)a4 >> 5);
            v22 = *v19;
            v23 = (int *)v21 + ((unsigned __int64)(unsigned int)v20 >> 5);
            if ( v19 != v23 )
            {
              for ( i = (v22 & (-1 << a4)) == 0; i; i = *v19 == 0 )
              {
                if ( ++v19 == v23 )
                {
                  v20 = (unsigned int)~(_DWORD)v20;
                  v24 = (*v19 & (0xFFFFFFFF >> v20)) == 0;
                  goto LABEL_23;
                }
              }
LABEL_33:
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v16);
              return v8;
            }
            v24 = (v22 & (0xFFFFFFFF >> (32 - v14) << a4)) == 0;
LABEL_23:
            if ( !v24 )
              goto LABEL_33;
          }
          else if ( _bittest((const signed __int32 *)v21, a4) )
          {
            goto LABEL_33;
          }
        }
        v26 = MiReferencePageForModifiedWrite(48 * v12 - 0x58000000000LL, 0, (__int64)v19, v20);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
        if ( !v26 )
          return v8;
        if ( v14 )
        {
          v8 += v14;
          a4 += v14;
          *a6 += v14;
          do
          {
            *a5++ = qword_1403CC408;
            --v14;
          }
          while ( v14 );
        }
        *a5 = v12;
        ++v8;
        ++a5;
        ++a4;
        if ( v26 == 3 && v8 >= 0x10 )
          return v8;
        v7 = v29;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
      }
      if ( v8 == a3 )
        return v8;
      v10 = v28;
    }
  }
  return v8;
}
