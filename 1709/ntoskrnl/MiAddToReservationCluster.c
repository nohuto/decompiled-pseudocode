/*
 * XREFs of MiAddToReservationCluster @ 0x140223F60
 * Callers:
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
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
  bool i; // zf
  int v27; // ecx
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 256);
  v8 = 0;
  v30 = v7;
  v10 = 5LL * (*(_WORD *)(a1 + 204) & 0xF);
  v29 = v10;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v7 + 8 * v10 + 2704);
      if ( v12 == 0xFFFFFFFFFLL )
        break;
      v13 = 48 * v12 - 0x58000000000LL;
      v14 = 0;
      v15 = MiLockPageInline(v13);
      v7 = v30;
      v16 = v15;
      if ( v12 == *(_QWORD *)(v30 + 8 * v29 + 2704) )
      {
        PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v13 + 16), v13 + 16, v30);
        v20 = PteTimeStamp;
        if ( PteTimeStamp != a4 )
        {
          v14 = PteTimeStamp - a4;
          if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v19, v18) || v20 < a4 || v14 > 0x1F || v14 + v8 >= a3 )
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
              for ( i = ((-1 << a4) & *v23) == 0; i; i = *v23 == 0 )
              {
                if ( ++v23 == v24 )
                {
                  v25 = 0xFFFFFFFF >> ~(_BYTE)v22;
                  goto LABEL_23;
                }
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
        v27 = MiReferencePageForModifiedWrite(48 * v12 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
        if ( !v27 )
          return v8;
        if ( v14 )
        {
          v8 += v14;
          a4 += v14;
          *a6 += v14;
          do
          {
            *a5++ = qword_140389188;
            --v14;
          }
          while ( v14 );
        }
        *a5 = v12;
        ++v8;
        ++a5;
        ++a4;
        if ( v27 == 3 && v8 >= 0x10 )
          return v8;
        v7 = v30;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
      }
      if ( v8 == a3 )
        return v8;
      v10 = v29;
    }
  }
  return v8;
}
