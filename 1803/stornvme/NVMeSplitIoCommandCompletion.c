/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C000A090
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rbx
  __int64 result; // rax
  _DWORD *v7; // rdx
  unsigned __int8 v8; // cl
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r11
  unsigned int v16; // eax
  unsigned __int64 v17; // r11
  unsigned int v18; // edx
  bool v19; // cc
  unsigned int v20; // r8d
  _QWORD *v21; // r9
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    *(_BYTE *)(v5 + 4253) |= 8u;
    return result;
  }
  v24 = 0LL;
  if ( v4 == 40 )
  {
    v7 = (_DWORD *)(a2 + 60);
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_BYTE *)(a2 + 7);
    v7 = (_DWORD *)(a2 + 16);
  }
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v8 + 1224) + 52LL);
  v24 = *(_QWORD *)(v5 + 4136);
  v10 = (unsigned __int16)*(_DWORD *)(v5 + 4144) + 1;
  v11 = (v9 + *v7 - 1) / v9;
  v24 += v10;
  v12 = v11 - v10;
  *(_QWORD *)(v5 + 4136) = v24;
  *(_WORD *)(v5 + 4144) = v12 - 1;
  v13 = *(_QWORD *)(v5 + 4120);
  v14 = v9 * v10;
  v15 = v14 + (v13 & 0xFFF);
  v16 = (v13 + v14) & 0xFFF;
  v17 = v15 >> 12;
  v18 = (v16 + v9 * v12 + 4095) >> 12;
  if ( (_DWORD)v17 )
  {
    *(_QWORD *)(v5 + 4120) = v16 + *(_QWORD *)(v5 + 8LL * (unsigned int)(v17 - 1));
    if ( v18 == 1 )
      goto LABEL_13;
    if ( v18 == 2 )
    {
      *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v17);
      goto LABEL_25;
    }
    v20 = 0;
    v21 = (_QWORD *)v5;
    do
    {
      v22 = v20 + (unsigned int)v17;
      ++v20;
      *v21++ = *(_QWORD *)(v5 + 8 * v22);
    }
    while ( v20 < v18 - 1 );
    goto LABEL_22;
  }
  *(_QWORD *)(v5 + 4120) = v16 + (v13 & 0xFFFFFFFFFFFFF000uLL);
  if ( v18 != 1 )
  {
    v19 = v18 <= 2;
    if ( v18 != 2 )
      goto LABEL_23;
    *(_QWORD *)(v5 + 4128) = *(_QWORD *)v5;
LABEL_22:
    v19 = v18 <= 2;
LABEL_23:
    if ( !v19 )
      *(_QWORD *)(v5 + 4128) = StorPortGetPhysicalAddress(a1, a2, v5, &v24);
    goto LABEL_25;
  }
LABEL_13:
  *(_QWORD *)(v5 + 4128) = 0LL;
LABEL_25:
  *(_BYTE *)(a2 + 3) = 0;
  v23 = *(_BYTE *)(v5 + 4253) & 0xFE;
  *(_QWORD *)(v5 + 4224) = 0LL;
  *(_BYTE *)(v5 + 4253) = v23 | 6;
  return ProcessCommand(a1, a2);
}
