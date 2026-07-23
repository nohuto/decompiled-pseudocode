/*
 * XREFs of sub_180051668 @ 0x180051668
 * Callers:
 *     sub_1800514A0 @ 0x1800514A0 (sub_1800514A0.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 * Callees:
 *     sub_180004554 @ 0x180004554 (sub_180004554.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180051668(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // r9d
  NTSTATUS v5; // edx
  int v7; // eax
  int v8; // esi
  __int64 v9; // r11
  __int64 Length; // rbp
  unsigned __int64 v11; // r10
  NTSTATUS v13; // eax
  __int64 v14; // rax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v7 = *(_DWORD *)(a2 + 4);
  if ( !v7 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v4 = v16;
  }
  *(_DWORD *)(a2 + 48) = v7;
  v8 = 1;
  if ( v7 == 72 && a3 != 1 )
    return (unsigned int)-2147483614;
  if ( *(_QWORD *)(a1 + 144) )
  {
    v9 = *(unsigned int *)(a1 + 320);
    Length = *(unsigned int *)(a1 + 208);
    if ( (_DWORD)v9 )
    {
      v11 = (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          ? *(_QWORD *)(a1 + 360)
          : Length * (*(_DWORD *)(a1 + 336) + ((*(_DWORD *)(a1 + 324) & 8) != 0 ? 2 : 0));
      if ( v11 >= v9 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
        switch ( *(_DWORD *)(a1 + 324) & 0xB )
        {
          case 1:
            v5 = -1073741432;
LABEL_31:
            *(_DWORD *)(a1 + 388) += v4;
            if ( (*(_DWORD *)(a1 + 324) & 0x10000) != 0 )
              *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * *(unsigned __int16 *)(a2 + 42) + 8) += v4;
            return (unsigned int)v5;
          case 2:
            v14 = *(_QWORD *)(a1 + 352);
            *(_QWORD *)(a1 + 360) = v14;
            *(_DWORD *)(a1 + 336) = v14 / Length;
            break;
          case 8:
            *(_DWORD *)(a1 + 332) |= 1u;
            break;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    *(_QWORD *)(a2 + 16) = MEMORY[0x7FFE0014];
    if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    {
      v13 = sub_180004554(a1, (_OWORD *)a2, &v17, &v16);
      v4 = v16;
      v5 = v13;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)Length )
        memset((void *)(a2 + *(unsigned int *)(a2 + 48)), 255, (unsigned int)(Length - *(_DWORD *)(a2 + 48)));
      v5 = ZwWriteFile(
             *(HANDLE *)(a1 + 144),
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             (PVOID)a2,
             Length,
             (PLARGE_INTEGER)(a1 + 360),
             0LL);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 360) += Length;
        v4 = v16;
LABEL_14:
        if ( v5 >= 0 )
        {
          *(_DWORD *)(a1 + 392) += v8;
          *(_DWORD *)(a1 + 336) += v8;
          if ( (*(_DWORD *)(a1 + 324) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * *(unsigned __int16 *)(a2 + 42)) += v8;
          return (unsigned int)v5;
        }
        if ( v5 == -2147483614 )
          return (unsigned int)v5;
        goto LABEL_31;
      }
      v4 = 1;
    }
    v8 = v17;
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
