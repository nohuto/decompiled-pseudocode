/*
 * XREFs of BuildTranslatorRanges @ 0x1C008AB1C
 * Callers:
 *     TranslateEjectInterface @ 0x1C008B084 (TranslateEjectInterface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 */

__int64 __fastcall BuildTranslatorRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  char *v7; // r13
  unsigned int v8; // ebx
  int v9; // r14d
  char *v10; // rsi
  __int64 v11; // r13
  char *v12; // rbp
  char *v13; // r15
  __int64 v14; // rdx
  __int64 Length; // rcx
  _LARGE_INTEGER MinimumAddress; // rax
  __int64 v17; // rbx
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  unsigned __int64 v20; // rdx
  PVOID v21; // rax
  int v23; // [rsp+20h] [rbp-88h]
  unsigned int v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  char *Src; // [rsp+50h] [rbp-58h]
  struct _IO_RESOURCE_DESCRIPTOR *v27; // [rsp+B0h] [rbp+8h]
  char v28; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v31; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(v3 + 36);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 80 * v4, 0x58706341u);
  v6 = 0;
  Src = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = 0;
    v9 = 0;
    v24 = 0;
    v10 = PoolWithTag;
    if ( !v4 )
      goto LABEL_22;
    v11 = v3;
    v12 = PoolWithTag + 40;
    v13 = (char *)(v3 + 48);
    do
    {
      if ( *(v13 - 7) == -127 && (*((_WORD *)v13 - 2) & 0x6000) != 0 )
      {
        *v10 = *v13;
        v27 = (struct _IO_RESOURCE_DESCRIPTOR *)(v11 + 32LL * (v8 - 1) + 40);
        v10[1] = v27->Type;
        *((_DWORD *)v10 + 2) = *((_DWORD *)v13 + 1);
        *((_DWORD *)v10 + 3) = *((_DWORD *)v13 + 2);
        *((_QWORD *)v10 + 3) = RtlIoDecodeMemIoResource(v27, 0LL, (PULONGLONG)v10 + 2, 0LL);
        *((_DWORD *)v10 + 8) = 3;
        if ( qword_1C0066980 )
        {
          v14 = v11 + 32LL * (v8 - 1) + 40;
          if ( v27->Type == 1 )
          {
            Length = v27->u.Port.Length;
            v25 = *(_QWORD *)(v13 + 4);
            MinimumAddress = v27->u.Port.MinimumAddress;
            v17 = v25 - MinimumAddress.QuadPart;
            v28 = *(v13 - 4) & 1;
            if ( v28 )
              Length = (MinimumAddress.LowPart + (unsigned int)Length) << 10;
            LOBYTE(v14) = *v13 == 3;
            v23 = Length;
            LOBYTE(Length) = *(v13 - 4) & 1;
            if ( (int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, unsigned __int16 *))qword_1C0066980)(
                        Length,
                        v14,
                        0LL,
                        v25 - MinimumAddress.QuadPart,
                        v23,
                        &v31) >= 0 )
            {
              v18 = *((_OWORD *)v10 + 1);
              *(_OWORD *)v12 = *(_OWORD *)v10;
              v19 = *((_QWORD *)v10 + 4);
              *((_OWORD *)v12 + 1) = v18;
              *((_DWORD *)v10 + 8) = 2;
              *((_QWORD *)v12 + 4) = v19;
              if ( v28 )
                *((_QWORD *)v10 + 1) = v17
                                     + ((*((_QWORD *)v10 + 2) & 0xFFFCLL) << 10)
                                     + (*((_QWORD *)v10 + 2) & 0xFFFLL);
              v10 += 40;
              v20 = (unsigned __int64)v31 << 16;
              ++v9;
              v12 += 40;
              *((_DWORD *)v10 + 8) = 1;
              *v10 = 1;
              *((_QWORD *)v10 + 1) = (unsigned __int16)*((_DWORD *)v10 + 4) | v20;
            }
            v8 = v24;
          }
        }
        v10 += 40;
        ++v9;
        v12 += 40;
      }
      ++v8;
      v13 += 32;
      v24 = v8;
    }
    while ( v8 < v4 );
    v7 = Src;
    if ( v9 )
    {
      v21 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v9), 0x58706341u);
      *a3 = v21;
      if ( !v21 )
      {
        v6 = -1073741670;
LABEL_24:
        ExFreePoolWithTag(v7, 0x58706341u);
        return v6;
      }
      memmove(v21, Src, (unsigned int)(40 * v9));
    }
    else
    {
LABEL_22:
      *a3 = 0LL;
    }
    *a2 = v9;
    goto LABEL_24;
  }
  return (unsigned int)-1073741670;
}
