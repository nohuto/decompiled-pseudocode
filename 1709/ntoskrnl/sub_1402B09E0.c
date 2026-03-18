/*
 * XREFs of sub_1402B09E0 @ 0x1402B09E0
 * Callers:
 *     <none>
 * Callees:
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     RtlMinimalBarrier @ 0x1402B1608 (RtlMinimalBarrier.c)
 */

__int64 __fastcall sub_1402B09E0(__int64 a1)
{
  _DWORD *v2; // rcx
  _BYTE *v3; // rdx
  __int64 v4; // rdi
  int v5; // r8d
  __int64 v6; // r15
  __int64 v7; // r9
  _KIDTENTRY64 *IdtBase; // r10
  _WORD *v9; // r13
  char *v10; // rcx
  char v11; // al
  _WORD *v12; // r12
  int v13; // r8d
  _BYTE *v14; // rdx
  char *v15; // rcx
  __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rax
  char *v24; // rcx
  char v25; // al
  unsigned __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  char *v35; // r12
  _QWORD *v36; // r13
  unsigned int v37; // r15d
  _QWORD *v38; // r8
  _QWORD *v39; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  _BYTE *v41; // rcx
  char v42; // al
  int v43; // edx
  _QWORD *v44; // rcx
  __int64 v45; // r8
  char v46; // al
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  int v49; // r15d
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rdi
  char *v53; // rcx
  int v54; // edx
  __int64 v55; // r8
  char v56; // al
  int v57; // edx
  char *v58; // rcx
  __int64 v59; // r8
  char v60; // al
  __int64 v62; // [rsp+20h] [rbp-88h]
  _BYTE v63[16]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v64[16]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v65[12]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v66; // [rsp+B0h] [rbp+8h]
  __int64 *v67; // [rsp+C8h] [rbp+20h]

  v2 = *(_DWORD **)(a1 + 2192);
  if ( *v2 == 44 )
  {
    _disable();
    RtlMinimalBarrier(a1 + 2160, 0LL);
    v66 = *(_QWORD *)(a1 + 2200);
    do
    {
      v3 = v63;
      v4 = *(_QWORD *)(a1 + 1824);
      v5 = 16;
      v6 = *(unsigned int *)(a1 + 1868);
      v7 = 2LL;
      IdtBase = KeGetPcr()->IdtBase;
      v9 = (_WORD *)(v4 + 32);
      v10 = (char *)(v4 + 32);
      do
      {
        v5 -= 8;
        *(_QWORD *)v3 = *(_QWORD *)v10;
        v10 += 8;
        v3 += 8;
        --v7;
      }
      while ( v7 );
      for ( ; v5; --v5 )
      {
        v11 = *v10++;
        *v3++ = v11;
      }
      v12 = (_WORD *)(v4 + 288);
      v13 = 16;
      v14 = v64;
      v15 = (char *)(v4 + 288);
      v16 = 2LL;
      do
      {
        v13 -= 8;
        *(_QWORD *)v14 = *(_QWORD *)v15;
        v15 += 8;
        v14 += 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *v15++;
        *v14++ = v17;
      }
      v67 = (__int64 *)(*(_QWORD *)(a1 + 1432) + (((unsigned __int64)IdtBase >> 9) & 0x7FFFFFFFF8LL));
      v62 = *v67;
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2160, 0LL) )
      {
        v18 = v6 + a1 + 16;
        v19 = (_QWORD *)(v4 + 1024);
        *v9 = v18;
        v20 = v18 >> 16;
        v21 = 4096;
        v22 = 512LL;
        *(_DWORD *)(v4 + 40) = HIDWORD(v18);
        v23 = v6 + a1 + 144;
        *(_WORD *)(v4 + 38) = v20;
        *v12 = v23;
        *(_WORD *)(v4 + 294) = WORD1(v23);
        v24 = (char *)v66;
        *(_DWORD *)(v4 + 296) = HIDWORD(v23);
        do
        {
          v21 -= 8;
          *v19 = *(_QWORD *)v24;
          v24 += 8;
          ++v19;
          --v22;
        }
        while ( v22 );
        for ( ; v21; --v21 )
        {
          v25 = *v24++;
          *(_BYTE *)v19 = v25;
          v19 = (_QWORD *)((char *)v19 + 1);
        }
        *(_DWORD *)(a1 + 1790) = -255817396;
        v26 = v65;
        *(_DWORD *)(a1 + 1794) = 296816456;
        *(_DWORD *)(a1 + 1798) = -1010789361;
        LODWORD(v27) = 4;
        *(_QWORD *)(v4 + 5128) = v66;
        v28 = 4LL;
        *(_QWORD *)(v4 + 5136) = v66;
        *(_QWORD *)(v4 + 5120) = a1;
        *(_DWORD *)(v4 + 5172) = -1;
        *(_DWORD *)(v4 + 5168) = 4;
        v29 = *(_QWORD *)(a1 + 1432);
        v30 = v29 + ((v66 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v26++ = v30;
          v30 = v29 + ((v30 >> 9) & 0x7FFFFFFFF8LL);
          --v28;
        }
        while ( v28 );
        do
          v27 = (unsigned int)(v27 - 1);
        while ( (_DWORD)v27 && (*(_DWORD *)v65[v27] & 0x80) == 0 );
        v31 = (_QWORD *)v65[v27];
        *(_QWORD *)(v4 + 5160) = v31;
        *(_QWORD *)(v4 + 5152) = *v31;
      }
      v32 = a1 + 2160;
      RtlMinimalBarrier(a1 + 2160, 0LL);
      *v67 = v62 ^ (v62 ^ (*(_QWORD *)(v4 + 5144) << 12)) & 0xFFFFFFFFF000LL;
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152) | 0x42LL;
      v33 = __readcr4();
      if ( (v33 & 0x20080) != 0 )
      {
        __writecr4(v33 ^ 0x80);
        __writecr4(v33);
      }
      else
      {
        v34 = __readcr3();
        __writecr3(v34);
      }
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2160, 0LL) )
        _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFB);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2160, 0LL) )
      {
        v35 = (char *)(v4 + 1024);
        v36 = (_QWORD *)(v4 + 1024);
        *(_DWORD *)(v4 + 5172) = KeGetPcr()->Prcb.Number;
        v37 = 0;
        v38 = (_QWORD *)(v4 + 5136);
        while ( 1 )
        {
          v39 = (_QWORD *)v66;
          if ( (*(_DWORD *)(a1 + 2012) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            **(_QWORD **)(a1 + 1144) = a1 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(a1 + 1152) = CurrentPrcb;
            **(_QWORD **)(a1 + 1160) = v66 + v37;
            **(_QWORD **)(a1 + 1168) = 276LL;
          }
          v41 = (_BYTE *)(v66 + v37);
          *v38 = v41;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 5168), 2, 0) )
            break;
          if ( (v37 & 7) == 0 )
          {
            v42 = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, _QWORD))(a1 + 1790))(
                    v41,
                    0xC3C3C3C3C3C3C3C3uLL,
                    *v36);
            v38 = (_QWORD *)(v4 + 5136);
            if ( !v42 )
            {
              _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFD);
LABEL_38:
              v39 = (_QWORD *)v66;
              break;
            }
          }
          ((void (__fastcall *)(_QWORD *))(a1 + 1779))(v38);
          _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFD);
          ++v37;
          v38 = (_QWORD *)(v4 + 5136);
          v36 = (_QWORD *)((char *)v36 + 1);
          if ( v37 >= 0x1000 )
            goto LABEL_38;
        }
        if ( v37 != 4096 )
        {
          _InterlockedOr((volatile signed __int32 *)(v4 + 5168), 8u);
          *v38 = (char *)v39 + 4095;
        }
        v43 = 4096;
        v44 = v39;
        v45 = 512LL;
        do
        {
          v43 -= 8;
          *v44 = *(_QWORD *)v35;
          v35 += 8;
          ++v44;
          --v45;
        }
        while ( v45 );
        for ( ; v43; --v43 )
        {
          v46 = *v35++;
          *(_BYTE *)v44 = v46;
          v44 = (_QWORD *)((char *)v44 + 1);
        }
        _InterlockedOr((volatile signed __int32 *)(v4 + 5168), 4u);
        v32 = a1 + 2160;
        v12 = (_WORD *)(v4 + 288);
        v9 = (_WORD *)(v4 + 32);
        if ( (*(_DWORD *)(a1 + 2012) & 0x20000) == 0 )
        {
          **(_QWORD **)(a1 + 1144) = 0xA3A03F5891C8B4E8uLL;
          **(_QWORD **)(a1 + 1152) = 0LL;
          **(_QWORD **)(a1 + 1160) = 0LL;
          **(_QWORD **)(a1 + 1168) = 0LL;
        }
      }
      RtlMinimalBarrier(v32, 0LL);
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152);
      *v67 = v62;
      v47 = __readcr4();
      if ( (v47 & 0x20080) != 0 )
      {
        __writecr4(v47 ^ 0x80);
        __writecr4(v47);
      }
      else
      {
        v48 = __readcr3();
        __writecr3(v48);
      }
      v49 = *(_DWORD *)(v4 + 5168);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2160, 0LL) )
      {
        *(_QWORD *)(v4 + 5120) = 0LL;
        v50 = 4096;
        *(_QWORD *)(v4 + 5128) = 0LL;
        v51 = 512LL;
        *(_QWORD *)(v4 + 5136) = 0LL;
        *(_QWORD *)(v4 + 5152) = 0LL;
        *(_QWORD *)(v4 + 5160) = 0LL;
        *(_QWORD *)(v4 + 5168) = 0LL;
        v52 = (_QWORD *)(v4 + 1024);
        do
        {
          *v52 = 0LL;
          v50 -= 8;
          ++v52;
          --v51;
        }
        while ( v51 );
        for ( ; v50; --v50 )
        {
          *(_BYTE *)v52 = 0;
          v52 = (_QWORD *)((char *)v52 + 1);
        }
        v53 = v63;
        v54 = 16;
        v55 = 2LL;
        do
        {
          v54 -= 8;
          *(_QWORD *)v9 = *(_QWORD *)v53;
          v53 += 8;
          v9 += 4;
          --v55;
        }
        while ( v55 );
        for ( ; v54; --v54 )
        {
          v56 = *v53++;
          *(_BYTE *)v9 = v56;
          v9 = (_WORD *)((char *)v9 + 1);
        }
        v57 = 16;
        v58 = v64;
        v59 = 2LL;
        do
        {
          v57 -= 8;
          *(_QWORD *)v12 = *(_QWORD *)v58;
          v58 += 8;
          v12 += 4;
          --v59;
        }
        while ( v59 );
        for ( ; v57; --v57 )
        {
          v60 = *v58++;
          *(_BYTE *)v12 = v60;
          v12 = (_WORD *)((char *)v12 + 1);
        }
      }
      RtlMinimalBarrier(a1 + 2160, 0LL);
    }
    while ( (v49 & 8) != 0 );
    _enable();
  }
  else if ( !*(_DWORD *)(a1 + 1872) )
  {
    *(_QWORD *)(a1 + 1896) = 257LL;
    *(_QWORD *)(a1 + 1904) = 0LL;
    *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a1 + 1872) = 1;
    *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
  }
  return a1;
}
