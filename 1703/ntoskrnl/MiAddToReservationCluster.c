/*
 * XREFs of MiAddToReservationCluster @ 0x14013A21C
 * Callers:
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 * Callees:
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
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
  unsigned int PteTimeStamp; // eax
  _WORD *v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // r9d
  const signed __int64 *v21; // rcx
  unsigned int v22; // r9d
  _DWORD *v23; // r8
  _DWORD *v24; // r10
  unsigned int v25; // edx
  int v26; // eax
  bool i; // zf
  int v28; // ecx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 256);
  v31 = v7;
  v8 = 0;
  v10 = 5 * ((*(_WORD *)(a1 + 204) & 0xF) + 64LL);
  v30 = v10;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v7 + 8 * v10 + 16);
      if ( v12 == 0xFFFFFFFFFLL )
        break;
      v13 = 48 * v12 - 0x58000000000LL;
      v14 = 0;
      v15 = MiLockPageInline(v13);
      v7 = v31;
      v16 = v15;
      if ( v12 == *(_QWORD *)(v31 + 8 * v30 + 16) )
      {
        PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v13 + 16));
        v20 = PteTimeStamp;
        if ( PteTimeStamp != a4 )
        {
          v14 = PteTimeStamp - a4;
          if ( !MI_IS_PTE_IN_WS_SWAP_SET(v19, v18) || v20 < a4 || v14 > 0x1F || v14 + v8 >= a3 )
            goto LABEL_33;
        }
        v21 = *(const signed __int64 **)(a2 + 8);
        if ( _bittest64(v21, v20) )
          goto LABEL_33;
        if ( v14 )
        {
          v22 = v14 + a4 - 1;
          if ( v22 >= *(_DWORD *)a2 )
            goto LABEL_33;
          if ( v14 > 1 )
          {
            v23 = (_DWORD *)v21 + ((unsigned __int64)a4 >> 5);
            v24 = (_DWORD *)v21 + ((unsigned __int64)v22 >> 5);
            if ( v23 != v24 )
            {
              v26 = 0;
              for ( i = ((-1 << a4) & *v23) == 0; ; i = *v23 == 0 )
              {
                LOBYTE(v26) = i;
                if ( !v26 )
                  break;
                if ( ++v23 == v24 )
                {
                  v25 = 0xFFFFFFFF >> ~(_BYTE)v22;
                  goto LABEL_23;
                }
                v26 = 0;
              }
LABEL_33:
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v16);
              return v8;
            }
            v25 = 0xFFFFFFFF >> (32 - v14) << a4;
LABEL_23:
            if ( (*v23 & v25) != 0 )
              goto LABEL_33;
          }
          else if ( _bittest((const signed __int32 *)v21, a4) )
          {
            goto LABEL_33;
          }
        }
        v28 = MiReferencePageForModifiedWrite(48 * v12 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
        if ( !v28 )
          return v8;
        if ( v14 )
        {
          v8 += v14;
          a4 += v14;
          *a6 += v14;
          do
          {
            *a5++ = qword_14036CEC8;
            --v14;
          }
          while ( v14 );
        }
        *a5 = v12;
        ++v8;
        ++a5;
        ++a4;
        if ( v28 == 3 && v8 >= 0x10 )
          return v8;
        v7 = v31;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
      }
      if ( v8 == a3 )
        return v8;
      v10 = v30;
    }
  }
  return v8;
}
