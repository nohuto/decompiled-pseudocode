/*
 * XREFs of sub_18005FD84 @ 0x18005FD84
 * Callers:
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_180060124 @ 0x180060124 (sub_180060124.c)
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 */

__int64 __fastcall sub_18005FD84(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // ecx
  unsigned int v10; // r14d
  __int16 v12; // si
  unsigned __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r12
  _QWORD *v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-90h]
  _QWORD *v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+88h] [rbp-78h]
  _QWORD *v29; // [rsp+90h] [rbp-70h]
  _QWORD v30[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[18]; // [rsp+100h] [rbp+0h] BYREF
  int v32; // [rsp+1A0h] [rbp+A0h]
  __int64 v34; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v27 = *(_DWORD *)(a1 + 16);
    memset(v30, 0, sizeof(v30));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v28 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v30[0] = a1;
      v30[10] = a1 + 40;
      v30[11] = a1 + a2;
      v6 = v30;
      v30[9] = a1;
      v28 = sub_1800EC270;
    }
    v29 = v6;
    RtlEnterCriticalSection((__int64)&unk_18015AAC0);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == -571548178 )
        v12 = *(_WORD *)(v7 + 60);
      else
        v12 = *(_WORD *)(v7 + 208);
      if ( v12 != -1 )
      {
        RtlLockHeap(v7);
        v7 = *(_QWORD *)(a1 + 8);
      }
      v8 = sub_180060B10(v7, &v27);
      if ( v12 != -1 )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      v8 = sub_180060124(&v27);
    }
    RtlLeaveCriticalSection((__int64)&unk_18015AAC0);
    v9 = 0;
    if ( v8 != -2147483622 )
      v9 = v8;
    v10 = v9;
    if ( v28 == sub_1800EC270 )
    {
      if ( v9 >= 0 )
      {
        v13 = v30[10];
        if ( a3 )
          *a3 = v30[10] - v30[9];
        if ( v13 > v30[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v10;
  }
  else
  {
    v34 = 0LL;
    v22 = 0LL;
    v21 = 0x10000LL;
    v14 = ZwCreateSection(&v34, 983071LL, 0LL, &v21, 4, 0x8000000, 0LL);
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        memset(v31, 0, 0x58uLL);
        v15 = *(_QWORD *)a1;
        v31[2] = *(_QWORD *)(a1 + 8);
        LODWORD(v31[3]) = *(_DWORD *)(a1 + 16);
        v31[1] = v21;
        v31[0] = v34;
        v16 = sub_1800ECAC0(v15, v31);
        v14 = v16;
        if ( v16 != -1073741789 )
          break;
        ZwClose(v34);
        v34 = 0LL;
        v21 = (v31[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
        v14 = ZwCreateSection(&v34, 983071LL, 0LL, &v21, 4, 0x8000000, 0LL);
        if ( v14 < 0 )
          goto LABEL_56;
      }
      if ( v16 >= 0 )
      {
        v23 = 0LL;
        v24 = 0x10000LL;
        v14 = ZwMapViewOfSection(v34, -1LL, &v22, 0LL, 0x10000LL, &v23, &v24, 2, 0, 4);
        if ( v14 >= 0 )
        {
          v17 = 0LL;
          memset(v30, 0, sizeof(v30));
          v25 = *(__int64 (__fastcall **)())(a1 + 24);
          if ( v25 )
          {
            v18 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v30[0] = a1;
            v30[10] = a1 + 40;
            v30[9] = a1;
            v30[11] = a1 + a2;
            v18 = v30;
            v25 = sub_1800EC270;
          }
          v32 = 0;
          v26 = v18;
          if ( LODWORD(v31[5]) )
          {
            while ( 1 )
            {
              v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v19 >= v21 || v19 >= 2 * v24 || (__int64)(v24 + v23) > (__int64)v21 )
                break;
              v20 = v19 + v22;
              if ( v19 + 16 >= v24 || !*(_DWORD *)v20 )
              {
                ZwUnmapViewOfSection(-1LL);
                v22 = 0LL;
                v23 += v24;
                v14 = ZwMapViewOfSection(v34, -1LL, &v22, 0LL, v24, &v23, &v24, 2, 0, 4);
                if ( v14 < 0 )
                  goto LABEL_48;
                v20 = v22;
                v19 = 0LL;
              }
              v14 = ((__int64 (__fastcall *)(__int64, _QWORD *))v25)(v20, v26);
              if ( v14 >= 0 )
              {
                v17 = *(_QWORD *)(v20 + 8) + v19;
                if ( (unsigned int)++v32 < LODWORD(v31[5]) )
                  continue;
              }
              goto LABEL_48;
            }
            v14 = -1073741762;
          }
LABEL_48:
          if ( v25 == sub_1800EC270 )
          {
            if ( v14 >= 0 )
            {
              if ( a3 )
                *a3 = v30[10] - v30[9];
              if ( v30[10] > v30[11] )
                v14 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_56:
    if ( v22 )
      ZwUnmapViewOfSection(-1LL);
    if ( v34 )
      ZwClose(v34);
    return (unsigned int)v14;
  }
}
