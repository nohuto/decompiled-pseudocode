/*
 * XREFs of EtwpCCSwapTrace @ 0x140280B4C
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x14027BFB8 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpCCSwapFlush @ 0x140280A40 (EtwpCCSwapFlush.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, __int64 a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  unsigned int v5; // esi
  int v6; // r10d
  struct _KPRCB **v7; // rbx
  _QWORD *EtwSupport; // r13
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  struct _KPRCB *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // r9d
  _DWORD *v16; // rax
  unsigned int v17; // r14d
  struct _KPRCB *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // r10
  unsigned int v22; // r8d
  char v23; // al
  int v24; // eax
  int v25; // r10d
  char v26; // al
  unsigned int v27; // eax
  int Src; // [rsp+20h] [rbp-10h] BYREF
  int v29; // [rsp+24h] [rbp-Ch]
  __int64 v30; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+80h] [rbp+50h]

  v32 = a3;
  result = KeGetCurrentPrcb();
  v5 = 0;
  v6 = a3;
  v7 = a4;
  a3 = (unsigned int)a3;
  v30 = (unsigned int)a3;
  EtwSupport = result->EtwSupport;
  v10 = (unsigned int *)EtwSupport[(unsigned int)a3 + 37];
  if ( v10 )
  {
    if ( *v10 )
    {
      v11 = (__int64)*a4 - *((_QWORD *)v10 + 1);
    }
    else
    {
      v12 = *a4;
      v13 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v10 + 1) = *a4;
      *((_QWORD *)v10 + 2) = v12;
      v10[1] = v13;
      *v10 = 104;
      memset(v10 + 6, 0, 0x40uLL);
      a3 = v30;
      v11 = 0LL;
      v6 = v32;
    }
    v14 = *(_DWORD *)(a1 + 1600);
    v15 = 0;
    if ( v14 )
    {
      v16 = v10 + 6;
      while ( *v16 != v14 )
      {
        if ( !*v16 )
        {
          v10[v15 + 6] = v14;
          *((_BYTE *)v10 + v15 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v15;
        ++v16;
        if ( v15 >= 0x10 )
          break;
      }
    }
    v17 = 8;
    if ( MEMORY[0xFFFFF78000000320] - v10[1] > 0x1F4
      || v15 == 16
      || (unsigned __int64)*v10 + 8 > 0x400
      || v11 > 0x40000000
      || *((_BYTE *)EtwSupport + a3 + 288) )
    {
      EtwpCCSwapFlush(v10, v6);
      v18 = *v7;
      v19 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v10 + 1) = *v7;
      *((_QWORD *)v10 + 2) = v18;
      v10[1] = v19;
      *v10 = 104;
      memset(v10 + 6, 0, 0x40uLL);
      v11 = 0LL;
      v7 = a4;
      v15 = 0;
      *((_BYTE *)EtwSupport + v30 + 288) = 0;
      v10[6] = v14;
    }
    if ( v14 )
    {
      if ( *(_DWORD *)(a2 + 1600) )
        v5 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      v21 = *(_BYTE *)(a1 + 195);
      v22 = v21 - *((char *)v10 + v15 + 88);
      if ( v5 > 1 || v11 >= 0x20000 || v22 > 7 )
      {
        Src = (4 * v11) | 3;
        v24 = 0x1FFFF;
        if ( v5 < 0x1FFFF )
          v24 = v5;
        v25 = (32 * v24) | v21 & 0x1F;
        v26 = *(_BYTE *)(a1 + 388);
        v29 = (((unsigned __int8)v15 ^ (unsigned __int8)v29) & 0xF ^ (unsigned __int16)v29) & 0x3FF | (v25 << 10);
        if ( v26 == 5 )
          v27 = ((unsigned __int16)v29 ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0 ^ v29;
        else
          v27 = (16 * *(unsigned __int8 *)(a1 + 388) - 369) & 0x3F0 | v29 & 0xFFFFFC0F;
        v29 = v27;
        goto LABEL_37;
      }
      v23 = *(_BYTE *)(a1 + 388);
      Src = Src & 0x7E00 | (4 * (v15 & 0xF | (16 * (((_DWORD)v11 << 9) | v22 & 7)))) | 2;
      if ( v23 == 5 )
        v20 = (Src ^ (*(unsigned __int8 *)(a1 + 643) << 9)) & 0x7E00 ^ Src;
      else
        v20 = ((*(unsigned __int8 *)(a1 + 388) << 9) - 11777) & 0x7E00 | Src & 0xFFFF81FF;
    }
    else
    {
      if ( v11 < 0x4000 )
      {
        v17 = 2;
        LOWORD(Src) = 4 * v11;
LABEL_37:
        memmove((char *)v10 + *v10, &Src, v17);
        *v10 += v17;
        result = *v7;
        *((_QWORD *)v10 + 1) = *v7;
        return result;
      }
      v20 = (4 * v11) | 1;
    }
    Src = v20;
    v17 = 4;
    goto LABEL_37;
  }
  return result;
}
