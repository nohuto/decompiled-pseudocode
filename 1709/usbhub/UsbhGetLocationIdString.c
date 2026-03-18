/*
 * XREFs of UsbhGetLocationIdString @ 0x1C00208B0
 * Callers:
 *     UsbhCreatePdo @ 0x1C0016280 (UsbhCreatePdo.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     Short2Bcd @ 0x1C0022310 (Short2Bcd.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  unsigned __int16 v8; // si
  unsigned __int16 v9; // di
  _QWORD *PoolWithTag; // rbx
  _WORD *i; // rcx
  int v12; // ebp
  char *v13; // rax
  char *v14; // rdi
  _WORD *v15; // rcx
  __int64 result; // rax

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = Short2Bcd(*((unsigned __int16 *)v7 + 688));
  v9 = Short2Bcd(*((unsigned __int16 *)v6 + 710));
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x42554855u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  *(_OWORD *)PoolWithTag = *(_OWORD *)L"Port_#nnnn";
  *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"nn";
  for ( i = PoolWithTag; *i != 110; ++i )
    ;
  v12 = 42;
  *i = (v9 >> 12) + 48;
  i[1] = (HIBYTE(v9) & 0xF) + 48;
  i[3] = (v9 & 0xF) + 48;
  i[2] = ((unsigned __int8)v9 >> 4) + 48;
  v13 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
  v14 = v13;
  if ( v13 )
  {
    memset(v13, 0, 0x2AuLL);
    *(_OWORD *)v14 = *(_OWORD *)PoolWithTag;
    *((_DWORD *)v14 + 4) = *((_DWORD *)PoolWithTag + 4);
    v15 = v14 + 20;
    *(_OWORD *)(v14 + 20) = *(_OWORD *)L".Hub_#nnnn";
    for ( *((_DWORD *)v14 + 9) = *(_DWORD *)L"nn"; *v15 != 110; ++v15 )
      ;
    *v15 = (v8 >> 12) + 48;
    v15[1] = (HIBYTE(v8) & 0xF) + 48;
    v15[2] = ((unsigned __int8)v8 >> 4) + 48;
    v15[3] = (v8 & 0xF) + 48;
  }
  else
  {
    v12 = 0;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v14 )
    return 3221225626LL;
  *(_DWORD *)(a4 + 4) = v12;
  *(_WORD *)a4 = 1033;
  result = 0LL;
  *(_QWORD *)(a4 + 8) = v14;
  return result;
}
