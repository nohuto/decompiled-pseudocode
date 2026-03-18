/*
 * XREFs of BuildTranslatorRanges @ 0x1C00A482C
 * Callers:
 *     TranslateEjectInterface @ 0x1C008B25C (TranslateEjectInterface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
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
  __int64 v14; // rcx
  __int64 Length; // rdx
  __int64 v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  int v19; // eax
  unsigned __int64 v20; // rdx
  PVOID v21; // rax
  int v23; // [rsp+20h] [rbp-88h]
  unsigned int v24; // [rsp+40h] [rbp-68h]
  char *Src; // [rsp+50h] [rbp-58h]
  struct _IO_RESOURCE_DESCRIPTOR *v26; // [rsp+B0h] [rbp+8h]
  char v27; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v30; // [rsp+C8h] [rbp+20h] BYREF

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
        v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v11 + 32LL * (v8 - 1) + 40);
        v10[1] = v26->Type;
        *((_DWORD *)v10 + 2) = *((_DWORD *)v13 + 1);
        *((_DWORD *)v10 + 3) = *((_DWORD *)v13 + 2);
        *((_QWORD *)v10 + 3) = RtlIoDecodeMemIoResource(v26, 0LL, (PULONGLONG)v10 + 2, 0LL);
        *((_DWORD *)v10 + 8) = 3;
        if ( qword_1C00768E0 )
        {
          v14 = v11 + 32LL * (v8 - 1) + 40;
          if ( v26->Type == 1 )
          {
            Length = v26->u.Port.Length;
            v16 = *(_QWORD *)(v13 + 4) - v26->u.Port.MinimumAddress.QuadPart;
            v27 = *(v13 - 4) & 1;
            if ( v27 )
              Length = (unsigned int)((*(_DWORD *)(v14 + 16) + (_DWORD)Length) << 10);
            v23 = Length;
            LOBYTE(Length) = *v13 == 3;
            LOBYTE(v14) = *(v13 - 4) & 1;
            if ( (int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, unsigned __int16 *))qword_1C00768E0)(
                        v14,
                        Length,
                        0LL,
                        v16,
                        v23,
                        &v30) >= 0 )
            {
              v17 = *((_OWORD *)v10 + 1);
              *(_OWORD *)v12 = *(_OWORD *)v10;
              v18 = *((_QWORD *)v10 + 4);
              *((_OWORD *)v12 + 1) = v17;
              *((_DWORD *)v10 + 8) = 2;
              *((_QWORD *)v12 + 4) = v18;
              if ( v27 )
                *((_QWORD *)v10 + 1) = v16
                                     + ((*((_QWORD *)v10 + 2) & 0xFFFCLL) << 10)
                                     + (*((_QWORD *)v10 + 2) & 0xFFFLL);
              v19 = *((_DWORD *)v10 + 14);
              v10 += 40;
              ++v9;
              v12 += 40;
              v20 = (unsigned __int16)v19 | ((unsigned __int64)v30 << 16);
              *((_DWORD *)v10 + 8) = 1;
              *((_QWORD *)v10 + 1) = v20;
              *v10 = 1;
            }
            v8 = v24;
          }
        }
        ++v9;
        v10 += 40;
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
