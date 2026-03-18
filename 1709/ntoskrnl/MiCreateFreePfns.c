/*
 * XREFs of MiCreateFreePfns @ 0x14082A878
 * Callers:
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     MxReleaseFreeDescriptor @ 0x14082A224 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 */

void __fastcall MiCreateFreePfns(__int128 *a1)
{
  int v1; // eax
  __int64 v2; // rsi
  unsigned __int64 v3; // r9
  __int128 *v4; // rbx
  __int64 v5; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r8
  unsigned int v8; // r13d
  __int128 v9; // xmm3
  __int128 v10; // xmm2
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 **v13; // r12
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  __int128 v18; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v21; // [rsp+50h] [rbp-B8h]
  _OWORD v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-90h]
  _QWORD Base[64]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 3);
  v4 = a1;
  v5 = *((_QWORD *)a1 + 4);
  if ( (v1 & 0x40000000) != 0 )
  {
    v6 = qword_14087F570;
    *((_DWORD *)a1 + 4) = v1 & 0xBFFFFFFF;
  }
  else
  {
    v6 = MxBootFreeDescriptor;
  }
  v7 = &v6[5 * (unsigned __int16)KeNumberNodes];
  if ( v6 >= v7 )
    goto LABEL_10;
  do
  {
    if ( v6[1] && *v6 >= v3 && *v6 < v5 + v3 )
    {
      Base[v2] = v6;
      v2 = (unsigned int)(v2 + 1);
    }
    v6 += 5;
  }
  while ( v6 < v7 );
  if ( (_DWORD)v2 )
  {
    qsort(Base, (unsigned int)v2, 8uLL, MxDescriptorSort);
    v8 = 0;
    v9 = *v4;
    v10 = v4[1];
    v18 = *v4;
    v20 = *((_QWORD *)v4 + 4);
    v11 = v20;
    v19 = v10;
    v12 = *((_QWORD *)&v10 + 1);
    v13 = (unsigned __int64 **)Base;
    while ( 1 )
    {
      v14 = *v13;
      v15 = **v13;
      if ( v15 > v12 )
      {
        v21 = v15 - v12;
        v23 = v15 - v12;
        v22[0] = v9;
        v22[1] = v10;
        MxCreateFreePfns(v22);
        v11 -= v21;
        v12 = *v14;
      }
      v16 = v14[1];
      v17 = *((_DWORD *)v4 + 4);
      v11 -= v16;
      v12 += v16;
      v20 = v11;
      *((_QWORD *)&v19 + 1) = v12;
      MxReleaseFreeDescriptor(v14, v17);
      if ( !v11 )
        break;
      ++v8;
      ++v13;
      if ( v8 >= (unsigned int)v2 )
      {
        a1 = &v18;
        goto LABEL_10;
      }
      v10 = v19;
      v9 = v18;
    }
  }
  else
  {
LABEL_10:
    MxCreateFreePfns(a1);
  }
}
